#include <iostream>
#include "Livro.h"
#include "LivroAcao.h"

int main() {
    Livro* livro1 = new LivroAcao("Autor 1", "Titulo 1", "Acao");
    Livro* livro2 = livro1->clonar();

    cout << "Livro original:\n";
    livro1->getLivro();
    std::cout << "Endereco original: " << livro1 << '\n';

    cout << "\nLivro clonado:\n";
    livro2->getLivro();
    std::cout << "Endereco clone: " << livro2 << '\n';

    delete livro1;
    delete livro2;
}
