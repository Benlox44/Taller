#include <iostream>
#pragma once

#include "Software.h"
#include "../Sistema/Usuarios.h"

using namespace std;

class Juego : public Software
{
    private:
        string genero;
    
    public:
        Juego(string _nombre, string _developer, int _edadR, float _precio, string _genero)
        : Software(_nombre, _developer, _edadR, _precio), genero(_genero) {}

        string getTipo()
        {
            return "Juego";
        }
};