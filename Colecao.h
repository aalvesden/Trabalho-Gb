#include "Livro.h"
#include "Iterator.h"
#include "IteratorColecao.h"
#include <vector>

class Colecao {
private:
    vector<Livro*> acervo;
public:
    ~Colecao();
    void AdicionarLivro(Livro* l);
    Iterator* CriarIterator();
};