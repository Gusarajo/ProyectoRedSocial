#ifndef usuario_h
#define usuario_h

#include <iostream>
#include <string> 
#include <vector> 
#include "publicacion.h"  

using namespace std;

class Publicacion;

class Usuario {
    int id;
public: 
    string nombre;
    int edad;
    string nacionalidad;
    vector <Usuario*> amigos;
    vector <Publicacion*> publicaciones;

    int getid() {
        return this->id;
    }
    void crearid();
    void mostrar();

    void mostrarAmigos();

    void mostrarPublicaciones();

    void agregarAmigo(Usuario* nuevoAmigo);

    void crearPublicacion();

    Usuario* getAmigo(int id);

    Usuario(string nombre);

    Usuario(string nombre, int edad);

    Usuario(string nombre, int edad, string nacionalidad);
};

#endif
