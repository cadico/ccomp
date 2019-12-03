//package lp2g32.biblioteca;
import java.util.ArrayList;

public class Livro
{
    String codigo, titulo, categoria;
    ArrayList<EmprestadoPara> Historico;
    int quantidade, emprestados;

    public void Livro(String code, String title, String category, int amount, int loan)
    {
        this.codigo = code;
        this.titulo = title;
        this.categoria = category;
        this.quantidade = amount;
        this.emprestados = loan;
    }
    public void Livro(String title)
    {
        this.titulo = title;
    }

    public void empresta() throws CopiaNaoDisponivelEx
    {
        if(this.quantidade == 0)
        {
            throw new CopiaNaoDisponivelEx();
        }
        else
        {
            this.emprestados += 1;
            this.quantidade -= 1;
        }
    }

    public void devolve() throws NenhumaCopiaEmprestadaEx
    {
        if(this.emprestados == 0)
        {
            throw new NenhumaCopiaEmprestadaEx();
        }
        else
        {
            this.quantidade += 1;
            this.emprestados -= 1;
        }
    }

    public void addLivroHist(String dataloc, String datadev, int code)
    {
        this.Historico.add(new EmprestadoPara(dataloc, datadev, code));
    }
}