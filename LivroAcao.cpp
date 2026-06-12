#include "Livro.h"
#include "LivroAcao.h"
#include <string>

using namespace std;

LivroAcao::LivroAcao(string Autor, string Titulo, LivroTipo* categoria) : Livro(Autor, Titulo, categoria){}
LivroAcao::LivroAcao(const LivroAcao& livroAcao) : Livro(livroAcao){}

Livro* LivroAcao::clonar(){
    return new LivroAcao(*this);
}