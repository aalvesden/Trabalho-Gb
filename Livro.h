#pragma once 
#include <string>

using namespace std;

class Livro{
    private:
        string autor;
        string titulo;
        string categoria;
    public:
        Livro(string Autor, string titulo, string Categoria);
        Livro(const Livro& livro);
        virtual ~Livro() = default;

        virtual Livro* clonar() = 0;        
};