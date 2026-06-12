#include "LivroTipoFactory.h"

LivroTipoFactory::~LivroTipoFactory()
{
    for (auto &par : tipos)
    {
        delete par.second;
    }
}

LivroTipo *LivroTipoFactory::getTipo(std::string &categoria)
{
    if (tipos.find(categoria) == tipos.end())
    {
        tipos[categoria] = new LivroTipo(categoria);
    }

    return tipos[categoria];
}