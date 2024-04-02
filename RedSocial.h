#ifndef RedSocial_h
#define RedSocial_h
#include "Usuario.h"
#include "publicacion.h"  
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class RedSocial
{
private:
vector<Usuario*> usuarios;
vector<Publicacion*>publicaciones;
public:
string nombre;
int NumUsuarios;
int NumPublicaciones;
//metodos
void agregarUsuario();
void mostrarUsuarios();
void mostrarPublicaciones();
Usuario* getUsuario();
//constructores
Redsocial(string nombre);
Redsocial(string nombre,vector<usuario*>usuarios);
Redsocial(string nombre,vector<usuario*>usuarios,vector<publicacion*>publicaciones);
};

#endif