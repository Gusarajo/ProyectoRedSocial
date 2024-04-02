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
vector<Publicacion*>publicaciones;
public:
string nombre;
int NumUsuarios;
int NumPublicaciones;

};

RedSocial::RedSocial(/* args */)
{
}

RedSocial::~RedSocial()
{
}

#endif