#ifndef publicacion_h
#define publicacion_h
#include "Usuario.h" 
class Publicacion
{
int id;
public:
string fecha,contenido;
Usuario* ptrusuario;
mostrarPublicacion()
{
    cout<<"Fecha: "<< fecha<< " \n contenido: "<< contenido << " \n usuario: "<< usuario<<endl;
}
Publicacion(Usuario* usuario, string fecha, string contenido)
    {
        this-> ptrusuario = usuario;
        this-> fecha=fecha;
        this-> contenido=contenido;
    }
};
#endif