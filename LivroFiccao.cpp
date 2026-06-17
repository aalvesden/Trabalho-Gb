#include "Livro.h"
#include "LivroFiccao.h"
#include <string>

using namespace std;

LivroFiccao::LivroFiccao(string Autor, string Titulo, LivroTipo* categoria, string estado) : Livro(Autor, Titulo, categoria, estado){}
LivroFiccao::LivroFiccao(const LivroFiccao& livroFiccao) : Livro(livroFiccao){}

Livro* LivroFiccao::clonar(){
    return new LivroFiccao(*this);
}