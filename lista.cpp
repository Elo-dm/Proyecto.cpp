#ifndef CANCION_H
#define CANCION_H

#include <string>

using namespace std;

struct Cancion {
    string titulo;
    string artista;
    Cancion* siguiente;
};

#endif