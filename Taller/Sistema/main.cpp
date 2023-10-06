#include <iostream>

#include "../Sistema/Sistema.h"
#include "../Sistema/Sistema.cpp"

using namespace std;

int main ()
{
    Sistema sistema;

    sistema.poblarUsuarios();
    sistema.poblarSoftwares();

    int input;

    while (true) //Primer menu
    {
        string nombre;
        string contra;
        bool succes;

        cout << "===Menú===" << endl;
        cout << "1. Iniciar sesión" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> input;
        cout << endl;

        switch (input)
        {
            case 1:
                cout << "Ingrese nombre de usuario: ";
                cin >> nombre;

                cout << "Ingrese contraseña: ";
                cin >> contra;

                succes = sistema.iniciarSesion(nombre, contra);

                if (!succes)
                {
                    cout << endl;
                    cout << "Datos inválidos" << endl;
                    input = 0;
                }
                break;

            case 2:
                cout << "Cerrando programa..." << endl;
                cout << endl;
                exit(1);
        
            default:
                cout << "Opción inválida" << endl;
        }
        cout << endl;

        if (input == 1) // Segundo menu
        {
            cout << "Sesión iniciada con éxito" << endl;
            cout << endl;

            int input2;
            bool succes2;

            while (input2 != 6)
            {
                string txt;
                string txt2;
                string nombreSoftware;

                cout << "===Menú===" << endl;
                cout << "1. Ver mis softwares" << endl;
                cout << "2. Ver softwares disponibes" << endl;
                cout << "3. Adquirir software" << endl;
                cout << "4. Eliminar software ()" << endl;
                cout << "5. Eliminar software (biblioteca)" << endl;
                cout << "6. Cerrar sesión" << endl;
                cout << "Ingrese una opción: ";
                cin >> input2;
                cout << endl;

                switch (input2)
                {
                    case 1:
                        txt = sistema.mostrarMisSoftwares(nombre, contra);
                        cout << "Mostrando mis softwares:" << endl;
                        cout << endl;
                        cout << txt;
                        break;

                    case 2:
                        txt2 = sistema.mostrarSoftwares();
                        cout << "Mostrando softwares:" << endl;
                        cout << endl;
                        cout << txt2;
                        break;

                    case 3:
                        cout << "Ingrese nombre del software: ";
                        cin >> nombreSoftware;
                        succes2 = sistema.agregarSoftware(nombreSoftware, nombre, contra);

                        if (succes2)
                        {
                            cout << "Software adquirido con éxito" << endl;
                        }
                        else
                        {
                            cout << "Software no encontrado" << endl;
                        }
                        break;

                    case 4:
                        cout << "Ingrese nombre del software: ";
                        cin >> nombreSoftware;
                        succes2 = sistema.eliminarSoftware(nombreSoftware, nombre, contra);

                        if (succes2)
                        {
                            cout << "Software eliminado con éxito" << endl;
                        }
                        else
                        {
                            cout << "Software no encontrado" << endl;
                        }
                        break;

                    case 5:
                        cout << "Ingrese nombre del software: ";
                        cin >> nombreSoftware;
                        succes2 = sistema.eliminarSoftwareBiblioteca(nombreSoftware);

                        if (succes2)
                        {
                            cout << "Software eliminado con éxito" << endl;
                        }
                        else
                        {
                            cout << "Software no encontrado, o aun pertenece a usuarios" << endl;
                        }
                        break;

                    case 6:
                        cout << "Cerrando sesión..." << endl;
                        break;
                    
                    default:
                        cout << "Opción inválida" << endl;       
                }
                cout << endl;
            }
            input2 = 0;
        }
    }

    return 0;
}