//package lp2g32.biblioteca;

import java.util.GregorianCalendar;

public class EmprestadoPara
{
    GregorianCalendar dataemprestimo, datadev;
    int codigo;

    public EmprestadoPara(String dataemp, String datadev, int code)
    {
        int dia, mes, ano;
        this.codigo = code;
        String[] splitDate = dataemp.split("/");
        dia = Integer.parseInt(splitDate[0]);
        mes = Integer.parseInt(splitDate[1]);
        ano = Integer.parseInt(splitDate[2]);
        this.dataemprestimo = new GregorianCalendar(ano, mes, dia);
        splitDate = datadev.split("/");
        dia = Integer.parseInt(splitDate[0]);
        mes = Integer.parseInt(splitDate[1]);
        ano = Integer.parseInt(splitDate[2]);
        this.datadev = new GregorianCalendar(ano, mes, dia);
    }
}