#include <iostream>
#include <cstdlib>
#include <string>
#include "lista.cpp"

using namespace std;

void agregarCancion(Cancion*& cabeza, string t, string a) {
    Cancion* nuevaCancion = new Cancion();
    nuevaCancion->titulo = t;
    nuevaCancion->artista = a;
    nuevaCancion->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevaCancion;
    } else {
        Cancion* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevaCancion;
    }
    cout << "\n[+] Cancion agregada a la playlist.\n";
}

void mostrarPlaylist(Cancion* cabeza){}

void reproducirCancion(Cancion* cabeza, int posicion) {}