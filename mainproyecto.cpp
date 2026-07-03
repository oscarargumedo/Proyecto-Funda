#include <iostream>
#include <windows.h>

using namespace std;
//Variables
int opcop = 1, opcion = 1, opcmenu,opdesayuno,opalmuerzo,opcena,opbebida,opcant;
int cantdesayuno[3] = {10, 10, 10};
int cantalmuerzo[3] = {10, 10, 10};
int cantcena[3] = {10, 10, 10};
int cantbebida[3] = {10, 10, 10};
string menudesayuno[3] = {"Desayuno típico", "Orden de pancakes", "Sándwich mañanero"};
string menualmuerzo[3] = {"Pechuga de pollo a la plancha", "Carne de res", "Ensalada Universitaria"};
string menucena[3] = {"Sándwich El de siempre", "Cena típica", "Mega Dog"};
string menubebida[3] = {"Café americano", "Coca-Cola lata", "Fresco de jamaica"};
//Prototipos
void menuprincipal ();
//Inicio del programa
               int
               main()
{
    SetConsoleOutputCP(CP_UTF8);
    do
    {
        menuprincipal();
        cin >> opcion;
        if (opcion == 1)
        {
        cout<<"Menus"<<endl<<"1)Desayunos"<<endl<<"2)Almuerzos"<<endl<<"3)Cenas"<<endl<<"4)Bebidas"<<endl;
        cin>>opcmenu;
        switch (opcmenu)
        {
        case 1:
            cout<<"Desayunos"<<endl<<"1) Desayuno típico (Frijoles refritos, huevos revueltos, plátano frito y un pan francés) --- $2.50 --- Disponibles: "<<cantdesayuno[0]<<endl<<"2)Orden de tres pancakes acompañada de frutas frescas --- $3.00 --- Disponibles: "<<cantdesayuno[1]<<endl<<"3)Sándwich mañanero (huevos revueltos, jamón, queso americano y lechuga) --- $2.50 --- Disponibles: "<<cantdesayuno[2]<<endl;
            cin>>opdesayuno;
            cout<<"Elija la cantidad: ";
            cin>>opcant;
            cantdesayuno[opdesayuno-1]=cantdesayuno[opdesayuno-1]-opcant;
            if (cantdesayuno[opdesayuno-1]<0)
            {
            cout<<"No hay platos suficientes en existencia"<<endl;
            cantdesayuno[opdesayuno-1]=cantdesayuno[opdesayuno-1]+opcant;
            }
            
            break;
        case 2:
            cout<<"Almuerzos"<<endl<<"1) Pechuga de pollo a la plancha acompañada de arroz, ensalada fresca y dos tortillas  --- $3.00 --- Disponibles: "<<cantalmuerzo[0]<<endl<<"2)Carne de res acompañada de arroz, ensalada fresca y dos tortillas --- $3.00 --- Disponibles: "<<cantalmuerzo[1]<<endl<<"3)Ensalada universitaria (Lechuga, tomate, pepino, zanahoria rallada y crotones) --- $3.50 --- Disponibles: "<<cantalmuerzo[2]<<endl;
            cin>>opalmuerzo;
            cout<<"Elija la cantidad: ";
            cin>>opcant;
            cantalmuerzo[opalmuerzo-1]=cantalmuerzo[opalmuerzo-1]-opcant;
            if (cantalmuerzo[opalmuerzo-1]<0)
            {
            cout<<"No hay platos suficientes en existencia"<<endl;
            cantalmuerzo[opalmuerzo-1]=cantalmuerzo[opalmuerzo-1]+opcant;
            }
            break;
        case 3:
            cout<<"Cenas"<<endl<<"1)Sándwich 'El de siempre' (Jamón, queso americano, lechuga, tomate, aguacate y la salsa de la casa) --- $2.75 --- Disponibles: "<<cantcena[0]<<endl<<"2)Cena típica (Huevos revueltos, frijoles refritos, plátano frito, queso fresco y un pan francés) --- $3.00 --- Disponibles: "<<cantcena[1]<<endl<<"3)'Mega Dog' (Hot dog con XL con chili y la salsa de la casa) --- $2.75 --- Disponibles: "<<cantcena[2]<<endl;
            cin>>opcena;
            cout<<"Elija la cantidad: ";
            cin>>opcant;
            cantcena[opcena-1]=cantcena[opcena-1]-opcant;
            if (cantcena[opcena-1]<0)
            {
            cout<<"No hay platos suficientes en existencia"<<endl;
            cantcena[opcena-1]=cantcena[opcena-1]+opcant;
            }
            break;
         case 4:
            cout<<"Bebidas"<<endl<<"1) Café americano --- $0.50 --- Disponibles: "<<cantbebida[0]<<endl<<"2)Coca-Cola en lata --- $0.85 --- Disponibles: "<<cantbebida[1]<<endl<<"3)Fresco de jamaica --- $0.75 --- Disponibles: "<<cantbebida[2]<<endl;
            cin>>opbebida;
            cout<<"Elija la cantidad: ";
            cin>>opcant;
            cantbebida[opbebida-1]=cantbebida[opbebida-1]-opcant;
            if (cantdesayuno[opdesayuno-1]<0)
            {
            cout<<"No hay platos suficientes en existencia"<<endl;
            cantbebida[opbebida-1]=cantbebida[opbebida-1]+opcant;
            }
            break;
        default:
        cout<<"Opcion inválida"<<endl;
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
//funciones
void menuprincipal ();