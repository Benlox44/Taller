#include <iostream>
#pragma once

#include "../Usuario/Usuario.h"
#include "../Usuario/Admin.h"
#include "../Usuario/UsuarioNormal.h"
#include "../Usuario/Child.h"
#include "NodoUsuario.h"
#include "Usuarios.h"

#include "../Software/Software.h"
#include "../Software/Juego.h"
#include "../Software/Navegador.h"
#include "../Software/Ofimatica.h"
#include "../Software/Produccion.h"
#include "../Software/Seguridad.h"
#include "../Software/Social.h"
#include "NodoSoftware.h"
#include "Softwares.h"

using namespace std;

class Sistema
{
    protected:
        Usuarios usuarios;
        Softwares softwares;
    
    public:
        Sistema() {}

        void poblarUsuarios();
        void poblarSoftwares();

        Usuario* buscarUsuario(string nombre, string contra);
        Software* buscarSoftware(string nombreSoftware);

        bool iniciarSesion(string nombre, string contra);
        
        string mostrarSoftwares();
        string mostrarMisSoftwares(string nombre, string contra);

        bool agregarSoftware(string nombreSoftware, string nombre, string contra);
        bool eliminarSoftware(string nombreSoftware, string nombre, string contra);
        bool eliminarSoftwareBiblioteca(string nombreSoftware);
};