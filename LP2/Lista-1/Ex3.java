import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
public class Ex3
{
    public static void main(String[] args)
    {
        BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        int casos = 0;
        double angulo = 0;
        System.out.println("Digite o numero de angulos:");
        try
        {
            linha = entrada.readLine();
        }
        catch (IOException ex)
        {
            System.out.println("Ops. Algo deu errado. Tente digitar um inteiro:\n");
            return;
        }
        try
        {
            casos = Integer.parseInt(linha);
        }
        catch (NumberFormatException e)
        {
            System.out.printf("Erro: nao foi possivel converter '%s' para um inteiro.\n\n", linha);
            return;
        }
        if(casos <= 0)
        {
            System.out.println("Erro. Digite um numero positivo de angulos.");
        }
        else
        {
            AnguloObj[] objetos = new AnguloObj[casos];
            int cont = 0;
            for(int i = 0; i < casos; i++)
            {
                boolean chave = true;
                System.out.printf("Digite a medida em graus do %dº angulo: ", i+1);
                try
                {
                    linha = entrada.readLine();
                    angulo = Double.parseDouble(linha);
                }
                catch (NumberFormatException e)
                {
                    chave = false;
                    System.out.printf("Erro: nao foi possivel converter %s para double.\n\n", linha);
                }
                catch (IOException ex)
                {
                    chave = false;
                    System.out.println("Ops. Algo deu errado. Tente digitar um numero:\n");
                }
                if(chave)
                {
                    objetos[cont] = new AnguloObj(angulo);
                    cont++;
                }  
            }
            for(int j = 0; j < cont; j++)
            {
                System.out.printf("\n%s", objetos[j].toString());
            }
        }
    }
}