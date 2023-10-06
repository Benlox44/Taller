#include <iostream>
#pragma once

#include "Usuario.h"

using namespace std;

class Admin : public Usuario
{
    private:
        string correo;

    public:
        Admin(string _nombre, string _contra, int _edad, string _correo)
        : Usuario(_nombre, _contra, _edad), correo(_correo) {}

        void accederLog();
};