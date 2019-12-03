import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Ex4
{
    public FuncionarioContratado[] funcionarios;
    public int cont = 0;
    public static BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
    public static String linha = "";
    public static Ex4 programa2 = null;
    public Ex4(int objetos)
    {
        this.funcionarios  = new FuncionarioContratado[objetos];
    }
    public static void main(String[] args)
    {
        int empregados = 0;
        System.out.println("Digite o numero de funcionarios:");
        try
        {
            linha = entrada.readLine();
            empregados = Integer.parseInt(linha);
        }
        catch(NumberFormatException e)
        {
            System.out.printf("Erro: nao foi possivel converter %s para um inteiro\n", linha);
            return;
        }
        catch(IOException ex)
        {
            System.out.println("Ops: algo deu errado, tente digitando um inteiro");
            return;
        }
        Ex4 programa = new Ex4(empregados);
        Ex4.programa2 = programa;
        System.out.println("--- Cadastro de funcionarios");
        for (int i = 0; i < empregados; i++)
        {
            programa.calculaSalarios();
            programa.cont += 1;
        }
        System.out.println("--- Folha Salarial ---");
        for(int j = 0; j < empregados; j++)
        {
            System.out.println( programa.funcionarios[j].toString());
            System.out.println("----");
        }
    }
    public void calculaSalarios()
    {
        String nome = "", codigo = "";
        double salario = 0;
        int dependentes = 0;
        boolean chave1 = false;
        boolean chave2 = false;
        try
        {
            System.out.printf("Nome do funcionario: ");
            nome = entrada.readLine();
            System.out.printf("Codigo: ");
            codigo = entrada.readLine();
        }
        catch(IOException e)
        {
            System.out.println("Ops: algo deu errado.");
        }
        while(!chave1)
        {
            try
            {
                System.out.printf("Salario: ");
                linha = entrada.readLine();
                salario = Double.parseDouble(linha);
                chave1 = true;
            }
            catch(IOException e)
            {
                System.out.println("Ops: algo deu errado.");
            }
            catch(NumberFormatException ex)
            {
                System.out.printf("Nao foi possivel converter %s para um numero.\n", linha);
            }
        }
        while(!chave2)
        {
            try
            {
                System.out.printf("Numero de dependentes: ");
                linha = entrada.readLine();
                dependentes = Integer.parseInt(linha);
                chave2 = true;
            }
            catch(IOException e)
            {
                System.out.println("Ops: algo deu errado.");
            }
            catch (NumberFormatException ex2)
            {
                System.out.printf("Nao foi possivel converter %s para um numero.\n", linha);
            }
        }
        Ex4.programa2.funcionarios[Ex4.programa2.cont] = new FuncionarioContratado(nome, codigo, salario, dependentes);
        System.out.println("----");
    }
}