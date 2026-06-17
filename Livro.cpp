#include "Livro.h" 
#include <string>
#include <iostream>

using namespace std;

Livro::Livro(string Autor, string Titulo, LivroTipo* categoria, string estado) : autor(Autor), titulo(Titulo), categoria(categoria), estado(estado){}   ;
Livro::Livro(const Livro& livro) : autor(livro.autor), titulo(livro.titulo), categoria(livro.categoria), estado(livro.estado){}

void Livro::getLivro() {
    cout << "Autor: " << autor << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Categoria: " << categoria->getCategoria() << endl;
    cout << "Estado do Livro: " << estado << endl;
}

void Livro::mostrarFlyweightId() {
    std::cout << "Endereco do Flyweight: "
              << categoria
              << std::endl;
}

LivroTipo* Livro::getCategoria() {
    return categoria;
}

string Livro::getEstado() {
    return estado;
}
