#include "RedSocial.h"
void RedSocial::agregarUsuario()
{
    string nom, nac;
    int ed;
    bool seguir = false; 
    cout << "Dame tu usuario: ";
    cin >> nom;
    cout << "¿Quieres ingresar edad? (1 para sí, 0 para no)" << endl;
    cin >> seguir;
    if (seguir)
    {
        cout << "Ingresa tu edad: ";
        cin >> ed;
        cout << "¿Quieres ingresar una nacionalidad? (1 para sí, 0 para no)" << endl;
        cin >> seguir;
        if (seguir)
        {
            cout << "Ingresa tu nacionalidad: ";
            cin >> nac;
            Usuario* newUs = new Usuario(nom, ed, nac); 
            this->usuarios.push_back(newUs);
        }
        else
        {
            Usuario* newUs = new Usuario(nom, ed); 
            this->usuarios.push_back(newUs);
        }
    }
    else
    {
        Usuario* newUs = new Usuario(nom); 
        this->usuarios.push_back(newUs);
    }
}

void RedSocial::mostrarUsuarios()
{
for (int i = 0; i < this->usuarios.size(); i++) 
    {
        cout << i + 1 << ".- ";
        usuarios[i]->mostrar();  
    }
}
void RedSocial::mostrarPublicaciones()
{
    for (int i = 0; i < this->usuarios.size(); i++) 
    {
        if(usuarios[i]->publicaciones.size()>0){
        cout << i + 1 << ".- "<<usuarios[i]->nombre<<endl;

       usuarios[i]->mostrarPublicaciones();  
        }
    }

}
void RedSocial::mostrarBusquedas()
{
    for (int i = 0; i < this->usuarios.size(); i++) 
    {
        if(usuarios[i]->publicacionesA.size()>0){
        cout << i + 1 << ".- "<<usuarios[i]->nombre<<endl;

       usuarios[i]->mostrasBusquedaA();  
        }
    }
}
Usuario* RedSocial::getUsuario(int id)
{
for(int i = 0; i < this->usuarios.size(); i++) 
{
        if(this->usuarios[i]->getid() == id) {
            return usuarios[i];
        }
    }
    cout << "no existe un usuario con ese id \n";
    return nullptr;
}

RedSocial::RedSocial( string nombre)
{
this->nombre=nombre;
}
RedSocial::RedSocial(string nombre,vector<Usuario*>usuarios)
{
this->nombre=nombre;
this->usuarios=usuarios;
}
RedSocial::RedSocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion*>publicaciones)
{
this->nombre=nombre;
this->usuarios=usuarios;
this->publicaciones=publicaciones;
}