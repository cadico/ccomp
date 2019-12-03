public abstract class PessoaIMC extends Pessoa{
    protected double peso;
    protected double altura;

    public PessoaIMC(String name, String bornDate, double weight, double height)
    {
        this.nome = name;
        this.dataNascimento = bornDate;
        this.peso = weight;
        this.altura = height;
    }
    public double getPeso()
    {
        return this.peso;
    } 
    public double getAltura()
    {
        return this.altura;
    }
    public double calculaIMC(double weight, double height)
    {
        return weight / (height * height);
    }
    
    public double getIMC()
    {
        return this.peso / (this.altura * this.altura);
    }
    public String getNome()
    {
        return this.nome;
    }
    public abstract String resultIMC();

    @Override
    public String toString()
    {
        return (super.toString() + String.format("Peso: %.2f\nAltura: %.2f\nIMC: %.2f  (%s)\n", this.peso, this.altura,
                 this.calculaIMC(this.peso, this.altura), this.resultIMC()));
    }
}