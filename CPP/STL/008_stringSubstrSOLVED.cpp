// Este programa apresenta facilidades para cria��o de 
// substrings, usando o m�todo substr.
// 1. Rode o programa como ele est�.
// 2. Cheque o que ocorre se algum par�metro do substr for 
// maior que o tamanho do string.
// Resposta:
//
// 3. Acrescente c�digo para verificar todas as substrings
//    da string dada e encontrar o tamanho da maior
//    substring que n�o contiver vogais. Para a string s,
//    deve imprimir 6, pela substring "rld, W".
//
//    Dica: Use a fun��o find_first_of para achar as
//			vogais. Para achar os tamanhos das substrings
//			sem vogais fa�a o seguinte: Para cada vogal
//			que achar, mantenha o �ndice da vogal anterior
//			guardado, subtraia o �ndice novo do �ndice guardado e 
//			diminua 1. Quando achar um tamanho maior, atualize
//			a vari�vel maiortamanho.
#include <iostream>
#include <string>         // std::string
#include <cstddef>        // std::size_t

using namespace std;

int main()
{
     string s = "Hello World, World";
     string sub = "aeiou";
     cout << s.substr(1, 30) << endl;
     cout << s.substr(1) << endl;
     int maiortamanho = 0, aux, aux2;
     //Acrescente c�digo aqui!
	 aux = s.find_first_of(sub, 0);
	 aux2 = s.find_first_of(sub, aux+1);
	 maiortamanho = aux2 - aux - 1;
	 while ( aux != -1)
	 {
	 	aux = s.find_first_of(sub, aux2+1);
	 	aux2 = s.find_first_of(sub, aux+1);
	 	if (( aux2 - aux - 1) > maiortamanho)
	 		maiortamanho = ( aux2 - aux - 1);
	 }
     //
     cout << maiortamanho << endl;
     return 0;
}
