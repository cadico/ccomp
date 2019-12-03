public class Mulher extends PessoaIMC
{
    public Mulher(String name, String bornDate, double weight, double height)
    {
        super(name, bornDate, weight, height);
    }
    @Override
    public String resultIMC()
    {
        if(calculaIMC(this.peso, this.altura) < 19)
            return "Abaixo do peso ideal";
        else if(calculaIMC(this.peso, this.altura) <= 25.8)
            return "Peso ideal";
        else
            return "Acima do peso ideal";
        
    }
}