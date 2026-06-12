#include "Colecao.h"

Colecao::~Colecao()
{
    for(Livro* livro : acervo)
    {
        delete livro;
    }
}

void Colecao::AdicionarLivro(Livro* l){
    acervo.push_back(l);
}

Iterator* Colecao::CriarIterator(){
    return new IteratorColecao(acervo);
}