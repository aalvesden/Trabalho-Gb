#pragma once
#include <iostream>
#include "Menu.h"

class MenuEstragados : public Menu
{
public:
    void executar(SistemaBiblioteca& sistema) override
    {
        cout << "\n=== LIVROS ESTRAGADOS ===\n" << endl;

        Iterator* it = sistema.acervo.CriarIterator();

        while(it->hasNext()){
            Livro* livro = it->next();

            if(livro->getEstado() == "Estragado"){

                livro->getLivro();
                livro->mostrarFlyweightId();
                cout << "Endereco do livro: " << livro << "\n" << endl;
            }
        }

        delete it;
    }
};