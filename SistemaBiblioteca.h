#pragma once
#include "Colecao.h"
#include "LivroTipoFactory.h"

class SistemaBiblioteca {
public:
    Colecao acervo;
    LivroTipoFactory factory;
};