#ifndef publicacion_h
#define publicacion_h
#include "Usuario.h"
#include <iostream>
#include <string> 
#include <vector> 
using namespace std;
class Publicacion
{
int id;
public:
string fecha,contenido;
Usuario* ptrusuario;
void mostrarPublicacion()
{
    cout<<"Fecha: "<< fecha<< " \n contenido: "<< contenido << " \n usuario: "<< ptrusuario->nombre<<endl;
}
Publicacion(Usuario* usuario, string fecha, string contenido)
    {
        this-> ptrusuario = usuario;
        this-> fecha=fecha;
        this-> contenido=contenido;
    }
    Publicacion()
    {
        this->ptrusuario=nullptr;
    }
};
class BuscaAmigos: public Publicacion
{
    public:
    void mostrarPublicacionA()
    {
       Publicacion::mostrarPublicacion();
       cout<<"Busco amigos, mi id es:"<<ptrusuario->getid()<<endl;
    }
};
#endif