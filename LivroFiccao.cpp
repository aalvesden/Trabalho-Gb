#include "Livro.h"
#include "LivroFiccao.h"
#include <string>

using namespace std;

LivroFiccao::LivroFiccao(string Autor, string Titulo, string Categoria) : Livro(Autor, Titulo, Categoria){}
LivroFiccao::LivroFiccao(const LivroFiccao& livroFiccao) : Livro(livroFiccao){}

Livro* LivroFiccao::clonar(){
    return new LivroFiccao(*this);
}