#include <iostream>

char Jogada(bool& valido)
{
	char alfabeto[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p', 'q', 'r','s','t','u','v','w', 'x', 'y', 'z' };

	char jogada;
	std::cout << "\n\n\nDigite uma letra: \n";
	std::cin >> jogada;
	for (int i = 0; i < 26; i++) 
	{
		if (jogada == alfabeto[i]) 
		{
			valido = true;
			break;
		}		
	}
	return jogada;
}
