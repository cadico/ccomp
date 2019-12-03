import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Ex1
{
    public static void main(String[] args)
    {
        int menu = 0;
        String linha = "";
        BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
        MinhaListaOrdenavel lista = new MinhaListaOrdenavel();
        lista.add(new Homem("Ricardo", "30/04/1999", 70.0, 1.80));
        lista.add(new Mulher("Luciana", "20/05/1970", 90.0, 1.74));
        lista.add(new Homem("Rafael", "09/12/1996", 80.0, 1.83));
        lista.add(new Mulher("Gabriela", "19/12/1998", 45.0, 1.63));
        lista.add(new Homem("Alexandre", "05/01/1969", 100.0, 1.75));
        lista.add(new Mulher("Rayssa", "24/06/1999", 46.0, 1.65));
        lista.add(new Homem("Renan", "22/03/1989", 70.2, 1.75));
        lista.add(new Mulher("Maria", "25/09/1990", 55.0, 1.60));
        lista.add(new Homem("Danilo", "30/04/1999", 72.1, 1.79));
        lista.add(new Mulher("Bruna", "04/08/2000", 60.0, 1.60));
        while (true)
        {
            System.out.println("      1. Imprimir a lista.");
            System.out.println("      2. Sair.");
            System.out.print("Digite sua opcao: ");

            try
            {
                linha = entrada.readLine();
                menu = Integer.parseInt(linha);
            }
            catch(NumberFormatException ex)
            {
                System.out.println("\nOpcao invalida!!!");
                continue;
            }
            catch(IOException ex2)
            {
                System.out.println("\nOps! Algo deu errado, tente novamente.");
            }
            if(menu == 1)
            {
                while(true)
                {
                    System.out.println();
                    System.out.println("   Escolha seu modo de ordenacao:");
                    System.out.println("      1. Alfabetica (A-Z) (Por nome)");
                    System.out.println("      2. Alfabetica (Z-A) (Por nome)");
                    System.out.println("      3. Peso (Menor-Maior)");
                    System.out.println("      4. Peso (Maior-Menor)");
                    System.out.println("      5. Altura (Menor-Maior)");
                    System.out.println("      6. Altura (Maior-Menor)");
                    System.out.println("      7. IMC (Menor-Maior)");
                    System.out.println("      8. IMC (Maior-Menor)");
                    System.out.println("      9. Genero (Homem-Mulher)");
                    System.out.println("      10. Genero (Mulher-Homem)");
                    System.out.print("Digite sua opcao: ");
                    try
                    {
                        linha = entrada.readLine();
                        menu = Integer.parseInt(linha);
                    }
                    catch(NumberFormatException ex3)
                    {
                        System.out.println("\nOpcao Invalida!!!");
                        continue;
                    }
                    catch(IOException ex4)
                    {
                        System.out.println("\nOps! Algo deu errado, tente novamente.");
                    }
                    if (menu <= 10 && menu >=1)
                    {
                        lista.ordena(menu);
                        System.out.println();
                        for (int i = 0; i < 10; i++)
                        {
                            System.out.printf("%s\n", lista.minhaLista.get(i));
                        }
                        System.out.println();
                        break;
                    }
                    else
                        System.out.println("Opcao Invalida!!!");
                }
            }
            else if(menu == 2)
                break;
            else
            {
                System.out.println();
                System.out.println("Opcao invalida!!!");
            }
        }
    }
}