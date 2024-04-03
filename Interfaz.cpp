#include <iostream> 
#include "RedSocial.h" 
#include "rlutil.h" 
#include <cstdlib> 
using namespace rlutil;
using namespace std;
 int MenuO;
 int main()
 {
    RedSocial sl("Szexi latinak" );
 cout<<".-'''-.   ____..--'    .-''-.   _____     __ .-./`)           .---.        ____   ,---------. .-./`) ,---.   .--.   ____    .--.   .--."<<endl;          
  cout<<"/ _     \\ |        |  .'_ _   \\  \\   _\\   /  /\\ .-.')          | ,_|      .'  __ `.\\          \\ .-.')|    \\  |  | .'  __ `. |  | _/  /"<<endl;            
 cout<<"(`' )/`--' |   .-'  ' / ( ` )   ' .-./ ). /  ' / `-' \\        ,-./  )     /   '  \\  \\`--.  ,---'/ `-' \\|  ,  \\ |  |/   '  \\  \\| (`' ) /"<<endl;             
cout<<"(_ o _).    |.-'.'   /. (_ o _)  | \\ '_ .') .'   `-'´`        \\  '_ '`)   |___|  /  |   |   \\    `-'`´`|  |\\_ \\|  ||___|  /  ||(_ ()_)" <<endl;              
 cout<<"(_,_). '.     /   _/ |  (_,_)___|(_ (_) _) '    .---.          > (_)  )      _.-`   |   :_ _:    .---. |  _( )_\\  |   _.-`   || (_,_)   __" <<endl;          
cout<<".---.  \\  :  .'._( )_ '  \\   .---.  /    \\   \\  |   |         (  .  .-'   .'   _    |   (_I_)    |   | | (_ o _)  |.'   _    ||  |\\ \\  |  |"<<endl;         
cout<<"\\    `-'  |.'  (_'o._) \\  `-'    /  `-'`-'    \\ |   |          `-'`-'|___ |  _( )_  |  (_(=)_)   |   | |  (_,_)\\  ||  _( )_  ||  | \\ `'   /"<<endl;         
 cout<<"\\       / |    (_,_)|  \\       /  /  /   \\    \\ |   |           |        \\ (_ o _) /   (_I_)    |   | |  |    |  |\\ (_ o _) /|  |  \\    /"<<endl;          
  cout<<"`-...-'  |_________|   `'-..-'  '--'     '----''---'           `--------` '.(_,_).'    '---'    '---' '--'    '--' '.(_,_).' `--'   `'-'"<<endl;    
   cout<<endl;
   cout<<"PRESIONA CUALQUIER TECLA PARA CONTINUAR O ESC PARA SALIR"<<endl;
   
    while(true)
    {

        if(kbhit())
        {

            int k = getkey();
         
            if(k != 0)
            {
                        system("clear");
                break;
         
            }
            if(k == 0)
            {
                cout << "Salir" << endl;
                break;

            }
        }
    }
    
 cout << "                                                               MENU" << endl;    
 cout<<"1.-VER LISTA DE USUARIOS"<<endl;
 cout<<"2.-VER LISTA DE PUBLICACIONES"<<endl;
 cout<<"3.-ENTRAR A UN PERFIL DE USUARIO"<<endl;
 cout<<"4.-AGREGAR NUEVO USUARIO"<<endl;
 cout<<"5.-SALIR"<<endl;
 while (true){
 cin>>MenuO;
switch (MenuO)
{
case 1:
    cout<<"HAS ELEGIDO VER LA LISTA DE USUARIOS"<<endl;
    sl.mostrarUsuarios();
     break;
case 2:
cout<<"HAS ELEGIDO VER LISTA DE PUBLICACIONES"<<endl;
 sl.mostrarPublicaciones();
 break;
case 3:
cout<<"HAS ELEGIDO ENTRAR A UN PERFIL DE USUARIO"<<endl;
 break;
case 4: 
cout<<"HAS ELEGIDO AGREGAR A UN NUEVO USUARIO"<<endl;
sl.agregarUsuario();
 break;
case 5: 
cout<<"ADIOS"<<endl;
 return 0;
default:
    cout<<"ELIGE OPCION VALIDA"<<endl;
    break;
}
    }
 }