#pragma once 
#include <string>
#include "LivroTipo.h"

using namespace std;

class Livro{
    private:
        string autor;
        string titulo;
        LivroTipo* categoria;
    public:
        Livro(string Autor, string titulo, LivroTipo* categoria);
        Livro(const Livro& livro);
        virtual ~Livro() = default;

        virtual Livro* clonar() = 0;     
        virtual void getLivro();   

        virtual void mostrarFlyweightId();
};