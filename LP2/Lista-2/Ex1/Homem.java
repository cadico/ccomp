public class Homem extends PessoaIMC
{
    public Homem(String name, String bornDate, double weight, double height){
        super(name, bornDate, weight, height);
    }
    @Override
    public String resultIMC()
    {
        if(calculaIMC(this.peso, this.altura) < 20.7)
            return "Abaixo do peso ideal";
        else if(calculaIMC(this.peso, this.altura) <= 26.4)
            return "Peso ideal";
        else
            return "Acima do peso ideal";
        
    }
}