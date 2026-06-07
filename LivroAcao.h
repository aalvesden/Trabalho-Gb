#pragma once
#include <string> 
#include "Livro.h"

using namespace std;

class LivroAcao : public Livro{
    public:
        LivroAcao(string Autor, string Titulo, string Categoria);
        LivroAcao(const LivroAcao& livroAcao);

        Livro* clonar() override;
};