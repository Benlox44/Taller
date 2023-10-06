#include <iostream>
#pragma once

#include "Software.h"
#include "../Sistema/Usuarios.h"

using namespace std;

class Produccion : public Software
{
    private:
        string tipoSolucion;

    public:
        Produccion(string _nombre, string _developer, int _edadR, float _precio, string _tipoSolucion)
        : Software(_nombre, _developer, _edadR, _precio), tipoSolucion(_tipoSolucion)
        {
            if (_edadR < 18)  
            {
                cout << "Software de producción con edad de reestricción inválida" << endl;
            }
        }

        string getTipo()
        {
            return "Produccion";
        }
};