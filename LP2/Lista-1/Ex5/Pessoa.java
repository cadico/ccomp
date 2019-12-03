public class Pessoa {
    protected String nome;
    protected String dataNascimento;

    public void Pessoa(String name, String bornDate)
    {
        this.nome = name;
        this.dataNascimento = bornDate;
    }
    public String toString(){
        return String.format("Nome: %s\nData de Nascimento: %s\n", this.nome, this.dataNascimento);
    }
}