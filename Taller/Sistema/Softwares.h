#include <iostream>
#pragma once

#include "../Software/Software.h"
#include "NodoSoftware.h"

using namespace std;

#include <iostream>
#pragma once

class Softwares
{
private:
    NodoSoftware* primero;
    NodoSoftware* ultimo;

public:
    Softwares() : primero(nullptr), ultimo(nullptr) {}

    NodoSoftware* getPrimero()
    {
        return primero;
    }

    NodoSoftware* getUltimo()
    {
        return ultimo;
    }

    void agregarSoftware(Software* nuevoSoftware)
    {
        NodoSoftware* nuevoNodoSoftware = new NodoSoftware(nuevoSoftware);

        if (!primero)
        {
            primero = nuevoNodoSoftware;
            ultimo = nuevoNodoSoftware;
            nuevoNodoSoftware->siguiente = primero;
            return;
        }

        nuevoNodoSoftware->siguiente = primero;
        ultimo->siguiente = nuevoNodoSoftware;
        ultimo = nuevoNodoSoftware;
    }

    void eliminarSoftware(Software* eliminarSoftware)
    {
        NodoSoftware* actual = primero;
        NodoSoftware* anterior = nullptr;

        if (!primero)
        {
            return;
        }

        while (true)
        {
            if (actual->software == eliminarSoftware) // Encontrado el objeto a eliminar
            {
                if (actual == primero) // Lo encontró en el primer nodo
                {
                    primero = actual->siguiente;

                    if (actual == ultimo) // Solo quedaba un nodo (quedará vacío)
                    {
                        ultimo = nullptr;
                    }
                    else // No es el último nodo
                    {
                        ultimo->siguiente = primero;
                    }
                }
                else // No lo encontró en el primer nodo
                {
                    anterior->siguiente = actual->siguiente;

                    if (ultimo == actual) // Si es el último
                    {
                        ultimo = anterior;
                    }
                }

                delete actual;
                std::cout << "Software eliminado." << std::endl;
                return;
            }

            anterior = actual;
            actual = actual->siguiente;

            if (actual == primero) // No se encontró
            {
                std::cout << "Software no encontrado en la lista." << std::endl;
                return;
            }
        }
    }
};