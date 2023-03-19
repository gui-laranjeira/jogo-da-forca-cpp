#include <iostream>
#include <string>
#include <stdlib.h>
#include "GeradorPalavra.h"
#include "GeradorTabuleiro.h"
#include "Tabuleiro.h"
#include "Jogada.h"

int main()
{
	//INICIALIZA��O DAS VARIAVEIS
	short vidas = 10;
	bool vitoria = false, derrota = false, fim = false;

	//INICIALIZA��O DA PALAVRACHAVE E DO TABULEIRO
	const char* palavraChave = gerarPalavra();
	Tabuleiro tabuleiro(vidas, palavraChave);
	tabuleiro.GerarPalavraOculta();
	tabuleiro.GerarTabuleiro();


	//INICIO DO JOGO
	std::cout << "Bem vindo ao jogo da Forca!" << std::endl;	
	tabuleiro.PrintarTabuleiro();
	do 
	{
		char jogada; bool validacao = false;
		do 
		{
			
			jogada = Jogada(validacao);
			if (validacao)
			{
				bool acerto = false;
				tabuleiro.ValidarJogada(jogada, acerto);
				if (acerto == true) 
				{
					system("cls");
					tabuleiro.PrintarTabuleiro();
				}				
			}
			else
			{
				std::cout << "Digite um caracter v�lido!" << std::endl;
			}

		} while (validacao == false);
		

	} while (fim == false);	
}