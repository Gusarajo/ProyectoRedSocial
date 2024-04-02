#include "usuario.h"
#include "publicacion.h"

void Usuario::mostrar() {
    cout << "id: " << getid() << "\n nombre: " << this->nombre << "\n edad: " << this->edad << "\n nacionalidad: " << this->nacionalidad << endl;
}

void Usuario::mostrarAmigos() {
    for (int i = 0; i < this->amigos.size(); i++) {
        cout << i + 1 << ".- ";
        amigos[i]->mostrar();  
    }
}

void Usuario::mostrarPublicaciones() {
    for (int i = 0; i < this->publicaciones.size(); i++) {
        cout << i + 1 << ".- ";
        publicaciones[i]->mostrarPublicacion();  
    }
}

void Usuario::agregarAmigo(Usuario* nuevoAmigo) {
    this->amigos.push_back(nuevoAmigo);
    nuevoAmigo->amigos.push_back(this);
}

void Usuario::crearPublicacion() {
    Publicacion newPub;
    cout<< "Estas creando una publicacion"<<endl;
    newPub.ptrusuario = this;
    cout << "cual es la fecha \n";
    cin >> newPub.fecha;
    cout << "cual es el contenido de la publicacion (sin espacios)\n";
    cin >> newPub.contenido;
    this->publicaciones.push_back(&newPub); 
}

Usuario* Usuario::getAmigo(int id) {
    for(int i = 0; i < this->amigos.size(); i++) {
        if(this->amigos[i]->id == id) {
            return amigos[i];
        }
    }
    cout << "no existe un amigo con ese id \n";
    return nullptr;
}

Usuario::Usuario(string nombre) {
    this->nombre = nombre;
}

Usuario::Usuario(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

Usuario::Usuario(string nombre, int edad, string nacionalidad) {
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = nacionalidad;
}
