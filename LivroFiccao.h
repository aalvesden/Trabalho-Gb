#pragma once
#include <string> 
#include "Livro.h"

using namespace std;

class LivroFiccao : public Livro{
    public:
        LivroFiccao(string Autor, string Titulo, LivroTipo* categoria, string estado);
        LivroFiccao(const LivroFiccao& livroFiccao);

        Livro* clonar() override;
};