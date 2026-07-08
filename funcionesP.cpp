#include <iostream>
#include "funcionesP.h"
using namespace std;

//funciones
void menuprincipal ()
{
cout<<"Bienvenido a Cafetería UCA" << endl
             << "Seleccione una opción: " << endl
             << "1)Realizar pedido" << endl
             << "2)Salir" << endl;
}
void division()
{
cout<<"============================================================="<<endl;  
}
void menuN2 ()
{
cout << "Menús" << endl
                         << "1) Desayunos" << endl
                         << "2) Almuerzos" << endl
                         << "3) Cenas" << endl
                         << "4) Bebidas" << endl;    
}

void avisoexistencias ()
{
cout << "No hay platos suficientes en existencia" << endl;
}

void menuEliminar()
{
cout << "--- Eliminar elementos ---" << endl;
                            cout << "1) Eliminar un platillo" << endl;
                            cout << "2) Cancelar todo el pedido" << endl;    
}