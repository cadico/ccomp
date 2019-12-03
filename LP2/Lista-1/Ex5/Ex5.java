import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.regex.*;

public class Ex5 {

    public static void main(String[] args) {
        int numPessoas = 0;
        String sexo = "", linha = "", datePattern = "(\\d{2})/{1}(\\d{2})/{1}(\\d{4})";
        Pattern pat = Pattern.compile(datePattern);
        Matcher mat; 
        ArrayList<PessoaIMC> pessoas;
        BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
        while (true) {
            try {
                System.out.println("Digite o numero de pessoas:");
                linha = entrada.readLine();
                numPessoas = Integer.parseUnsignedInt(linha);
                if (numPessoas == 0)
                {
                    System.out.println("---O numero de pessoas deve ser positivo!!!---");
                    continue;
                }
            } catch (NumberFormatException ex) {
                System.out.println("---O numero de pessoas deve ser um inteiro positivo!!!---");
            } catch (IOException ex2) {
                System.out.println("Ops! Algo deu errado.");
                return;
            } catch (NullPointerException ex3) {
                System.out.println(ex3);
                return;
            }
            pessoas = new ArrayList<PessoaIMC>(numPessoas);
            double weight = 0, height = 0;
            String name = "", bornDate = "";
            for (int i = 0; i < numPessoas; i++) {
                while (true) {
                    try {
                        System.out.println("Inserir homem (h) ou mulher(m)?");
                        linha = entrada.readLine();
                        sexo = linha;
                        sexo.toLowerCase();
                    } catch (IOException ex) {
                        System.out.println("Ops! Algo deu errado.");

                    }
                    if (sexo.charAt(0) != 'h' && sexo.charAt(0) != 'm') {
                        System.out.println("---Opcao invalida!!!---");
                    } else
                        break;
                }
                while (true) {
                    try {
                        System.out.println("Digite o nome:");
                        linha = entrada.readLine();
                        name = linha;
                        break;
                    } catch (IOException ex) {
                        System.out.println("Ops! Algo deu errado.");
                    }
                }
                while (true) {
                    try {
                        System.out.println("Digite a data de nascimento:");
                        linha = entrada.readLine();
                        bornDate = linha;
                        mat = pat.matcher(linha);
                        if(mat.matches())
                            break;
                        else
                            System.out.println("---Formato invalido!!! Tente com: 'DD/MM/AAAA'");
                    } catch (IOException ex2) {
                        System.out.println("Ops! Algo deu errado.");
                    }
                }
                while (true) {
                    try {
                        System.out.println("Digite o peso (em quilogramas):");
                        linha = entrada.readLine();
                        weight = Double.parseDouble(linha);
                    } catch (NumberFormatException ex3) {
                        System.out.println("---O peso deve ser um numero real!!!---");
                    } catch (IOException ex4) {
                        System.out.println("Ops! Algo deu errado.");
                    }
                    if (weight <= 0) {
                        System.out.println("---O peso deve ser positivo!!!---");
                    } else
                        break;
                }
                while (true) {
                    try {
                        System.out.println("Digite a altura (em metros):");
                        linha = entrada.readLine();
                        height = Double.parseDouble(linha);
                    } catch (NumberFormatException ex5) {
                        System.out.println("---A altura deve ser um numero real!!!---");
                    } catch (IOException ex6) {
                        System.out.println("Ops! Algo deu errado.");
                    }
                    if (height <= 0) {
                        System.out.println("---A altura deve ser positiva!!!---");
                    } else if (height >= 3.0) {
                        System.out.println("---Digite uma altura valida (maior que 0 e menor que 3 (metros))");
                    } else
                        break;
                }
                if (sexo.charAt(0) == 'h')
                    pessoas.add(new Homem(name, bornDate, weight, height));
                else if (sexo.charAt(0) == 'm')
                    pessoas.add(new Mulher(name, bornDate, weight, height));

            }
            break;
        }
        for (int j = 0; j < pessoas.size(); j++)
            System.out.println(pessoas.get(j));
    }
}
