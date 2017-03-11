#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <cctype>
#include <sstream>
#include "cant_vacas.h" /*inclui algunas librerias mas
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char numero[15];
char nomb[15];
int contador[cant_vacas];
string valortemp;
float peso, lts_leche;
string nombre;
int raza=1;
int op=0, cont=0; /*agrege nuevas variables */

using namespace std;

void agregar ();

int main() {
	int op;
	while (op !=3)
	{
	    cout << "1) OPCION 1: Agregar Vacas " <<endl;
	    cout << "2) OPCION 2: Ordenar Vacas" <<endl;
	    cout << "3) OPCION 3: salir" <<endl;
	    cout << "Introduzca una opcion: ";
    	cin >> op;
		
		switch (op)
		{
		    case 1:
		    	system("cls");
			    cout <<"Ingrese la cantidad de vacas que desea agregar" <<endl;
			    system("PAUSE");
			    system("cls");
		    break;	
		    case 2:
		    	system("cls");
			    cout <<"Ingrese la cantidad de vacas que desea ordenar" <<endl;
			    system("PAUSE");
			    system("cls");
		    break;	
		    
		    default: 
			if(op<1 || op>3 ){
				system("cls");
				cout <<"Ingrese una opcion valida.."<<endl;
				system("PAUSE");
			    system("cls");
			}
			break;
		}
	}

 getch();
 system("PAUSE");
 return 0;
}
