import java.lang.StrictMath;
import java.util.*;
public class Ex1{
    public static double val[] = new double[3];
    private static double calcula(double raio)
    {
        return (StrictMath.PI * (raio*raio));
    }
    private static double calcula(double b, double h)
    {
        return (b*h);
    }
    private static double calcula(double a, double b, double c)
    {
        double p = (a+b+c)/2;
        double area = StrictMath.sqrt((p * (p - a) * (p - b) * (p - c)));
        return area;
    }
    private static String triangletype(double a, double b, double c)
    {
        if(a == b && b == c)
        {
            return "(Equilatero)";
        }
        else if(a == b || a == c || b == c)
        {
            return "(Isosceles)";
        }
        else
        {
            return "(Escaleno)";
        }
    }
    public static void main(String[] args)
    {
        boolean chave = true;
        int len = args.length, cont = 0;
        String excecoes[] = new String[5]; 

        if (len < 1)
            System.out.println("Numero de argumentos insuficiente. Digite de 1 a 3 argumentos.");
        else if(len > 3)
            System.out.println("Numero de argumentos excessivo. Digite de 1 a 3 argumentos.");
        else 
        {
	    for(int i = 0; i < len; i++)
	    {

            	try{
                	Ex1.val[i] = Double.parseDouble(args[i]);
    
            	}
            	catch(NumberFormatException e1)
            	{
                	excecoes[cont] = args[i];
                	cont++;
                	chave = false;
            	}
            }
        }

        if(chave == true){
            if (len == 1)
            {
                if(Ex1.val[0] <= 0)
                {
                    System.out.println("O(s) argumentos nao pode(m) ser nulo(s) e/ou negativo(s)");
                }
                else{
                    System.out.println("Figura: Circulo");
                    System.out.print("Area: ");
                    System.out.printf("%.3f\n", Ex1.calcula(Ex1.val[0]));
                }
            }
            else if (len == 2)
            {
                if(Ex1.val[0] <= 0 || Ex1.val[1] <= 0)
                {
                    System.out.println("O(s) argumentos nao pode(m) ser nulo(s) e/ou negativo(s)");
                }
                else{
                    System.out.println("Figura: Retangulo");
                    System.out.print("Area: ");
                    System.out.printf("%.3f\n", Ex1.calcula(Ex1.val[0], Ex1.val[1]));
                }
            }
            else if (len == 3)
            {
                            
                if(Ex1.val[0] <= 0 || Ex1.val[1] <= 0 || Ex1.val[2] <= 0)
                    System.out.println("O(s) argumentos nao pode(m) ser nulo(s) e/ou negativo(s)");
                else{
                    if( ((Ex1.val[0] + Ex1.val[1]) > Ex1.val[2]) && ((Ex1.val[0] + Ex1.val[2]) > Ex1.val[1]) && ((Ex1.val[1] + Ex1.val[2]) > Ex1.val[0]))
                    {
                        System.out.print("Figura: Triangulo ");
                        System.out.println(Ex1.triangletype(Ex1.val[0], Ex1.val[1], Ex1.val[2]));
                        System.out.print("Area: ");
                        System.out.printf("%.3f\n", Ex1.calcula(Ex1.val[0], Ex1.val[1], Ex1.val[2]));
                    }
                    else
                        System.out.println("As medidas dadas nao formam um triangulo.");
                }
            }
        }
        else
        {
            for(int i = 0; i < cont; i++)
            {
                System.out.printf("%s nao eh numero.\n", excecoes[i]);
            }
        }
    }
}
