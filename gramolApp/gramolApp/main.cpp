//
//  main.cpp
//  gramolApp
//
//  Created by Julen Garro Olkotz on 5/11/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Pulse un número para acceder al menú correspondiente" << endl;
    // La opción 1 enviará a un link en youtube que ejecutará y se escuchará la canción
    cout << "1 - Escuchar canción" << endl;
    
    // La segunda opción permitirá registrar una canción.
    cout << "2 - Registrar canción" << endl;
    
    // La tercera opción muestra en pantalla la información relativa al artista
    cout << "3 - Información artistas" << endl;
    
    cout << "4 - Salir" << endl;
    
    // El usuario marca una opción para ir al menú adecuado
    int eleccion;
    cin >> eleccion;
    do
    {
        
    }while(eleccion !=4);
    
    return 0;
}
