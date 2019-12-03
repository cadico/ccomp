import java.lang.Math.*;

public class Angulo{
    public static double converteAngulo(double ang){
        return Math.toRadians(ang);
    }
    public static double funcaoSeno(double ang){
        return Math.sin(ang);
    }
    public static double funcaoCoseno(double ang){
        return Math.cos(ang);
    }
    public static double funcaoTangente(double ang){
        return Math.tan(ang);
    }
    public static double funcaoCotangente(double ang){
        return (Math.cos(ang) / Math.sin(ang));
    }
}