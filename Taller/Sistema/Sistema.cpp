#include <iostream>

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

#include "Sistema.h"

using namespace std;

void Sistema::poblarUsuarios()
{
    Usuario* arregloUsuario[15];  

    arregloUsuario[0] = new Admin("Admin", "contrasena123", 20, "admin@gmail.com");

    arregloUsuario[1] = new Child("Matias", "mati123", 12);
    arregloUsuario[2] = new Child("Lucas", "luqui123", 15);
    arregloUsuario[3] = new Child("Sofia", "sofi123", 14);
    arregloUsuario[4] = new Child("Luis", "luis123", 17);

    arregloUsuario[5] = new UsuarioNormal("Martina", "marti123", 21, "martina@gmail.com");
    arregloUsuario[6] = new UsuarioNormal("Juan", "juan123", 19, "juan@gmail.com");
    arregloUsuario[7] = new UsuarioNormal("Carla", "carla123", 26, "carla@gmail.com");
    arregloUsuario[8] = new UsuarioNormal("Pablo", "pablo123", 18, "pablo@gmail.com");
    arregloUsuario[9] = new UsuarioNormal("Maria", "maria123", 29, "maria@gmail.com");
    arregloUsuario[10] = new UsuarioNormal("Pedro", "pedro123", 32, "pedro@gmail.com");
    arregloUsuario[11] = new UsuarioNormal("Laura", "laura123", 18, "laura@gmail.com");
    arregloUsuario[12] = new UsuarioNormal("Miguel", "miguel123", 21, "miguel@gmail.com");
    arregloUsuario[13] = new UsuarioNormal("Camila", "camila123", 30, "camila@gmail.com");
    arregloUsuario[14] = new UsuarioNormal("Diego", "diego123", 28, "diego@gmail.com");

    for (int i = 0; i < 15; i++)
    {
        usuarios.agregarUsuario(arregloUsuario[i]);
    }
}

void Sistema::poblarSoftwares()
{
    Software* arregloSoftware[20];

    arregloSoftware[0] = new Juego("Call of Duty: Warzone", "Activision", 18, 0, "FPS");
    arregloSoftware[1] = new Juego("World of Warcraft", "Blizzard Entertainment", 18, 0, "MMO");
    arregloSoftware[2] = new Juego("Portal", "Valve Corporation", 5, 9.99, "Puzzle");
    arregloSoftware[3] = new Juego("The Witcher 3: Wild Hunt", "CD Projekt Red", 18, 29.99, "RPG");
    arregloSoftware[4] = new Juego("Minecraft", "Mojang Studios", 5, 26.95, "Sandbox");
    arregloSoftware[5] = new Juego("FIFA 22", "EA Sports", 5, 59.99, "Sports");
    arregloSoftware[6] = new Juego("The Forest", "Endnight Games", 18, 19.99, "Survival");
    arregloSoftware[7] = new Juego("Celeste", "Maddy Makes Games", 5, 19.99, "Platform");
    arregloSoftware[8] = new Juego("StarCraft II", "Blizzard Entertainment", 13, 0, "RTS");
    arregloSoftware[9] = new Juego("Resident Evil 7: Biohazard", "Capcom", 18, 29.99, "Horror");
    arregloSoftware[10] = new Juego("Counter-Strike: Global Offensive", "Valve Corporation", 18, 0, "FPS");
    arregloSoftware[11] = new Juego("World of Tanks", "Wargaming", 13, 0, "MMO");
    arregloSoftware[12] = new Juego("Tetris", "The Tetris Company", 5, 0, "Puzzle");
    arregloSoftware[13] = new Juego("Diablo III", "Blizzard Entertainment", 18, 19.99, "RPG");
    arregloSoftware[14] = new Juego("Terraria", "Re-Logic", 10, 9.99, "Sandbox");
    arregloSoftware[15] = new Juego("Rocket League", "Psyonix", 5, 0, "Sports");
    arregloSoftware[16] = new Juego("Rust", "Facepunch Studios", 18, 39.99, "Survival");
    arregloSoftware[17] = new Juego("Hollow Knight", "Team Cherry", 7, 14.99, "Platform");
    arregloSoftware[18] = new Juego("StarCraft: Remastered", "Blizzard Entertainment", 13, 14.99, "RTS");
    arregloSoftware[19] = new Juego("Dead by Daylight", "Behaviour Interactive", 18, 19.99, "Horror");

    arregloSoftware[20] = new Ofimatica("Microsoft Office", "Microsoft Corporation", 0, 199.99);
    arregloSoftware[21] = new Ofimatica("LibreOffice", "The Document Foundation", 0, 0);
    arregloSoftware[22] = new Ofimatica("Google Workspace", "Google LLC", 18, 6.0);
    arregloSoftware[23] = new Ofimatica("WPS Office", "Kingsoft Corporation", 0, 29.99);
    arregloSoftware[24] = new Ofimatica("Zoho Office Suite", "Zoho Corporation", 0, 12.0);

    arregloSoftware[25] = new Produccion("Adobe Premiere Pro", "Adobe Inc.", 18, 15.0, "Video");
    arregloSoftware[26] = new Produccion("OBS Studio", "Comunidad de código abierto", 18, 0.0, "Streaming");
    arregloSoftware[27] = new Produccion("Ableton Live", "Ableton AG", 18, 299.0, "Música");
    arregloSoftware[28] = new Produccion("GIMP", "Comunidad de código abierto", 18, 0, "Fotos");

    arregloSoftware[29] = new Navegador("Google Chrome", "Google LLC", 0, 0.0);
    arregloSoftware[30] = new Navegador("Mozilla Firefox", "Mozilla Corporation", 0, 0.0);

    arregloSoftware[31] = new Seguridad("Kaspersky Total Security", "Kaspersky Lab", 0, 49.99, "Ransomware");
    arregloSoftware[32] = new Seguridad("Norton 360", "NortonLifeLock", 0, 49.99, "Spyware");
    arregloSoftware[33] = new Seguridad("McAfee Total Protection", "McAfee, LLC", 0, 59.99, "Botnets");
    arregloSoftware[34] = new Seguridad("Avast Free Antivirus", "Avast Software", 0, 0.0, "Rootkits");
    arregloSoftware[35] = new Seguridad("Bitdefender Antivirus Plus", "Bitdefender", 0, 39.99, "Gusanos");
    arregloSoftware[36] = new Seguridad("Malwarebytes", "Malwarebytes Corporation", 0, 39.99, "Troyano");

    arregloSoftware[37] = new Social("Facebook", "Meta Platforms, Inc", 13, 0);
    arregloSoftware[38] = new Social("LinkedIn", "LinkedIn Corporation, Inc", 18, 0);

    for (int i = 0; i < 39; i++)
    {
        softwares.agregarSoftware(arregloSoftware[i]);
    }
}

Usuario* Sistema::buscarUsuario(string nombre, string contra)
{
    NodoUsuario* actual = usuarios.getPrimero();
    string vacio;

    if (actual == nullptr) //lista vacia
    {
        return nullptr;
    }
     
    do
    {
        if (actual->usuario->getNombre() == nombre)
        {
            if (actual->usuario->getContra() == contra)
            {
                return actual->usuario;
            }
        }
        actual = actual->siguiente;

    }
    while (actual != usuarios.getPrimero());

    return nullptr;
}

Software* Sistema::buscarSoftware(string nombreSoftware)
{
    NodoSoftware* actual = softwares.getPrimero();

    if (actual == nullptr) //lista vacia
    {
        return nullptr;
    }
     
    do
    {
        if (actual->software->getNombre() == nombreSoftware)
        {
            return actual->software;
        }
        actual = actual->siguiente;
    }
    while (actual != softwares.getPrimero());

    return nullptr;
}

bool Sistema::iniciarSesion(string nombre, string contra)
{   
    Usuario* usuario = buscarUsuario(nombre, contra);

    if (usuario == nullptr)
    {
        return false;
    }
    return true;
}

string Sistema::mostrarSoftwares()
{
    string tiposSoftware[6] = {"Juego", "Navegador", "Ofimatica", "Produccion", "Seguridad", "Social"};
    string txt;

    if (softwares.getPrimero() == nullptr) //Si esta vacia
        {
            return "No hay softwares disponibles";
        }

    for (int i = 0; i < 6; i++)
    {
        NodoSoftware* actual = softwares.getPrimero();
        bool found = false;

        txt += tiposSoftware[i] + ":\n";

        do
        {
            if (actual->software->getTipo() == tiposSoftware[i])
            {   
                found = true;
                txt += actual->software->toString() + "\n";            
            }

            actual = actual->siguiente;
        }
        while (actual != softwares.getPrimero());
        
        if (!found)
        {
            txt += "\n Categoria vacia \n";
        }

        if (i < 5)
        {
            txt += "\n";
        }
    }

    return txt;
}; 

string Sistema::mostrarMisSoftwares(string nombre, string contra)
{
    Usuario* usuario = buscarUsuario(nombre, contra);
    NodoSoftware* actualSoftware = softwares.getPrimero();

    string txt;

    do //Recorro Softwares
    {
        NodoUsuario* actualUsuario = actualSoftware->software->getUsuarios().getPrimero();

        if (actualUsuario == nullptr)
        {
            continue;
        }

        do //Recorro Usuarios
        {
            if (actualUsuario->usuario == usuario)
            {  
                txt += actualSoftware->software->toString() + "\n";
            }

            actualUsuario = actualUsuario->siguiente;
        }
        while (actualUsuario != actualSoftware->software->getUsuarios().getPrimero());
        
        actualSoftware = actualSoftware->siguiente;
    }
    while (actualSoftware != softwares.getPrimero());
    
    if (txt.empty())
    {
        return "No posees ningún software \n";
    }

    return txt;
}

bool Sistema::agregarSoftware(string nombreSoftware, string nombre, string contra)
{
    Software* software = buscarSoftware(nombreSoftware);
    Usuario* usuario = buscarUsuario(nombre, contra); 

    if (software == nullptr)
    {
        return false;
    }

    software->getUsuarios().agregarUsuario(usuario);

    if (software->getUsuarios().getPrimero() == nullptr)
    {
        cout<< "Profe no se porque no agrega :c" << endl;
    }
    
    return true;
}

bool Sistema::eliminarSoftware(string nombreSoftware, string nombre, string contra)
{
    Software* software = buscarSoftware(nombreSoftware);
    Usuario* usuario = buscarUsuario(nombre, contra); 

    if (software == nullptr)
    {
        return false;
    }

    return software->getUsuarios().eliminarUsuario(usuario);
}

bool Sistema::eliminarSoftwareBiblioteca(string nombreSoftware)
{
    Software* software = buscarSoftware(nombreSoftware);

    if (software == nullptr)
    {
        return false;
    }

    if (software->getUsuarios().getPrimero() == nullptr) //Nadie posee el software
    { 
        softwares.eliminarSoftware(software);
    }
    
    return false;
}