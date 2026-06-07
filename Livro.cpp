#include "Livro.h" 
#include <string>
#include <iostream>

using namespace std;

Livro::Livro(string Autor, string Titulo, string Categoria) : autor(Autor), titulo(Titulo), categoria(Categoria){}   ;
Livro::Livro(const Livro& livro) : autor(livro.autor), titulo(livro.titulo), categoria(livro.categoria){}

void Livro::getLivro() {
    cout << "Autor: " << autor << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Categoria: " << categoria << endl;
}
