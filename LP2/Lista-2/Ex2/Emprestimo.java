//package lp2g32.biblioteca;

import java.text.SimpleDateFormat;
import java.util.GregorianCalendar;

public class Emprestimo 
{
    String codigo;
    GregorianCalendar dataEmprestimo, dataDevolucao;
    public Emprestimo(String dataemp, String datadev, String code)
    {
        int dia, mes, ano;
        this.codigo = code;
        String[] splitDate = dataemp.split("/");
        dia = Integer.parseInt(splitDate[0]);
        mes = Integer.parseInt(splitDate[1]);
        ano = Integer.parseInt(splitDate[2]);
        this.dataEmprestimo =new GregorianCalendar(ano, mes, dia);
        splitDate = datadev.split("/");
        dia = Integer.parseInt(splitDate[0]);
        mes = Integer.parseInt(splitDate[1]);
        ano = Integer.parseInt(splitDate[2]);
        this.dataDevolucao = new GregorianCalendar(ano, mes, dia);
    }
    public String toString()
    {
        //SimpleDateFormat fdate = new SimpleDateFormat("dd/mm/yyyy");
        //fdate
        return "";//String.format("Codigo: %s\nData de Emprestimo: %s\nData de Devolucao: %s\n", this.codigo, this.)
    }
}