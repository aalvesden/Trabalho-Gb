#pragma once
#include "Menu.h"
#include "../LivroAcao.h"
#include "../LivroFiccao.h"
#include <string>

class MenuRegistrarLivro : public Menu
{
private:
    void adicionarEdicoes(SistemaBiblioteca& sistema, Livro* livro, int quantidade)
    {
        for(int i = 2; i <= quantidade; i++)
        {
            Livro* clone = livro->clonar();
            sistema.acervo.AdicionarLivro(clone);
        }
    }

public:
    void executar(SistemaBiblioteca &sistema) override
    {
        cout << "\n=== REGISTRAR LIVRO ===\n" << endl;

        string autor;
        string titulo;
        string estado;
        int categoria;
        int quantidade;

        std::cout << "Autor: ";
        std::getline(cin >> std::ws, autor);

        std::cout << "Titulo: ";
        std::getline(cin >> std::ws, titulo);

        std::cout << "\nGenero: " << std::endl;
        std::cout << "1 - Acao " << std::endl;
        std::cout << "2 - Ficcao " << std::endl;
        cin >> categoria;

        std::cout << "Qual a condicao do livro (Estragado ou Novo): ";
        cin >> estado;

        std::cout << "\nQuantidade de edicoes nessas condicoes: ";
        cin >> quantidade;
        if (quantidade <= 0)
        {
            std::cout << "Quantidade invalida!\n";
            return;
        }

        if (categoria == 1)
        {
            LivroTipo *tipo = sistema.factory.getTipo("Acao");
            Livro *livro = new LivroAcao(autor, titulo, tipo, estado);
            sistema.acervo.AdicionarLivro(livro);
            if(quantidade > 1){
                adicionarEdicoes(sistema, livro, quantidade);
            }
        }
        else if (categoria == 2)
        {
            LivroTipo *tipo = sistema.factory.getTipo("Ficcao");
            Livro *livro = new LivroFiccao(autor, titulo, tipo, estado);
            sistema.acervo.AdicionarLivro(livro);
            if(quantidade > 1){
                adicionarEdicoes(sistema, livro, quantidade);
            }
        }
        else
        {
            std::cout << "Categoria invalida. Nenhum livro cadastrado!\n";
            return;
        }
        
        std::cout << quantidade << " edicao(oes) nesta condicao cadastrada(s)!\n";
    }
};