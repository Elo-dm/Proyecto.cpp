#include <iostream>
#include <string>
#include "funciones.cpp"
#include "lista.cpp"
using namespace std;

int main() {
    Cancion* playlist = nullptr;
    int opcion;

    do {
        cout << "\n=== MENU PLAYLIST MODULAR ===" << endl;
        cout << "1. Agregar cancion" << endl;
        cout << "2. Ver playlist" << endl;
        cout << "3. Reproducir cancion" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            string t, a;
            cout << "Titulo de la cancion: ";
            getline(cin, t);
            cout << "Artista: ";
            getline(cin, a);
            agregarCancion(playlist, t, a);
        } 
        else if (opcion == 2) {
            mostrarPlaylist(playlist);
        } 
        else if (opcion == 3) {
            mostrarPlaylist(playlist);
            int pos;
            cout << "¿Que numero de cancion quieres reproducir?: ";
            cin >> pos;
            reproducirCancion(playlist, pos);
        }

    } while (opcion != 4);

    cout << "\n¡Saliendo de la playlist!\n";
    return 0;
}