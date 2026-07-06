#include <iostream>
#include <windows.h>
#include <string>
#include "funcionesP.h"

using namespace std;

// Declaración del struct y creación de los arreglos
struct Categoria
{
    string menu;
    float precio;
    int cant;
    int ped;
} desayuno[3] = {
    {"Desayuno típico (Frijoles refritos, huevos revueltos, plátano frito y un pan francés)", 2.50, 10, 0},
    {"Orden de tres pancakes acompañada de frutas frescas", 3.00, 10, 0},
    {"Sándwich mañanero (huevos revueltos, jamón, queso americano y lechuga)", 2.50, 10, 0}},
  almuerzo[3] = {{"Pechuga de pollo a la plancha acompañada de arroz, ensalada fresca y dos tortillas", 3.00, 10, 0}, {"Carne de res acompañada de arroz, ensalada fresca y dos tortillas", 3.00, 10, 0}, {"Ensalada universitaria (Lechuga, tomate, pepino, zanahoria rallada y crotones)", 3.50, 10, 0}}, cena[3] = {{"Sándwich 'El de siempre' (Jamón, queso americano, lechuga, tomate, aguacate y la salsa de la casa)", 2.75, 10, 0}, {"Cena típica (Huevos revueltos, frijoles refritos, plátano frito, queso fresco y un pan francés)", 3.00, 10, 0}, {"'Mega Dog' (Hot dog con XL con chili y la salsa de la casa)", 2.75, 10, 0}}, bebida[3] = {{"Café americano", 0.50, 10, 0}, {"Coca-Cola en lata", 0.85, 10, 0}, {"Fresco de jamaica", 0.75, 10, 0}};

int opcop = 1, opcion = 1, opcmenu, opcplato, opcant, opcag;
float efectivo, cambio = 0, subtotal = 0, total = 0;

// Variables para la edicion
int opceditar, opcagregar, opceliminar, elemento, opcpago;
string tarjeta;

// Inicio del programa
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    division();
    menuprincipal();
    cin >> opcion;

    if (opcion == 1)
    {
        do
        {
        // Reinicio de variables para nuevo pedido
            total = 0;
            subtotal = 0;
            cambio = 0;
            
            // Reinicio de los elementos pedidos
            for(int i = 0; i < 3; i++) {
                desayuno[i].ped = 0;
                almuerzo[i].ped = 0;
                cena[i].ped = 0;
                bebida[i].ped = 0;
            }
            bool flujo_principal = true;

            while (flujo_principal)
            {
                do
                {
                    division();
                    cout << "Menús" << endl
                         << "1) Desayunos" << endl
                         << "2) Almuerzos" << endl
                         << "3) Cenas" << endl
                         << "4) Bebidas" << endl;
                    cin >> opcmenu;

                    switch (opcmenu)
                    {
                    case 1:
                        division();
                        cout << "Desayunos" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << ") " << desayuno[i].menu
                                 << " --- $" << desayuno[i].precio << " --- Disponibles: " << desayuno[i].cant << endl;
                        }
                        cin >> opcplato;
                        cout << "Elija la cantidad: ";
                        cin >> opcant;

                        desayuno[opcplato - 1].cant = desayuno[opcplato - 1].cant - opcant;

                        if (desayuno[opcplato - 1].cant < 0)
                        {
                            cout << "No hay platos suficientes en existencia" << endl;
                            desayuno[opcplato - 1].cant = desayuno[opcplato - 1].cant + opcant;
                        }
                        else
                        {
                            desayuno[opcplato - 1].ped = desayuno[opcplato - 1].ped + opcant;
                            subtotal = opcant * desayuno[opcplato - 1].precio;
                            total = total + subtotal;
                        }
                        break;

                    case 2:
                        division();
                        cout << "Almuerzos" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << ") " << almuerzo[i].menu
                                 << " --- $" << almuerzo[i].precio << " --- Disponibles: " << almuerzo[i].cant << endl;
                        }
                        cin >> opcplato;
                        cout << "Elija la cantidad: ";
                        cin >> opcant;

                        almuerzo[opcplato - 1].cant = almuerzo[opcplato - 1].cant - opcant;

                        if (almuerzo[opcplato - 1].cant < 0)
                        {
                            cout << "No hay platos suficientes en existencia" << endl;
                            almuerzo[opcplato - 1].cant = almuerzo[opcplato - 1].cant + opcant;
                        }
                        else
                        {
                            almuerzo[opcplato - 1].ped = almuerzo[opcplato - 1].ped + opcant;
                            subtotal = opcant * almuerzo[opcplato - 1].precio;
                            total = total + subtotal;
                        }
                        break;

                    case 3:
                        division();
                        cout << "Cenas" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << ") " << cena[i].menu
                                 << " --- $" << cena[i].precio << " --- Disponibles: " << cena[i].cant << endl;
                        }
                        cin >> opcplato;
                        cout << "Elija la cantidad: ";
                        cin >> opcant;

                        cena[opcplato - 1].cant = cena[opcplato - 1].cant - opcant;

                        if (cena[opcplato - 1].cant < 0)
                        {
                            cout << "No hay platos suficientes en existencia" << endl;
                            cena[opcplato - 1].cant = cena[opcplato - 1].cant + opcant;
                        }
                        else
                        {
                            cena[opcplato - 1].ped = cena[opcplato - 1].ped + opcant;
                            subtotal = opcant * cena[opcplato - 1].precio;
                            total = total + subtotal;
                        }
                        break;

                    case 4:
                        division();
                        cout << "Bebidas" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << ") " << bebida[i].menu
                                 << " --- $" << bebida[i].precio << " --- Disponibles: " << bebida[i].cant << endl;
                        }
                        cin >> opcplato;
                        cout << "Elija la cantidad: ";
                        cin >> opcant;

                        bebida[opcplato - 1].cant = bebida[opcplato - 1].cant - opcant;

                        if (bebida[opcplato - 1].cant < 0)
                        {
                            cout << "No hay platos suficientes en existencia" << endl;
                            bebida[opcplato - 1].cant = bebida[opcplato - 1].cant + opcant;
                        }
                        else
                        {
                            bebida[opcplato - 1].ped = bebida[opcplato - 1].ped + opcant;
                            subtotal = opcant * bebida[opcplato - 1].precio;
                            total = total + subtotal;
                        }
                        break;

                    default:
                        division();
                        cout << "Opción inválida" << endl;
                        break;
                    }

                    division();
                    cout << "Subtotal actual del carrito: $" << total << endl;
                    cout << "1) Agregar" << endl;
                    cout << "2) Avanzar" << endl;
                    cin >> opcag;

                } while (opcag == 1);

                // SECCIÓN DE EDICIÓN (Valgame que dolor fue estooo)

                bool menu_edicion = true;
                while (menu_edicion)
                {
                    division();
                    cout << "--- Pedido actual ---" << endl;

                    // Impresión separada por categorías porque no se me ocurrio una mejor una idea xd
                    cout << "--- 1) Desayunos ---" << endl;
                    for (int i = 0; i < 3; i++)
                        if (desayuno[i].ped > 0)
                            cout << "  Platillo " << i + 1 << ") " << desayuno[i].menu << " | Cant: " << desayuno[i].ped << " | Sub: $" << desayuno[i].ped * desayuno[i].precio << endl;

                    cout << "--- 2) Almuerzos ---" << endl;
                    for (int i = 0; i < 3; i++)
                        if (almuerzo[i].ped > 0)
                            cout << "  Platillo " << i + 1 << ") " << almuerzo[i].menu << " | Cant: " << almuerzo[i].ped << " | Sub: $" << almuerzo[i].ped * almuerzo[i].precio << endl;

                    cout << "--- 3) Cenas ---" << endl;
                    for (int i = 0; i < 3; i++)
                        if (cena[i].ped > 0)
                            cout << "  Platillo " << i + 1 << ") " << cena[i].menu << " | Cant: " << cena[i].ped << " | Sub: $" << cena[i].ped * cena[i].precio << endl;

                    cout << "--- 4) Bebidas ---" << endl;
                    for (int i = 0; i < 3; i++)
                        if (bebida[i].ped > 0)
                            cout << "  Platillo " << i + 1 << ") " << bebida[i].menu << " | Cant: " << bebida[i].ped << " | Sub: $" << bebida[i].ped * bebida[i].precio << endl;

                    division();
                    cout << "Total Actual: $" << total << endl;
                    division();

                    cout << "1) editar pedido" << endl;
                    cout << "2) pagar" << endl;
                    cin >> opceditar;

                    if (opceditar == 1)
                    {
                        cout << "1) agregar" << endl;
                        cout << "2) eliminar" << endl;
                        cin >> opcagregar;

                        if (opcagregar == 1)
                        {
                            opcag = 1;
                            menu_edicion = false;
                        }
                        else
                        {
                            division();
                            cout << "--- Eliminar elementos ---" << endl;
                            cout << "1) Eliminar un platillo" << endl;
                            cout << "2) Cancelar todo el pedido" << endl;
                            cin >> opceliminar;

                            if (opceliminar == 1)
                            {
                                int cat_eliminar;
                                cout << "Ingrese el número de la categoría (1=Desayuno, 2=Almuerzo, 3=Cena, 4=Bebida): ";
                                cin >> cat_eliminar;

                                cout << "Ingrese el número del platillo a eliminar (1, 2 o 3): ";
                                cin >> elemento;

                                // Para borrar el pedido multiplicando por 0
                                if (cat_eliminar == 1 && desayuno[elemento - 1].ped > 0)
                                {
                                    total -= (desayuno[elemento - 1].ped * desayuno[elemento - 1].precio);
                                    desayuno[elemento - 1].cant += desayuno[elemento - 1].ped;
                                    desayuno[elemento - 1].ped = 0;
                                    cout << "¡Desayuno eliminado!" << endl;
                                }
                                else if (cat_eliminar == 2 && almuerzo[elemento - 1].ped > 0)
                                {
                                    total -= (almuerzo[elemento - 1].ped * almuerzo[elemento - 1].precio);
                                    almuerzo[elemento - 1].cant += almuerzo[elemento - 1].ped;
                                    almuerzo[elemento - 1].ped = 0;
                                    cout << "Almuerzo eliminado!" << endl;
                                }
                                else if (cat_eliminar == 3 && cena[elemento - 1].ped > 0)
                                {
                                    total -= (cena[elemento - 1].ped * cena[elemento - 1].precio);
                                    cena[elemento - 1].cant += cena[elemento - 1].ped;
                                    cena[elemento - 1].ped = 0;
                                    cout << "Cena eliminada!" << endl;
                                }
                                else if (cat_eliminar == 4 && bebida[elemento - 1].ped > 0)
                                {
                                    total -= (bebida[elemento - 1].ped * bebida[elemento - 1].precio);
                                    bebida[elemento - 1].cant += bebida[elemento - 1].ped;
                                    bebida[elemento - 1].ped = 0;
                                    cout << "Bebida eliminada!" << endl;
                                }
                                else
                                {
                                    cout << "Opción inválida o el platillo no estaba en su pedido." << endl;
                                }
                            }
                            else
                            {
                                division();
                                cout << "El pedido ha sido cancelado. Cerrando sistema..." << endl;
                                return 0;
                            }
                        }
                    }
                    // Seccion de pago //andre
                    else
                    {
                        division();
                        // Desayunos pedidos
                        for (int i = 0; i < 3; i++)
                        {
                            if (desayuno[i].ped > 0)
                            {
                                cout << "-" << desayuno[i].menu << " Cant: " << desayuno[i].ped << " x $" << desayuno[i].ped * desayuno[i].precio << endl;
                            }
                        }
                        // Almuerzos pedidos
                        for (int i = 0; i < 3; i++)
                        {
                            if (almuerzo[i].ped > 0)
                            {
                                cout << "-" << almuerzo[i].menu << " Cant: " << almuerzo[i].ped << " x $" << almuerzo[i].ped * almuerzo[i].precio << endl;
                            }
                        }
                        // Cenas pedidas
                        for (int i = 0; i < 3; i++)
                        {
                            if (cena[i].ped > 0)
                            {
                                cout << "-" << cena[i].menu << " Cant: " << cena[i].ped << " x $" << cena[i].ped * cena[i].precio << endl;
                            }
                        }
                        // Bebidas pedidas
                        for (int i = 0; i < 3; i++)
                        {
                            if (bebida[i].ped > 0)
                            {
                                cout << "-" << bebida[i].menu << " Cant: " << bebida[i].ped << " x $" << bebida[i].ped * bebida[i].precio << endl;
                            }
                        }
                        // Opcion de pago
                        cout << endl
                             << "Total a pagar: $" << total << endl
                             << "1)Efectivo" << endl
                             << "2)Tarjeta" << endl;
                        cin >> opcpago;
                        switch (opcpago)
                        {
                        case 1:
                            division();
                            do
                            {
                                cout << "Ingrese la cantidad que entrega: ";
                                cin >> efectivo;
                                if (efectivo < total)
                                {
                                    cout <<"El monto ingresado no puede ser menor que el total"<< endl;
                                }
                            } while (efectivo < total);
                            cambio = efectivo - total;
                            cout << "Su cambio es de: $" << cambio << endl;
                            break;

                        case 2:
                            division();
                            cout << "Ingrese los ultimos cuatro digitos de su tarjeta: ";
                            cin >> tarjeta;
                            cambio = 0;
                            cout << "Su cambio es de: $" << cambio << endl;
                            break;
                        default:
                            break;
                        }
                        cout << "¡Gracias por su compra!" << endl;
                        menu_edicion = false;
                        flujo_principal = false;
                    }
                }
            }
            division();
            cout <<"¿Desea realizar otro pedido?"<< endl<<"1)Nuevo pedido"<< endl<<"2)Salir del programa" << endl<< "Opción: ";
            cin >> opcop;
        } while (opcop == 1);
    }

    return 0;
}
