#include <iostream>


using namespace std;
 
class Vacas {
  public:
        void setVacas(string nombre, string raza, float peso, float lts_leche);
		void setnombre();
		void setraza();
		void setpeso();
		void setlts_leche();
         
        string getnombre();
		string getraza();
		float getpeso();
		float getlts_leche();
		
		void addnombre(string nombre);
		void addraza(string raza);
		void addpeso(float peso);
		void addlts_leche(float lts_leche);
		
        private:
                string nombre;
                string raza;
                float peso;
                float lts_leche;
                
};

