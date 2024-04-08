#include "Usuario.h"
#include "publicacion.h"
#include <cstdlib>
#include <ctime>
void Usuario::mostrar()
{
    cout << "id: " << getid() << "\n nombre: " << this->nombre << "\n edad: " << this->edad << "\n nacionalidad: " << this->nacionalidad << endl;
}

void Usuario::mostrarAmigos()
{
    for (int i = 0; i < this->amigos.size(); i++)
    {
        cout << i + 1 << ".- ";
        amigos[i]->mostrar();
    }
}

void Usuario::mostrarPublicaciones()
{
    for (int i = 0; i < this->publicaciones.size(); i++)
    {
        cout << i + 1 << ".- ";
        publicaciones[i]->mostrarPublicacion();
    }
}
void Usuario::mostrasBusquedaA()
{
    for (int i = 0; i < this->publicacionesA.size(); i++)
    {
        cout << i + 1 << ".- ";
        publicacionesA[i]->mostrarPublicacionA();
    }
}
void Usuario::agregarAmigo(Usuario *nuevoAmigo)
{
    this->amigos.push_back(nuevoAmigo);
    nuevoAmigo->amigos.push_back(this);
}

void Usuario::crearPublicacion()
{
    Publicacion *newPub = new Publicacion();
    cout << "Estás creando una publicación" << endl;
    newPub->ptrusuario = this;
    cout << "¿Cuál es la fecha?" << endl;
    cin >> newPub->fecha;
    cout << "¿Cuál es el contenido de la publicación?" << endl;
    cout << "NOTA: No uses espacios" << endl;
    cin >> newPub->contenido;
    this->publicaciones.push_back(newPub);
}
void Usuario::buscarAmigos()
{
    BuscaAmigos *newami = new BuscaAmigos();
    cout << "Estás buscando amigos" << endl;
    newami->ptrusuario = this;
    cout << "¿Cuál es la fecha?" << endl;
    cin >> newami->fecha;
    cout << "¿Cuál es el contenido de la publicación?" << endl;
    cout << "NOTA: No uses espacios" << endl;
    cin >> newami->contenido;
    this->publicacionesA.push_back(newami);
}
Usuario *Usuario::getAmigo(int id)
{
    for (int i = 0; i < this->amigos.size(); i++)
    {
        if (this->amigos[i]->id == id)
        {
            return amigos[i];
        }
    }
    cout << "no existe un amigo con ese id \n";
    return nullptr;
}
int Usuario::crearid()
{
    srand(time(0));
    id = rand() % 100000;
    return id;
}
Usuario::Usuario(string nombre)
{
    this->nombre = nombre;
    this->id = crearid();
    this->edad = 0;
    this->nacionalidad = "";
}

Usuario::Usuario(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->id = crearid();
}

Usuario::Usuario(string nombre, int edad, string nacionalidad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = nacionalidad;
    this->id = crearid();
}
