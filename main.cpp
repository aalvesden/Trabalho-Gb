#include <iostream>
#include <map>
#include "SistemaBiblioteca.h"
#include "Menus/Menu.h"
#include "Menus/MenuRegistrarLivro.h"
#include "Menus/MenuMostrarAcervo.h"

int main()
{

    SistemaBiblioteca sistema;

    std::map<int, Menu*> opcoes;

    opcoes[1] = new MenuRegistrarLivro();
    opcoes[2] = new MenuMostrarAcervo();

    int opcao;

    do{
        std::cout << "\n=== Biblioteca ===" << std::endl;
        std::cout << "1 - Registrar livro" << std::endl;
        std::cout << "2 - Exibir acervo" << std::endl;
        std::cout << "-1 - Sair" << std::endl;

        std::cin >> opcao;

        if(opcao == -1) break;

        if(opcoes.find(opcao) != opcoes.end()){
            opcoes[opcao]->executar(sistema);
        } else {
            std::cout << "Opcao invalida!\n";
        }

    } while (opcao != -1);

    for(auto& par : opcoes)
    {
        delete par.second;
    }
    
    return 0;
}
