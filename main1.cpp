//Program build for Jesus Ramirez or "El Yisus" XD

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <cctype>
#include <sstream>
#include <iomanip>
#include "cant_vacas.h"
#include "clases_vacas.h"

struct vacas{
       float peso;
       float lts_leche;
       string nombre[50];
       string raza[50];
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

vacas v[20];
char resp;
int i;
int contador[Ancho];
string temp;
float peso, lts_leche;
string nombre, raza;
//variables globales
int op=0, cont=0, n;

int iteracion=1, bandera=0;

//cuerpo principal
int main() {    
    
    if( cont > contador[Ancho] ) {  //la cantidad maxima de la estructura vacas es 1000
	  cout<<"Esta excediendo la cantidad de vacas permitidas"<<endl;
	  cont = 0; 
   } 
    struct vacas contador[Ancho];
   
    int op;
    while (op !=3) {
          cout<<"***"<<setw(11)<<"MENU"<<setw(11)<<"***"<<endl; //Estableci un nuevo orden en el Menu
          cout <<setw(6) <<"Introduzca una opcion: " <<endl;
          cout << "1) OPCION 1: Agregar Vacas " <<endl;
	      cout << "2) OPCION 2: Ver las Vacas que se han ordenado" <<endl;
	      cout << "3) OPCION 3: salir" <<endl<<endl;
    	  cin >> op;

      	
   		  system("cls");
 
          switch (op)
          {
            case 1:
                 
            	do{
                system("cls");
            	char resp='s';
            	struct vacas v[20];
				int i=0;
				
                system("cls");
                cout<<"ingrese los datos de la vaca Nº: " <<endl;
                cin>>n;
                system("cls");
                for(int i=0; i<n; i++){
      
                    cout<<"Ingrese el nombre de la vaca: " <<endl;
                    cin>>nombre;
                    getline(cin, nombre); 
                            
                    cout<<endl<<"Diga a que raza perteneze : " <<endl;
                    cin>>raza;
                    getline(cin, raza);
	            
                    cout<<endl<<"Ingrese el peso de la vaca: " <<endl;
                    cin>>peso;
                                   
                    cout<<endl<<"Ingrese la cantidad de leche promedio por dia: " <<endl;
	                cin>>lts_leche;
            	    i = i + 1 ;
     	            cont = i ;
     	            system("cls");
		       	}
     	        cout<<"desea agregar mas vacas al registro?  s/n: "<<endl;
     	        cin>>resp;
     	        
                 
                } while (resp == 's');
                    system("PAUSE");
			        system("cls");
                break; 	
		        case 2:
                {     
		    	
			    struct vacas v[Ancho];
		    	int i;
		    			
			    cout <<"lista de vacas: " <<endl;
			    cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" <<endl;
                cout<<"NOMBRE                   RAZA           PESO                   PRODUCCION \n";
			    
			    for (i=0; i<cont; i++) {
			    	cout<<"nombre      raza      peso       lts_leche \n", v[i].nombre , v[i].peso, v[i].raza, v[i].lts_leche;
				}
                system("PAUSE");
			    system("cls");
              }
		      break;
		      case 3: 
		        return 0;
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

