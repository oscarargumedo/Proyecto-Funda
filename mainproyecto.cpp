#include <iostream>
#include <windows.h>

using namespace std;

int opcop = 1, opcion = 1;

               int
               main()
{
    do
    {
        menuprincipal();
        cin >> opcion;
        if (opcion == 1)
        {
            /* code */
        }
        else
        {
            opcop = 2;
        }

    } while (opcop == 1);
    return 0;
}

void menuprincipal ();