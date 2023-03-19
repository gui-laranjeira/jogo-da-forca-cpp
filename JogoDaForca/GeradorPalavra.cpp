#include <cstdlib>
#include <ctime>

const char* gerarPalavra() 
{
    const char* palavras[49] = { "monitor", "vizinho", "gramado", "toalha", "terceiro", "faringe", "assustar", "mordomo", "rodovia", "eternidade", "capela",
        "fluxo","sardinha", "pirata", "ferro", "dificil", "trancar", "casamento", "cativeiro", "descriçao", "maremoto", "coletivo", "grafite", "civilizacao",
        "vitoria", "exemplo", "adivinhar", "xampu", "personagem", "traidor", "citrico", "especular", "afrouxar", "laranjeira", "composto", "progenitor","granizo", "dispositivo",
        "armadilha", "poesia", "umbilical", "relacionamento", "capacete", "envelope", "cronometragem",  "calculadora", "hipnotizar", "marinheiro", "perpetuo" };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int numeroAleatorio = std::rand() % 48 + 0;

    return palavras[numeroAleatorio];
}

