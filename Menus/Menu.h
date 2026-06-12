#pragma once
#include "../SistemaBiblioteca.h"

class Menu{
public:
    virtual void executar(SistemaBiblioteca& sistema) = 0;
    virtual ~Menu() = default;
};