#ifndef publicacion_h
#define publicacion_h
#include "Usuario.h" 
class Publicaciones
{
int id;
public:
string fecha,contenido;
usuario* ptrusuario;
mostrarPublicacion()
{
    cout<<"Fecha: "<< fecha<< " \n contenido: "<< contenido << " \n usuario: "<< usuario<<endl;
}
    Publicaciones(Usuario* usuario, string fecha, string contenido)
    {
        this-> ptrusuario = usuario;
        this-> fecha=fecha;
        this-> contenido=contenido;
    }
};





#endif