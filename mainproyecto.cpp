#include <iostream>
#include <windows.h>

using namespace std;

int opcop = 1, opcion = 1;

               int
               main()
{
    do
    {
        cout << "Bienvenido a Cafeteria UCA" << endl
             << "Seleccione una opcion: " << endl
             << "1)Realizar pedido" << endl
             << "2)Salir" << endl;
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
