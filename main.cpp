#include <iostream>
#include "Livro.h"
#include "LivroAcao.h"
#include "LivroFiccao.h"
#include "LivroTipoFactory.h"

int main()
{
    LivroTipoFactory factory;

    LivroTipo *tipoAcao = factory.getTipo("Acao");
    LivroTipo *tipoFiccao = factory.getTipo("Ficcao");

    Livro *livroAcao1 = new LivroAcao("Autor 1", "Titulo 1", tipoAcao);

    Livro *livroAcao2 = livroAcao1->clonar();

    cout << "Livro de Acao original:\n";
    livroAcao1->getLivro();
    livroAcao1->mostrarFlyweightId();
    cout << "Endereco do livro acao original: " << livroAcao1<< '\n';

    cout << "\nLivro de Acao clonado:\n";
    livroAcao2->getLivro();
    livroAcao2->mostrarFlyweightId();
    cout << "Endereco do livro acao clone: "<< livroAcao2 << '\n';

    Livro *livroFiccao1 = new LivroFiccao("Autor 2", "Titulo 2", tipoFiccao);

    Livro *livroFiccao2 = livroFiccao1->clonar();

    cout << "\nLivro de Ficcao original:\n";
    livroFiccao1->getLivro();
    livroFiccao1->mostrarFlyweightId();
    cout << "Endereco do livro Ficcao original: " << livroFiccao1 << '\n';

    cout << "\nLivro de Ficcao clonado:\n";
    livroFiccao2->getLivro();
    livroFiccao2->mostrarFlyweightId();
    cout << "Endereco do livro Ficcao clone: " << livroFiccao2 << '\n';

    delete livroAcao1;
    delete livroAcao2;
    delete livroFiccao1;
    delete livroFiccao2;

    return 0;
}
