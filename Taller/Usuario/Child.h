#include <iostream>
#pragma once

#include "Usuario.h"

using namespace std;

class Child : public Usuario
{
    public:
        Child(string _nombre,  string _contra, int _edad)
        : Usuario(_nombre, _contra, _edad)
        {
            if (_edad >= 18)
            {
                cout << "Error: " << _nombre << " no tiene la edad adecuada" << endl;
            }
        }
};