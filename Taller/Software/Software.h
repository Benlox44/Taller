#include <iostream>
#pragma once

#include "../Sistema/Usuarios.h"

using namespace std;

class Software
{
    protected:
        string nombre;
        string developer;
        int edadR;
        float precio;
        Usuarios usuarios;

    public:
        Software(string _nombre, string _developer, int _edadR, float _precio)
        : nombre(_nombre), developer(_developer), edadR(_edadR), precio(_precio) {}   

        string toString()
        {
            return "Nombre: " + nombre + " Desarrollador: " + developer +
            " Edad de restricción: " + to_string(edadR) + " Precio: " + to_string(precio);
        }

        virtual string getTipo() = 0;

        string getNombre()
        {
            return nombre;
        }

        Usuarios getUsuarios()
        {
            return usuarios;
        }
};