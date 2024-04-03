#ifndef Usuario_h
#define Usuario_h 
#include <iostream>
#include <string> 
#include <vector> 

using namespace std;

class Publicacion;
class BuscaAmigos;
class Usuario {
    int id;
public: 
    string nombre;
    int edad;
    string nacionalidad;
    vector <Usuario*> amigos;
    vector <Publicacion*> publicaciones;
    vector<BuscaAmigos*>publicacionesA;

    int getid() {
        return this->id;
    }
    int crearid();
    void mostrar();

    void mostrarAmigos();

    void mostrarPublicaciones();
    void mostrasBusquedaA();

    void agregarAmigo(Usuario* nuevoAmigo);

    void crearPublicacion();
    void buscarAmigos();

    Usuario* getAmigo(int id);

    Usuario(string nombre);

    Usuario(string nombre, int edad);

    Usuario(string nombre, int edad, string nacionalidad);
};

#endif
