#include <iostream>
#include <string>


std::string gerarTabuleiro(int vidas)
{  

    std::string tabuleiro = (" *____*\n |/    '             Vidas: " + vidas);
    tabuleiro += "\n |\n |\n |\n |\n |";    
    return tabuleiro;
}

std::string gerarPalavraOculta(std::string palavraChave)
{
    std::string palavraOculta;
    for (int i = 0; i < palavraChave.length(); i++)
    {      
           palavraOculta += "_ ";
        
    };
    return palavraOculta;
}

std::string gerarPalavraOculta(std::string palavraChave, char letraCorreta)
{
    std::string palavraOculta;
    for (int i = 0; i < palavraChave.length(); i++)
    {
       
        if (palavraChave[i] == letraCorreta)
        {
            palavraOculta += letraCorreta + " ";
        }
        else
        {
            palavraOculta += "_ ";                 
        }
    };
    return palavraOculta;
}