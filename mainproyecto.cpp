#include <iostream>
#include <windows.h>

using namespace std;
// Variables
int opcop = 1, opcion = 1, opcmenu, opcplato, opcant;
    //Para la cantidad de platillos en existencia
int cantdesayuno[3] = {10, 10, 10};
int cantalmuerzo[3] = {10, 10, 10};
int cantcena[3] = {10, 10, 10};
int cantbebida[3] = {10, 10, 10};
    //Para almacenar la cantidad de platilos pedidos por el usuario
int peddesayuno[3] = {0, 0, 0};
int pedalmuerzo[3] = {0, 0, 0};
int pedcena[3] = {0, 0, 0};
int pedbebida[3] = {0, 0, 0};
    //Precios de los platillos
float preciodesayuno[3] = {2.50, 3.00, 2.50};
float precioalmuerzo[3] = {3.00, 3.00, 3.50};
float preciocena[3] = {2.75, 3.00, 2.75};
float preciobebida[3] = {0.50, 0.85, 0.75};
    //Nombres de los platillos
string menudesayuno[3] = {"Desayuno típico", "Orden de pancakes", "Sándwich mañanero"};
string menualmuerzo[3] = {"Pechuga de pollo a la plancha", "Carne de res", "Ensalada Universitaria"};
string menucena[3] = {"Sándwich El de siempre", "Cena típica", "Mega Dog"};
string menubebida[3] = {"Café americano", "Coca-Cola lata", "Fresco de jamaica"};
// Prototipos
void menuprincipal();
void division();
// Inicio del programa
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    division();
    menuprincipal();
    cin >> opcion;
    do
    {
        if (opcion == 1)
        {
            division();
            cout << "Menús" << endl
                 << "1)Desayunos" << endl
                 << "2)Almuerzos" << endl
                 << "3)Cenas" << endl
                 << "4)Bebidas" << endl;
            cin >> opcmenu;
            switch (opcmenu)
            {
            case 1:
                division();
                cout << "Desayunos" << endl
                     << "1) Desayuno típico (Frijoles refritos, huevos revueltos, plátano frito y un pan francés) --- $2.50 --- Disponibles: " << cantdesayuno[0] << endl
                     << "2)Orden de tres pancakes acompañada de frutas frescas --- $3.00 --- Disponibles: " << cantdesayuno[1] << endl
                     << "3)Sándwich mañanero (huevos revueltos, jamón, queso americano y lechuga) --- $2.50 --- Disponibles: " << cantdesayuno[2] << endl;
                cin >> opcplato;
                cout << "Elija la cantidad: ";
                cin >> opcant;
                cantdesayuno[opcplato - 1] = cantdesayuno[opcplato - 1] - opcant;
                //Validando existencias
                if (cantdesayuno[opcplato - 1] < 0)
                {
                //Si no
                    cout << "No hay platos suficientes en existencia" << endl;
                    cantdesayuno[opcplato - 1] = cantdesayuno[opcplato - 1] + opcant;
                }
                else
                {
                //Si sí
                    peddesayuno[opcplato - 1] = peddesayuno[opcplato - 1] + opcant;
                }
                break;
            case 2:
                division();
                cout << "Almuerzos" << endl
                     << "1) Pechuga de pollo a la plancha acompañada de arroz, ensalada fresca y dos tortillas  --- $3.00 --- Disponibles: " << cantalmuerzo[0] << endl
                     << "2)Carne de res acompañada de arroz, ensalada fresca y dos tortillas --- $3.00 --- Disponibles: " << cantalmuerzo[1] << endl
                     << "3)Ensalada universitaria (Lechuga, tomate, pepino, zanahoria rallada y crotones) --- $3.50 --- Disponibles: " << cantalmuerzo[2] << endl;
                cin >> opcplato;
                cout << "Elija la cantidad: ";
                cin >> opcant;
                cantalmuerzo[opcplato - 1] = cantalmuerzo[opcplato - 1] - opcant;
                if (cantalmuerzo[opcplato - 1] < 0)
                {
                    cout << "No hay platos suficientes en existencia" << endl;
                    cantalmuerzo[opcplato - 1] = cantalmuerzo[opcplato - 1] + opcant;
                }
                else
                {
                    pedalmuerzo[opcplato - 1] = pedalmuerzo[opcplato - 1] + opcant;
                }
                break;
            case 3:
                division();
                cout << "Cenas" << endl
                     << "1)Sándwich 'El de siempre' (Jamón, queso americano, lechuga, tomate, aguacate y la salsa de la casa) --- $2.75 --- Disponibles: " << cantcena[0] << endl
                     << "2)Cena típica (Huevos revueltos, frijoles refritos, plátano frito, queso fresco y un pan francés) --- $3.00 --- Disponibles: " << cantcena[1] << endl
                     << "3)'Mega Dog' (Hot dog con XL con chili y la salsa de la casa) --- $2.75 --- Disponibles: " << cantcena[2] << endl;
                cin >> opcplato;
                cout << "Elija la cantidad: ";
                cin >> opcant;
                cantcena[opcplato - 1] = cantcena[opcplato - 1] - opcant;
                if (cantcena[opcplato - 1] < 0)
                {
                    cout << "No hay platos suficientes en existencia" << endl;
                    cantcena[opcplato - 1] = cantcena[opcplato - 1] + opcant;
                }
                else
                {
                    pedcena[opcplato - 1] = pedcena[opcplato - 1] + opcant;
                }
                break;
            case 4:
                division();
                cout << "Bebidas" << endl
                     << "1) Café americano --- $0.50 --- Disponibles: " << cantbebida[0] << endl
                     << "2)Coca-Cola en lata --- $0.85 --- Disponibles: " << cantbebida[1] << endl
                     << "3)Fresco de jamaica --- $0.75 --- Disponibles: " << cantbebida[2] << endl;
                cin >> opcplato;
                cout << "Elija la cantidad: ";
                cin >> opcant;
                cantbebida[opcplato - 1] = cantbebida[opcplato - 1] - opcant;
                if (cantbebida[opcplato - 1] < 0)
                {
                    cout << "No hay platos suficientes en existencia" << endl;
                    cantbebida[opcplato - 1] = cantbebida[opcplato - 1] + opcant;
                }
                else
                {
                    pedbebida[opcplato - 1] = pedbebida[opcplato - 1] + opcant;
                }
                break;
            default:
                division();
                cout << "Opcion inválida" << endl;
                break;
            }
        }
        else
        {
            opcop = 2;
        }

    } while (opcop == 1);
    return 0;
}
// funciones
void menuprincipal();
void division();