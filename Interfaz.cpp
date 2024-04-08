#include <iostream>
#include "RedSocial.h"
#include <cstdlib>
using namespace std;
int MenuO, MenuU;
int idU, idA;
Usuario *perfilUsuario;
Usuario *amigo;
int main()
{
    RedSocial sl("Szexi latinak");
    cout << ".-'''-.   ____..--'    .-''-.   _____     __ .-./`)           .---.        ____   ,---------. .-./`) ,---.   .--.   ____    .--.   .--." << endl;
    cout << "/ _     \\ |        |  .'_ _   \\  \\   _\\   /  /\\ .-.')          | ,_|      .'  __ `.\\          \\ .-.')|    \\  |  | .'  __ `. |  | _/  /" << endl;
    cout << "(`' )/`--' |   .-'  ' / ( ` )   ' .-./ ). /  ' / `-' \\        ,-./  )     /   '  \\  \\`--.  ,---'/ `-' \\|  ,  \\ |  |/   '  \\  \\| (`' ) /" << endl;
    cout << "(_ o _).    |.-'.'   /. (_ o _)  | \\ '_ .') .'   `-'´`        \\  '_ '`)   |___|  /  |   |   \\    `-'`´`|  |\\_ \\|  ||___|  /  ||(_ ()_)" << endl;
    cout << "(_,_). '.     /   _/ |  (_,_)___|(_ (_) _) '    .---.          > (_)  )      _.-`   |   :_ _:    .---. |  _( )_\\  |   _.-`   || (_,_)   __" << endl;
    cout << ".---.  \\  :  .'._( )_ '  \\   .---.  /    \\   \\  |   |         (  .  .-'   .'   _    |   (_I_)    |   | | (_ o _)  |.'   _    ||  |\\ \\  |  |" << endl;
    cout << "\\    `-'  |.'  (_'o._) \\  `-'    /  `-'`-'    \\ |   |          `-'`-'|___ |  _( )_  |  (_(=)_)   |   | |  (_,_)\\  ||  _( )_  ||  | \\ `'   /" << endl;
    cout << "\\       / |    (_,_)|  \\       /  /  /   \\    \\ |   |           |        \\ (_ o _) /   (_I_)    |   | |  |    |  |\\ (_ o _) /|  |  \\    /" << endl;
    cout << "`-...-'  |_________|   `'-..-'  '--'     '----''---'           `--------` '.(_,_).'    '---'    '---' '--'    '--' '.(_,_).' `--'   `'-'" << endl;
    cout << endl;
    cout << "PRESIONA CUALQUIER TECLA PARA CONTINUAR O ESC PARA SALIR" << endl;
    /*
        while (true)
        {

            if (kbhit())
            {

                int k = getkey();

                if (k != 0)
                {
                    system("cls");
                    break;
                }
                if (k == 0)
                {
                    cout << "Salir" << endl;
                    break;
                }
            }
        }
        */
    while (true)
    {
        cout << "                                                               MENU" << endl;
        cout << "1.-VER LISTA DE USUARIOS" << endl;
        cout << "2.-VER LISTA DE PUBLICACIONES" << endl;
        cout << "3.-ENTRAR A UN PERFIL DE USUARIO" << endl;
        cout << "4.-AGREGAR NUEVO USUARIO" << endl;
        cout << "5.-MOSTRAR TODAS LAS BUSQUEDAS DE AMISTAD" << endl;
        cout << "6.-SALIR" << endl;

        cin >> MenuO;
        switch (MenuO)
        {
        case 1:
            cout << "HAS ELEGIDO VER LA LISTA DE USUARIOS" << endl;
            sl.mostrarUsuarios();
            break;
        case 2:
            cout << "HAS ELEGIDO VER LISTA DE PUBLICACIONES" << endl;
            sl.mostrarPublicaciones();
            break;

        case 3:
            cout << "HAS ELEGIDO ENTRAR A UN PERFIL DE USUARIO" << endl;
            cout << "Dame el id de tu usuario" << endl;
            cin >> idU;
            perfilUsuario = sl.getUsuario(idU);
            if (perfilUsuario != nullptr)
            {
                cout << "Hemos podido ingresar a tu usuario" << endl;
                cout << "Bienvenido,podras hacer una serie de opciones con tu usuario" << endl;
                do
                {

                    cout << "                                                               MENU" << endl;
                    cout << "1.-VER MI ID" << endl;
                    cout << "2.-VER MIS DATOS" << endl;
                    cout << "3.-MIS AMIGOS" << endl;
                    cout << "4.-MIS PUBLICACIONES" << endl;
                    cout << "5.-AGREGAR AMIGO" << endl;
                    cout << "6.-HACER UN POST" << endl;
                    cout << "7.-VER AMIGO" << endl;
                    cout << "8.-HACER BUSQUEDA DE AMIGOS" << endl;
                    cout << "9.-VER BUSQUEDAS DE AMIGOS" << endl;
                    cout << "10.-SALIR" << endl;
                    cin >> MenuU;
                    switch (MenuU)
                    {
                    case 1:
                        cout << "HAS DECIDIDO VER ID" << endl;
                        cout << perfilUsuario->getid();
                        break;
                    case 2:
                        cout << "HAS DECIDIDO VER TUS DATOS" << endl;
                        perfilUsuario->mostrar();
                        break;
                    case 3:
                        cout << "HAS DECIDIDO VER A TUS AMIGOS" << endl;
                        perfilUsuario->mostrarAmigos();
                        break;
                    case 4:
                        cout << "HAS DECIDIDO VER TUS PUBLICACIONES" << endl;
                        perfilUsuario->mostrarPublicaciones();
                        break;
                    case 5:
                        cout << "HAS DECIDIDO AGREGAR UN NUEVO AMIGO" << endl;
                        cout << "DAME EL ID DE TU AMIGO" << endl;
                        cin >> idA;
                        amigo = sl.getUsuario(idA);
                        if (amigo != nullptr)
                        {
                            cout << "Hemos podido agregar a tu amigo" << endl;
                            perfilUsuario->agregarAmigo(amigo);
                        }
                        break;
                    case 6:
                        cout << "HAS DECIDIDO HACER UN POST" << endl;
                        perfilUsuario->crearPublicacion();
                        break;
                    case 7:
                        cout << "HAS DECIDIDO VER A UN AMIGO" << endl;
                        cout << "DAME EL ID DE TU AMIGO" << endl;
                        cin >> idA;
                        amigo = sl.getUsuario(idA);
                        if (amigo != nullptr)
                        {
                            cout << "La informacion de tu amigo es:" << endl;
                            amigo->mostrar();
                        }
                        break;
                    case 8:
                        cout << "HAS DECIDIDO CREAR UNA BUSQUEDA DE AMIGO" << endl;
                        perfilUsuario->buscarAmigos();
                        break;
                    case 9:
                        cout << "HAS DECIDIDO VER TUS BUSQUEDAS DE AMIGO" << endl;
                        perfilUsuario->mostrasBusquedaA();
                        break;
                    case 10:
                        cout << "ADIOS" << endl;
                        break;
                    default:
                        cout << "ELIGE OPCION VALIDA" << endl;
                        break;
                    }
                } while (MenuU != 10);
            }
            break;

        case 4:
            cout << "HAS ELEGIDO AGREGAR A UN NUEVO USUARIO" << endl;
            sl.agregarUsuario();
            break;
        case 5:
            cout << "HAS ELEGIDO VER TODAS LAS BUSQUEDA DE AMISTAD" << endl;
            sl.mostrarBusquedas();
            break;
        case 6:
            cout << "ADIOS" << endl;
            return 0;
        default:
            cout << "ELIGE OPCION VALIDA" << endl;
            break;
        }
    }
}