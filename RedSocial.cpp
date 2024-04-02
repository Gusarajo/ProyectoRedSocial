#include "RedSocial.h"
void RedSocial::agregarUsuario()
{
    string nom,nac;
    int ed;
    bool seguir=0;
    cout << "dame tu usuario";
    cin >> nom;
    cout << "quieres ingresar edad"<<endl;
    cin>>seguir;
    if (seguir)
    {
        cout <<" ingresa tu edad"<<endl;
        cin >> ed;
        cout << "quieres ingresar una nacionalidad"<<endl;
        cin>> seguir;
        if (seguir)
        {
            cout << "ingresa tu nacionalidad"<<endl;
            cin>> nac;
            Usuario newUs(nom,ed,nac);
        }
        else
        {
        Usuario newUs(nom,ed);
        }
    }
    else{
    Usuario newUs(nom);
    }
    this->usuarios.push_back(newUs);

}
void RedSocial::mostrarUsuarios()
{
for (int i = 0; i < this->usuarios.size(); i++) 
    {
        cout << i + 1 << ".- ";
        usuarios[i]->mostrar();  
    }
}
void RedSocial::mostrarPublicaciones();
{
    for (int i = 0; i < this->usuarios.size(); i++) 
    {
        cout << i + 1 << ".- "<<usuarios[i]->nombre<<endl;

        usuarios[i]->mostrarPublicaciones();  
    }

}
Usuario* RedSocial::getUsuario(int id)
{
for(int i = 0; i < this->usuarios.size(); i++) {
        if(this->usuarios[i]->id == id) {
            return usuarios[i];
        }
    }
    cout << "no existe un usuario con ese id \n";
    return nullptr;
}
//constructores
RedSocial::Redsocial(string nombre)
{
this->nombre=nombre;
}
RedSocial::Redsocial(string nombre,vector<usuario*>usuarios)
{
this->nombre=nombre;
this->usuarios.push_back(usuarios);
}
RedSocial::Redsocial(string nombre,vector<usuario*>usuarios,vector<publicacion*>publicaciones)
{
this->nombre=nombre;
this->usuarios.push_back(usuarios);
this->publicaciones.push_back(publicaciones);
}