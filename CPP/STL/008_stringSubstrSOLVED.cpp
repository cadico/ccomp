// Este programa apresenta facilidades para criação de 
// substrings, usando o método substr.
// 1. Rode o programa como ele está.
// 2. Cheque o que ocorre se algum parâmetro do substr for 
// maior que o tamanho do string.
// Resposta:
//
// 3. Acrescente código para verificar todas as substrings
//    da string dada e encontrar o tamanho da maior
//    substring que não contiver vogais. Para a string s,
//    deve imprimir 6, pela substring "rld, W".
//
//    Dica: Use a função find_first_of para achar as
//			vogais. Para achar os tamanhos das substrings
//			sem vogais faça o seguinte: Para cada vogal
//			que achar, mantenha o índice da vogal anterior
//			guardado, subtraia o índice novo do índice guardado e 
//			diminua 1. Quando achar um tamanho maior, atualize
//			a variável maiortamanho.
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
     //Acrescente código aqui!
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
