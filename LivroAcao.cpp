#include "Livro.h"
#include "LivroAcao.h"
#include <string>

using namespace std;

LivroAcao::LivroAcao(string Autor, string Titulo, LivroTipo* categoria, string estado) : Livro(Autor, Titulo, categoria, estado){}
LivroAcao::LivroAcao(const LivroAcao& livroAcao) : Livro(livroAcao){}

Livro* LivroAcao::clonar(){
    return new LivroAcao(*this);
}