#pragma once
#include "Iterator.h"
#include <vector>

class IteratorColecao : public Iterator {
private:
    vector<Livro*> livros;
    size_t indiceLivro = 0;

public:
    IteratorColecao(vector<Livro*>& livros);

    bool hasNext() override;
    Livro* next() override;
};