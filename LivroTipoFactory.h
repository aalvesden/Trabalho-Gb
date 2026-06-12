#pragma once

#include <map>
#include <string>
#include "LivroTipo.h"

class LivroTipoFactory
{
private:
    std::map<std::string, LivroTipo *> tipos;

public:
    ~LivroTipoFactory();

    LivroTipo *getTipo(std::string &categoria);
};