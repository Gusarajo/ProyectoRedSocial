#include <bits/stdc++.h>
#include "rlutil.h"
using namespace rlutil;
using namespace std;
 
 int main()
 {

    while(true)
    {
        //kbhit() es verdadero si se presiona una tecla y falso si no
        if(kbhit())
        {
            // getkey() regresa un código numérico asociado a cada tecla. letras mayúsculas y minúsculas tienen diferentes valores.
            int k = getkey();
            // mostramos el código de la tecla presionada
            cout << k << endl;
            if(k == 14)
            {
                cout << "tecla arriba"<< endl;
            }
            if (k == 15)
            {
                cout << "tecla abajo"<< endl;
            }
            if(k == 16)
            {
                cout << "tecla izquierda"<< endl;
            }
            if (k == 17)
            {
                cout << "tecla derecha"<< endl;
            }
            if (k == 32)
            {
                cout << "barra de espacio"<< endl;
            }
            if (k == 1)
            {
                cout << "tecla enter"<< endl;
            }
            if(k == 0)
            {
                cout << "tecla escape" << endl;
                // usamos un break cuando queremos salirnos del while y continuar con el código.
                break;
            }
        }
    }



    return 0;
 }