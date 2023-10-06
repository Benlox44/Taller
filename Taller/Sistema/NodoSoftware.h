#include <iostream>
#pragma once

#include "../Software/Software.h"

using namespace std;

class NodoSoftware
{
    public:
        Software* software;
        NodoSoftware* siguiente;

        NodoSoftware(Software* _software) : software(_software), siguiente(nullptr) {}
};