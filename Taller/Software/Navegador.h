#include <iostream>
#pragma once

#include "Software.h"
#include "../Sistema/Usuarios.h"

using namespace std;

class Navegador : public Software
{
    private:
        string historial[10];

    public:
        Navegador(string _nombre, string _developer, int _edadR, float _precio)
        : Software(_nombre, _developer, _edadR, _precio) {}

        void visitarSitio(string nombrePagina)
        {
            for (int i = 0; i < 10; i++)
            {
                if (!historial[9].empty())
                {
                    for (int i = 0; i < 9; i++)
                    {
                        historial[i] = historial[i+1];
                    }
                    historial[9] = nombrePagina;
                }

                if (historial[i].empty())
                {
                    historial[i] = nombrePagina;
                }
            }
        }

        string getTipo()
        {
            return "Navegador";
        }
};