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
void agregarUsuario();
void mostrarUsuarios();
void mostrarPublicaciones();
Usuario* getUsuario(int id);
RedSocial(string nombre);
RedSocial(string nombre,vector<Usuario*>usuarios);
RedSocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion*>publicaciones);
};

#endif