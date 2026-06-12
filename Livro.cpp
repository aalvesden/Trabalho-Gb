#include "Livro.h" 
#include <string>
#include <iostream>

using namespace std;

Livro::Livro(string Autor, string Titulo, LivroTipo* categoria) : autor(Autor), titulo(Titulo), categoria(categoria){}   ;
Livro::Livro(const Livro& livro) : autor(livro.autor), titulo(livro.titulo), categoria(livro.categoria){}

void Livro::getLivro() {
    cout << "Autor: " << autor << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Categoria: " << categoria->getCategoria() << endl;
}

void Livro::mostrarFlyweightId() {
    std::cout << "Endereco do Flyweight: "
              << categoria
              << std::endl;
}
