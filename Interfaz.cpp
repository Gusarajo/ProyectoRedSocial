#include <iostream> 
#include "rlutil.h" 
#include <cstdlib> 
using namespace rlutil;
using namespace std;
 
 int main()
 {
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
 cout << "                                                         MENU" << endl;    
 cout<<"1.-VER LISTA DE USUARIOS"<<endl;
 cout<<"2.-VER LISTA DE PUBLICACIONES"<<endl;
 cout<<"3.-ENTRAR A UN PERFIL DE USUARIO"<<endl;


 return 0;
 }