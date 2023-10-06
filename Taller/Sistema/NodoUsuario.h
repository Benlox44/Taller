#include <iostream>
#pragma once

#include "../Usuario/Usuario.h"

using namespace std;

class NodoUsuario
{
    public:
        Usuario* usuario;
        NodoUsuario* siguiente;

        NodoUsuario(Usuario* _usuario) : usuario(_usuario), siguiente(nullptr) {}
};