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
vector<BuscaAmigos*>BusquedasAmigos;
public:
string nombre;
int NumUsuarios;
int NumPublicaciones;
void agregarUsuario();
void mostrarUsuarios();
void mostrarPublicaciones();
void mostrarBusquedas();
Usuario* getUsuario(int id);
RedSocial(string nombre);
RedSocial(string nombre,vector<Usuario*>usuarios);
RedSocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion*>publicaciones);
};

#endif