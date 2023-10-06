#include <iostream>
#pragma once

#include "Software.h"
#include "../Sistema/Usuarios.h"

using namespace std;

class Seguridad : public Software
{
    private:
        string tipoMalware;

    public:
        Seguridad(string _nombre, string _developer, int _edadR, float _precio, string _tipoMalware)
        : Software(_nombre, _developer, _edadR, _precio), tipoMalware(_tipoMalware) {}

        string getTipo()
        {
            return "Seguridad";
        }
};