public class Funcionario
{
    protected String nome, codigo;
    protected double salario, salario_base, salario_liquido;
    public Funcionario(String nome, String codigo, double salariop)
    {
        this.nome = nome;
        this.codigo = codigo;
        this.salario = Math.abs(salariop); //faz sempre com o valor positivo mesmo passando negativo
        this.salario_base = Math.abs(salariop);
        this.salario_liquido = Math.abs(salariop);
    }
    public double calculaSalario(double desconto)
    {
        return this.salario_base * (1-desconto);
    }
    public String getNome()
    {
        return this.nome;
    }
    public String getCodigo()
    {
        return this.codigo;
    }
    public double getSalario()
    {
        return this.salario;
    }
    public double getSalarioBase()
    {
        return this.salario_base;
    }
    public double getSalarioLiquido()
    {
        return this.salario_liquido;
    }
    public String toString()
    {
        return String.format("Nome do Empregado: %s\nCodigo: %s\nSalario: %.2f\n", this.nome, this.codigo, this.salario);
    }
}