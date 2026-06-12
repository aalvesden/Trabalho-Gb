#include "LivroTipo.h"

LivroTipo::LivroTipo(std::string &categoria) : categoria(categoria) {}

std::string LivroTipo::getCategoria(){
    return categoria;
}