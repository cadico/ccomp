import java.util.*;

public class MinhaListaOrdenavel{
    public ArrayList<PessoaIMC> minhaLista;

    public MinhaListaOrdenavel() {
        this.minhaLista = new ArrayList<PessoaIMC>();
    }

    public void add(PessoaIMC p){
        this.minhaLista.add(p);
    }

    public PessoaIMC get(int i) {
        return this.minhaLista.get(i);
    }

    public Comparator pesoC = new Comparator() {
        public int compare(Object p1, Object p2) {
            double pf1, pf2;
            pf2 = ((PessoaIMC)p2).getPeso();
            pf1 = ((PessoaIMC)p1).getPeso();
            return (int) Math.round((100*pf1) - (100*pf2));
        }
    };

    public Comparator alturaC = new Comparator() {
        public int compare(Object p1, Object p2) {
            double pf1, pf2;
            pf2 = ((PessoaIMC)p2).getAltura();
            pf1 = ((PessoaIMC)p1).getAltura();
            return (int) Math.round((100*pf1) - (100*pf2));
        }
    };

    public Comparator nomeC = new Comparator() {
        public int compare(Object p1, Object p2) {
            String pf1, pf2;
            pf2 = ((PessoaIMC)p2).getNome();
            pf1 = ((PessoaIMC)p1).getNome();
            return pf1.compareToIgnoreCase(pf2);
        }
    };

    public Comparator imcC = new Comparator() {
        public int compare(Object p1, Object p2) {
            double pf1, pf2;
            pf2 = ((PessoaIMC) p2).getIMC();
            pf1 = ((PessoaIMC) p1).getIMC();
            return (int) Math.round((100*pf1) - (100*pf2));
        }
    };

    public Comparator genC = new Comparator(){
        public int compare(Object p1, Object p2)
        {
            if((p2 instanceof Mulher) && (p1 instanceof Homem))
                return -1;
            else if((p2 instanceof Homem) && (p1 instanceof Mulher))
                return 1;
            else
                return 0;
        }
    };
    public ArrayList ordena(int CRITERIO){
        switch (CRITERIO){
            case 1:
                Collections.sort(this.minhaLista, nomeC);
                break;
            case 2:
                Collections.sort(this.minhaLista, Collections.reverseOrder(nomeC));
                break;
            case 3:
                Collections.sort(this.minhaLista, pesoC);
                break;
            case 4:
                Collections.sort(this.minhaLista, Collections.reverseOrder(pesoC));
                break;
            case 5:
                Collections.sort(this.minhaLista, alturaC);
                break;
            case 6:
                Collections.sort(this.minhaLista, Collections.reverseOrder(alturaC));
                break;
            case 7:
                Collections.sort(this.minhaLista, imcC);
                break;
            case 8:
                Collections.sort(this.minhaLista, Collections.reverseOrder(imcC));
                break;
            case 9:
                Collections.sort(this.minhaLista, genC);
                break;
            case 10:
                Collections.sort(this.minhaLista, Collections.reverseOrder(genC));
                break;
        };
        return this.minhaLista;
    }

}