import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Ex2
{
    public static void main(String[] args)
    {
        BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        double angle = 0;
        boolean chave = true;
        if (args.length == 1)
        {
            //Primeiro valor (da linha de comando)
            try
            {
                angle = Double.parseDouble(args[0]);
                angle = Angulo.converteAngulo(angle);
            }
            catch(NumberFormatException ex)
            {
                System.out.printf("Parametro '%s' passado nao eh numero\n\n", args[0]);
                chave = false;
            }
            if (chave)
            {
                System.out.printf("Seno: %.2f\n", Angulo.funcaoSeno(angle));
                System.out.printf("Cosseno: %.2f\n", Angulo.funcaoCoseno(angle));
                System.out.printf("Tangente: %.2f\n", Angulo.funcaoTangente(angle));
                System.out.printf("Cotangente: %.2f\n\n", Angulo.funcaoCotangente(angle));  
            }
        }
        else if (args.length > 1)
            System.out.println("Numero de argumentos excessivo. Digite 1 (um) argumento por vez.\n\n");
        //Fluxo de entrada:
        System.out.println("Digite uma medida em graus do angulo:");
        try
        {
            linha = entrada.readLine();
            chave = true;
        }
        catch(IOException e)
        {
            System.out.println("Ops, algo deu errado. Digite um numero.");
            return;
        }
        while(!linha.isEmpty())
        {
            try
            {
                angle = Double.parseDouble(linha);
                angle = Angulo.converteAngulo(angle);
            }
            catch(NumberFormatException ex)
            {
                System.out.printf("Erro. nao foi possivel converter '%s' para um numero.\n\n", linha);
                chave = false;
            }
            if (chave)
            {
                System.out.printf("Seno: %.2f\n", Angulo.funcaoSeno(angle));
                System.out.printf("Cosseno: %.2f\n", Angulo.funcaoCoseno(angle));
                System.out.printf("Tangente: %.2f\n", Angulo.funcaoTangente(angle));
                System.out.printf("Cotangente: %.2f\n\n", Angulo.funcaoCotangente(angle));
            }
            System.out.println("Digite uma medida em graus do angulo:");
            try
            {
                linha = entrada.readLine();
                chave = true;
            }
            catch(IOException e)
            {
                System.out.println("Ops, algo deu errado. Digite um numero.");
                return;
            }
        }            
    }
}