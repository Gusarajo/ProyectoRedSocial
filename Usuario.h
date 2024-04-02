#ifndef usuario_h
#define usuario_h

class Usuario
{
int id;
piublic: 
string nombre;
int edad;
string nacionalidad;
vector <*usuarios> amigos;
vector <*publicacion>publicaciones;
int getid()
{return this->id;}
void mostrar()
{
    cout<< "id: "<< getid()<<"\n nombre: "<< this->nombre<< "\n edad:"<< this-> edad<< "\n nacionalidad: "<< this->edad<<endl;
}
void mostrarAmigos()
{
    for (int i=0;i<this->amigos.size();i++)
    {
        cout<< i <<":"<<  amigos[i].mostrar()<<endl;
    }
}
void mostrarPublicaciones()
{
    for (int i=0;i<this->publicaciones.size();i++)
    {
        cout << i << ":"<< Publicaciones[i].mostrarPublicacion()<<endl;
    }

}
void agregarAmigo(Usuario* nuevoAmigo)
{
    this->amigos.push_back(nuevoAmigo);
    nuevoAmigo.amigos.push_back(this);
}
void crearPublicacion()
{
    Publicacion newPub;
    cout<< "Estas creando una publicacion"<<endl;
    newPub.ptrusuario=this;
    cout << "cual es la fecha \n";
    cin >> newPub.fecha;
    cout << "cual es el contenido de la publicacion (sin espacios)\n"
    cin >> newPub.contenido;
    this ->publicaciones.push_back(newPub);
}
Usuario* getAmigo(int id)
{
 for(int i=0;i<this->amigos.size();i++)
 {
    if(this->amigos[i].id==id)
    {
        return amigos[i];
    }
 }
 cout << "no existe un amigo con ese id \n";
 return nullptr;
}
Usuario(string nombre)
{
    this->nombre=nombre;
}
Usuario(string nombre, int edad)
{
    this->nombre=nombre;
    this->edad=edad;
}
Usuario(string nombre, int edad, string nacionalidad)
{
    this->nombre=nombre;
    this->edad=edad;
    this-> nacionalidad=nacionalidad;
}
};

#endif 