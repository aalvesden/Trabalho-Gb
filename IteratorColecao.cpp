#include "IteratorColecao.h"

IteratorColecao::IteratorColecao(vector<Livro*>& livros) : livros(livros) {}

bool IteratorColecao::hasNext() {
    return indiceLivro < livros.size();
}

Livro* IteratorColecao::next() {
    return livros[indiceLivro++];
}