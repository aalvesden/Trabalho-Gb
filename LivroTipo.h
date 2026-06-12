#pragma once
#include <string>

class LivroTipo
{
private:
    std::string categoria;

public:
    LivroTipo(std::string &categoria);

    std::string getCategoria();
};