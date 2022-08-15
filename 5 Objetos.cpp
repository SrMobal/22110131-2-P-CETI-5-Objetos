#include <iostream>
#include <stdlib.h>
///5 Objetos.
/*Este programa fue creado con el proposito de 
Crear 5 objetos.*/
//Moisés Eduardo Mora López - 22110131.

using namespace std;

class animal
{
	private:
		
		int edad;
		string termorregulacion;
		string nombre;
		string alimentacion;
	
	public:
		animal(int,string,string,string);
		void leer();
		void general();

};

animal::animal(int _edad, string _termorregulacion,string _nombre,string _alimentacion)
{
	edad = _edad;
	termorregulacion = _termorregulacion;
	nombre = _nombre;
	alimentacion = _alimentacion;
	
}

void animal::leer()
{
	printf("\n\n");

	cout<<"La "<<termorregulacion<<" llega a ser util para la "<<nombre<<"."<<endl;
	cout<<"Su dieta "<<alimentacion<<" le permite conseguir sufieciente energia en el dia a dia."<<endl;
	
}

void animal::general()
{
	printf("\n\n");
	
	cout<<"Nombre de al especie: "<<nombre<<endl;
	cout<<"Edad del especimen: "<<edad<<" anios"<<endl;
	cout<<"Tipo de termoregulacion: "<<termorregulacion<<endl;
	cout<<"Dieta del especimen: "<<alimentacion<<endl;
	
}

int main() 
{
	animal p1 = animal(7,"Sangre fria","Iguana","Herbivora");
	animal p2 = animal(38,"Sangre caliente","Humano","Omnivora");
	animal p3 = animal(1,"Sangre fria","Oruga","Hervivora");
	animal p4 = animal(4,"Sangre Caliente","Oso","Omnivora");
	animal p5 = animal(8,"Sangre Caliente","Leon","Carnivora");
	
	p1.general();
	p1.leer();
	p2.general();
	p2.leer();
	p3.general();
	p3.leer();
	p4.general();
	p4.leer();
	p5.general();
	p5.leer();
	
	printf("\n\n");

 system("pause");

 return 0;	
}
