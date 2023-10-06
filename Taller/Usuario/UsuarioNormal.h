#include <iostream>
#pragma once

#include "Usuario.h"

using namespace std;

class UsuarioNormal : public Usuario //edad >=18
{
    private:
        string correo;

    public:
        UsuarioNormal(string _nombre,  string _contra, int _edad, string _correo)
        : Usuario(_nombre, _contra, _edad), correo(_correo)
        {
            if (_edad < 18)
            {
                cout << "Error: " << _nombre << " no tiene la edad adecuada" << endl;
            }
        }
};