//
//  menuApp.cpp
//  gramolApp
//
//  Created by Julen Garro Olkotz on 6/11/21.
//

#include "menuApp.hpp"
#include <iostream>

using namespace std;

void registrarCancion()
{
    cout << "Has seleccionado la opción 1" << endl;
}

void escucharCancion()
{
    cout << "Esto es una prueba" << endl;
}

void informacionArtista()
{
    
}

void menuNavigation()
{
    int eleccion;
    do
    {
        // La opción 1 permitirá registrar una canción.
        cout << "1 - Registrar canción" << endl;
        
        // La segunda opción enviará a un link en youtube que ejecutará y se escuchará la canción.
        cout << "2 - Escuchar canción" << endl;
        
        // La tercera opción muestra en pantalla la información relativa al artista.
        cout << "3 - Información artistas" << endl;
        
        cout << "4 - Salir" << endl;
        // El usuario marca una opción para ir al menú adecuado.
        cin >> eleccion;

        switch (eleccion) {
            case 1:
                registrarCancion();
                break;
            case 2:
                escucharCancion();
                break;
            case 3:
                informacionArtista();
                break;
            case 4:
                cout << "Has seleccionado salir de la aplicación" << endl;
                break;
            default:
                cout << "Inserta un número válido" << endl;
                break;
        }
    }while(eleccion != 4);
}




