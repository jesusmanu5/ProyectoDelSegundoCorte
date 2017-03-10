#include <iostream>
#include "cant_vacas.h"
#include <conio.h>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char nombre;
int peso;
char raza;
int litrosDeLecheDiario;
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

int Cant_vacas[1000];
	int i,j,aux;
	
//	for(i=0;i<1000;i++){
//		for(j=0;j<1000;j++){
//			if(array[j] > array[j+1]){
//				aux = array[j];
//				array[j] = array[j+1];
//				array[j+1] = aux;
//			}
//		}
//	}
void agregar (int){
int cantidad;
}
