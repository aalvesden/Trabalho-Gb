#include <iostream>
#include "Livro.h"
#include "LivroAcao.h"
#include "LivroFiccao.h"

int main() {
    Livro* livroAcao1 = new LivroAcao("Autor 1", "Titulo 1", "Acao");
    Livro* livroAcao2 = livroAcao1->clonar();

    cout << "Livro de Acao original:\n";
    livroAcao1->getLivro();
    std::cout << "Endereco original: " << livroAcao1 << '\n';

    cout << "\nLivro de Acao clonado:\n";
    livroAcao2->getLivro();
    std::cout << "Endereco clone: " << livroAcao2 << '\n';

    Livro* livroFicao1 = new LivroFiccao("Autor 2", "Titulo 2", "Ficcao");
    Livro* livroFicao2 = livroFicao1->clonar();

    cout << "\nLivro de Ficcao original:\n";
    livroFicao1->getLivro();
    std::cout << "Endereco original: " << livroFicao1 << '\n';

    cout << "\nLivro de Ficcao clonado:\n";
    livroFicao2->getLivro();
    std::cout << "Endereco clone: " << livroFicao2 << '\n';

    delete livroAcao1;
    delete livroAcao2;
    delete livroFicao1;
    delete livroFicao2;
}
