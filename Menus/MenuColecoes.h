#pragma once

#include "Menu.h"

class MenuColecoes : public Menu
{
public:
    void executar(SistemaBiblioteca& sistema) override {
        cout << "\n=== Colecoes da Biblioteca ===\n" << endl;

        Iterator* it = sistema.acervo.CriarIterator();
        Iterator* it2 = sistema.acervo.CriarIterator();

        std::cout << "=== Livros de Acao ===" << std::endl;
        while(it->hasNext()) {
        Livro* livro = it->next();

            if (livro->getCategoria()->getCategoria() == "Acao") {
                livro->getLivro();
                livro->mostrarFlyweightId();
                cout << "Endereco do livro: " << livro << "\n" << endl;
            }
        }

        std::cout << "=== Livros de Ficcao ===" << std::endl;
        while(it2->hasNext()) {
            Livro* livro = it2->next();

            if (livro->getCategoria()->getCategoria() == "Ficcao") {
                livro->getLivro();
                livro->mostrarFlyweightId();
                cout << "Endereco do livro: " << livro << "\n" << endl;
            }
        }

        delete it;
        delete it2;
    }
};