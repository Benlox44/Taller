#include <iostream>
#pragma once

#include "Software.h"
#include "../Sistema/Usuarios.h"

using namespace std;

class Ofimatica : public Software
{
    private:
        int cantArchivos = 0;
    
    public:
        Ofimatica(string _nombre, string _developer, int _edadR, float _precio)
        : Software(_nombre, _developer, _edadR, _precio) {}

        void crearArchivo()
        {
            cantArchivos++;
        }
        
        void borrarArchivo()
        {
            if (cantArchivos > 0)
            {
                cantArchivos--;
            }
            else
            {
                cout << "0 archivos creados, no se pueden eliminar más" << endl;
            }
        }

        string getTipo()
        {
            return "Ofimatica";
        }
};