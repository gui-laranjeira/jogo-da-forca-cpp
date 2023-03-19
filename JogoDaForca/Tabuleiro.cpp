#include "Tabuleiro.h"
#include <iostream>
#include <string>
#include "GeradorTabuleiro.h"

void print(std::list<char> const& list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "\n";
}

Tabuleiro::Tabuleiro(int vidas, std::string palavraChave)
{
	m_vidas = vidas;
	m_palavraChave = palavraChave;
	palavraLength = m_palavraChave.length();
	char_array = m_palavraChave.c_str();
}

void Tabuleiro::GerarPalavraOculta()
{
	m_palavraOculta = gerarPalavraOculta(m_palavraChave);
}

void Tabuleiro::GerarTabuleiro()
{
	m_tabuleiro = gerarTabuleiro(m_vidas);
}

void Tabuleiro::PrintarTabuleiro()
{
	
	std::cout << m_tabuleiro << m_palavraOculta << "           ";
	print(jogadas);	
}


void Tabuleiro::ValidarJogada(char jogada, bool& acerto) 
{
	bool errou = true;
	for (int i = 0; i < palavraLength; i++)
	{
		char letraCorreta = char_array[i];

		if (jogada == letraCorreta)
		{
			m_palavraOculta[i] = jogada;			
			acerto = true;			
			errou = false;
		}		
	}

	jogadas.push_back(jogada);

	if(errou == true)
	{		
		m_vidas--;
	}	
}

