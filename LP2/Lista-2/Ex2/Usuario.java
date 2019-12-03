//package lp2g32.biblioteca;

import java.util.ArrayList;

public class Usuario extends Pessoa
{
    String endereco;
    ArrayList<Emprestimo> Historico;
    int codigoUsuario;

    public Usuario(String name, String date, String address, int usercode)
    {
        super(name, date);
        this.endereco = address;
        this.codigoUsuario = usercode;
    }

    public void addLivroHist(String dataemp, String datadev, String code)
    {
        this.Historico.add(new Emprestimo(dataemp, datadev, code));
    }

    public String toString()
    {
        String historico = "";
        for (int i = 0; i < this.Historico.size(); i++)
        {
            historico  = historico + this.Historico.get(i).toString() + "\n";
        }
        return String.format("Endereco: %s\nHistorico:" + historico + "Codigo do Usuario: %d", this.endereco, this.codigoUsuario);
    }
}