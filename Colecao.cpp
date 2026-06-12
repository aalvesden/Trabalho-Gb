#include "Colecao.h"

void Colecao::AdicionarLivro(Livro* l){
    acervo.push_back(l);
}

Iterator* Colecao::CriarIterator(){
    return new IteratorColecao(acervo);
}