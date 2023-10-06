#include <iostream>
#pragma once

#include "../Usuario/Usuario.h"
#include "NodoUsuario.h"

using namespace std;

class Usuarios
{
    private:
        NodoUsuario* primero;
        NodoUsuario* ultimo;

    public:
        Usuarios() : primero(nullptr), ultimo(nullptr) {}

        NodoUsuario* getPrimero()
        {
            return primero;
        }

        NodoUsuario* getUltimo()
        {
            return ultimo;
        }

        void agregarUsuario(Usuario* nuevoUsuario)
        {
            NodoUsuario* nuevoNodoUsuario = new NodoUsuario(nuevoUsuario);

            if (!primero)
            {
                primero = nuevoNodoUsuario;
                ultimo = nuevoNodoUsuario;
                nuevoNodoUsuario->siguiente = primero;
                return;
            }

            nuevoNodoUsuario->siguiente = primero;
            ultimo->siguiente = nuevoNodoUsuario;
            ultimo = nuevoNodoUsuario;
        }

        bool eliminarUsuario(Usuario* eliminarUsuario)
        {
            NodoUsuario* actual = primero;
            NodoUsuario* anterior = nullptr;

            if (!primero)
            {
                return false;
            }

            while (true)
            {
                if (actual->usuario == eliminarUsuario) //Encontrado el objeto a eliminar
                {
                    if (actual == primero) //Lo encontro en el primer nodo
                    {
                        primero = actual->siguiente;

                        if (actual == ultimo) //Solo quedaba un nodo (quedara vacio)
                        {
                            ultimo = nullptr;
                        }

                        else //No es ultimo nodo
                        {
                            ultimo->siguiente = primero;
                        }
                    }

                    else //No lo encontro en el primer nodo
                    {
                        anterior->siguiente = actual->siguiente;

                        if (ultimo == actual) //Si es el ultimo
                        {
                            ultimo = anterior;
                        }
                    }

                    delete actual;
                    return true;
                }

                anterior = actual;
                actual = actual->siguiente;

                if (actual == primero) //no se encontro
                {
                    return false;
                }
            }
        }
};