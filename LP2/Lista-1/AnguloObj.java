import java.lang.Math.*;
public class AnguloObj
{
    private double arcoRad;
    private double angulo;
    public AnguloObj(double ang)
    {
        angulo = ang;
        arcoRad = Math.toRadians(ang);
    }
    public double funcaoSeno()
    {
        return Math.sin(arcoRad);
    }
    public double funcaoCoseno()
    {
        return Math.cos(arcoRad);
    }
    public double funcaoTangente()
    {
        return Math.tan(arcoRad);
    }
    public double funcaoCotangente()
    {
        return (Math.cos(arcoRad) / Math.sin(arcoRad));
    }
    public String toString()
    {
        return String.format("Angulo: %.2f\nArco: %.2f rad\nSeno: %.2f\nCosseno: %.2f\nTangente: %.2f\nCotangente: %.2f\n\n",this.angulo, this.arcoRad, this.funcaoSeno(),
            this.funcaoCoseno(), this.funcaoTangente(), this.funcaoCotangente());
    }
}