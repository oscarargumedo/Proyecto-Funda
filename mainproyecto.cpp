#include <iostream>
#include <windows.h>

using namespace std;
//Variables
int opcop = 1, opcion = 1, opcmenu, opdesayuno[3];
string menudesayuno[3] = {"Desayuno típico", "Orden de pancakes", "Sándwich mañanero"};
string menualmuerzo[3] = {"Pechuga de pollo a la plancha", "Carne de res", "Ensalada Universitaria"};
string menucena[3] = {"Sándwich El de siempre", "Cena típica", "Mega Dog"};
string menubebida[3] = {"Café americano", "Coca-Cola lata", "Fresco de jamaica"};
//Funciones
void menuprincipal ();
               int
               main()
{
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
            cout<<"Desayunos"<<endl<<"1) Desayuno típico (Frijoles refritos, huevos revueltos, platano frito y un pan frances) --- $2.50"<<endl<<"2)Orden de tres pancakes acompanada de frutas frescas --- $3.00"<<endl<<"3)Sandwich mananero (huevos revueltos, jamon, queso americano y lechuga) --- $2.50"<<endl;
            
            break;
        case 2:
            cout<<"Almuerzos"<<endl<<"1) Pechuga de pollo a la plancha acompanada de arroz, ensalada fresca y dos tortillas  --- $3.00"<<endl<<"3)Carne de res acompanada de arroz, ensalada fresca y dos tortillas --- $3.00"<<endl<<"3)Ensalada universitaria (Lechuga, tomate, pepino, zanahoria rallada y crotones) --- $3.50"<<endl;
            break;
        case 3:
            cout<<"Cenas"<<endl<<"1)Sandwich 'El de siempre' (Jamon, queso americano, lechuga, tomate, aguacate y la salsa de la casa) --- $2.75"<<endl<<"2)Cena tipica (Huevos revueltos, frijoles refritos, platano frito, queso fresco y un pan frances) --- $3.00"<<endl<<"3)'Mega Dog' (Hot dog con XL con chili y la salsa de la casa) --- $2.75"<<endl;
            break;
         case 4:
            cout<<"Bebidas"<<endl<<"1) Cafe americano --- $0.50"<<endl<<"2)Coca-Cola en lata --- $0.85"<<endl<<"3)Fresco de jamaica --- $0.75"<<endl;
            break;
        default:
        cout<<"Opcion invalida"<<endl;
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

void menuprincipal ();