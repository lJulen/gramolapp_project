//
//  menuApp.cpp
//  gramolApp
//
//  Created by Julen Garro Olkotz on 6/11/21.
//

#include "menuApp.hpp"
#include <iostream>
#include "songClass.hpp"
#include <ctime>

using namespace std;

void registrarCancion()
{
    string nameSong;
    float duration;
    string urlSong;
    time_t incorporationDate;
    int score;
    cout << "Has seleccionado la opción 1" << endl;
    
    cout << "Inserte el nombre de la canción" << endl;
    cin >> nameSong;
    
    cout << "Inserte la duración" << endl;
    cin >> duration;
    
    cout << "Inserte la URL" << endl;
    cin >> urlSong;
    
    cout << "Inserte la fecha de incorporación" << endl;
    cin >> incorporationDate;
    
    //do
    //{
        cout << "Inserte la puntuación (entre 0 y 10)" << endl;
        
        cin >> score;
    //}while (score <0 && score > 10);
    
    Song cancion(nameSong, duration, incorporationDate, urlSong, score);
    
    cout << cancion.getNameSong() << endl;
    
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




