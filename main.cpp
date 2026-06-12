#include <iostream>
#include "Livro.h"
#include "LivroAcao.h"
#include "LivroFiccao.h"
#include "LivroTipoFactory.h"
#include "Colecao.h"

int main()
{
    LivroTipoFactory factory;

    LivroTipo *tipoAcao = factory.getTipo("Acao");
    LivroTipo *tipoFiccao = factory.getTipo("Ficcao");

    Livro *livroAcao1 = new LivroAcao("Autor 1", "Titulo 1", tipoAcao);
    Livro *livroAcao2 = livroAcao1->clonar();

    Livro *livroFiccao1 = new LivroFiccao("Autor 2", "Titulo 2", tipoFiccao);
    Livro *livroFiccao2 = livroFiccao1->clonar();

    Colecao acervo;

    acervo.AdicionarLivro(livroAcao1);
    acervo.AdicionarLivro(livroAcao2);
    acervo.AdicionarLivro(livroFiccao1);
    acervo.AdicionarLivro(livroFiccao2);

    cout << "\n=== ACERVO GERAL ===\n";
    Iterator* it = acervo.CriarIterator();
    
    while(it->hasNext()) {
        Livro* livro = it->next();
        livro->getLivro();
        livro->mostrarFlyweightId();
        cout << "Endereco do livro: " << livro << "\n" << endl;
    }

    delete it;
    delete livroAcao1;
    delete livroAcao2;
    delete livroFiccao1;
    delete livroFiccao2;

    return 0;
}
