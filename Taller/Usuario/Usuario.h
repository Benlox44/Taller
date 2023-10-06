#include <iostream>
#include <random>
#pragma once

using namespace std;

class Usuario
{
    protected:
        string nombre;
        string contra;
        int edad;

    public:
        Usuario(string _nombre, string _contra, int _edad)
        : nombre(_nombre), contra(_contra), edad(_edad)
        {

        }

        string getNombre()
        {
            return nombre;
        }

        string getContra()
        {
            return contra;
        }
};

