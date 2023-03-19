#pragma once
#ifndef TABULEIRO_H
#define TABULEIRO_H
#include "GeradorTabuleiro.h"
#include <list>

class Tabuleiro
{
	private:
		std::string m_palavraChave;
		int palavraLength;
		const char* char_array;
	public:
		int m_vidas;
		std::string m_tabuleiro;
		std::string m_palavraOculta;
		std::list<char> jogadas;
		int indexLetraCorreta;



		Tabuleiro(int vida, std::string palavraChave);
		void GerarPalavraOculta();
		void GerarTabuleiro();
		void PrintarTabuleiro();
		void ValidarJogada(char jogada, bool& acerto);
		
};

#endif