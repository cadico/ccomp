public class FuncionarioContratado extends Funcionario
{
    private int numdep;
    private double salario_familia, valorPorDep = 9.58, aliquotaIR = 0.15;
    public FuncionarioContratado(String nome, String codigo , double salario, int numeroDependentes)
    {
        super(nome, codigo, salario);
        this.numdep = Math.abs(numeroDependentes);//usa sempre valor positivo se passado negativo
        this.calculaSalario(this.numdep); 
    }
    public void calculaSalario()
    {
        this.salario_liquido = super.calculaSalario(this.aliquotaIR);
    }
    public void calculaSalario(int numeroDependentes)
    {
        this.salario_familia = (numeroDependentes * valorPorDep);
        this.salario_base += salario_familia;
        this.calculaSalario();
    }
    public double getSalarioFamilia()
    {
        return this.salario_familia;
    }
    public int getDependentes()
    {
        return this.numdep;
    }
    public double getValorPorDep()
    {
        return this.valorPorDep;
    }
    public double getAliquota()
    {
        return this.aliquotaIR;
    }
    public String toString()
    {
        return String.format("Nome: %s\nCodigo: %s\nSalario-Base: %.2f\nSalario-Liquido: %.2f\n", this.nome, this.codigo, 
                            this.salario_base, this.salario_liquido);
    }
}