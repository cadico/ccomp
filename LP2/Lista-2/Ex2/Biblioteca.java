//package lp2g32.biblioteca;

import java.io.ObjectOutputStream;
import java.util.Hashtable;
import java.io.*;

public class Biblioteca
{
    Hashtable<Integer, Usuario> users;
    Hashtable<String, Livro> books;

    public void Biblioteca()
    {
        this.users = new Hashtable<Integer, Usuario>();
        this.books = new Hashtable<String, Livro>();
    }

    public void Biblioteca(String arqUsers, String arqBooks)
    {
        leArquivo(arqUsers, true);
        leArquivo(arqBooks, false);
        //Carrega os registros nos arquivos correspondentes
    }

    public void cadastraUsuario(Usuario user)
    {
        this.users.put(user.codigoUsuario, user);
    }

    public void cadastraLivro(Livro book)
    {
        this.books.put(book.codigo, book);
    }

    public void salvaArquivo(Hashtable tabela, String arq)
    {
        try {
			FileOutputStream f = new FileOutputStream(new File(arq));
			ObjectOutputStream o = new ObjectOutputStream(f);
            o.writeObject(tabela);
            o.close();
			f.close();
		} catch (FileNotFoundException e) {
			System.out.println("Erro: Arquivo nao encontrado.");
		} catch (IOException e) {
            System.out.println("Error initializing stream");
        }
    }

    public void leArquivo(String file_name, boolean key)
    {

    }
}