#include <iostream>
#pragma once

#include "Software.h"
#include "../Sistema/Usuarios.h"

using namespace std;

class Social : public Software
{
    private:
        Usuarios Amigos;

    public:
        Social(string _nombre, string _developer, int _edadR, float _precio)
        : Software(_nombre, _developer, _edadR, _precio) {}

        void agregarAmigo(string nombreAmigo)
        {
            NodoUsuario* actual = usuarios.getPrimero();
            
            while (true)
            {
                if (actual->usuario->getNombre() == nombreAmigo)
                {
                    usuarios.agregarUsuario(actual->usuario);
                    return;
                }

                actual = actual->siguiente;

                if (actual == usuarios.getPrimero()) //No se encontro
                {
                    cout << "Este usuario no existe";
                    return;
                }
            }
        }

        string getTipo()
        {
            return "Social";
        }
};
