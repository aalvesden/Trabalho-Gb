#pragma once

#include "Menu.h"

class MenuMostrarAcervo : public Menu
{
public:
    void executar(SistemaBiblioteca& sistema) override {
        cout << "\n=== ACERVO GERAL ===\n" << endl;

        Iterator* it = sistema.acervo.CriarIterator();

        while(it->hasNext()) {
            Livro* livro = it->next();
            livro->getLivro();
            livro->mostrarFlyweightId();
            cout << "Endereco do livro: " << livro << "\n" << endl;
        }

        delete it;
    }
};