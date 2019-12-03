//package lp2g32.biblioteca;

import java.util.GregorianCalendar;
public class Pessoa
{
    public String nome;
    public GregorianCalendar dataNasc;

    public Pessoa(String name, String data)
    {
        int ano, mes, dia;
        this.nome = name;
        String[] splitDate = data.split("/");
        dia = Integer.parseInt(splitDate[0]);
        mes = Integer.parseInt(splitDate[1]);
        ano = Integer.parseInt(splitDate[2]);
        this.dataNasc = new GregorianCalendar(ano, mes, dia);
    }

}