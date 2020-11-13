// Biblioteca
#include <iostream>
using namespace std;

/* 
 * Avance 1: Disease Staging
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 12/11/2020
*/

/* 
 * Clase: Estad3
 * Clase cuyo origen es la clasificación sobre 
 * progreso de la enfermedad en diferentes estadíos:
 * Estadío 3. Afecta a diversos organos y sistemas.
*/

// Declaración de Clase: Estad1
class Estad3{
	// Declaración de atributos (características)
	private:
		// Identificación
		int num;
		string nombre;
		// Expediente
		string enfermedad;
		string sintomas;
		string notas;
		string indicaciones;	
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor
		Estad3();
		
		// Getters()
		int getNum();
		string getNombre();
		string getEnfermedad();
		string getSintomas();
		string getNotas();
		string getIndicaciones();
		
		// Setters()
		void setNum( int);
		void setNombre(string);
		void setEnfermedad(string);
		void setSintomas(string);
		void setNotas(string);
		void setIndicaciones(string);		
};

// Constructor
Estad3::Estad3(){
	num=98698;
	nombre="Luis Carlos Trujillo";
	enfermedad="Cáncer colorrectal - Distante";
	sintomas="Sangrado rectal, dolor abdominal, debilidad y cansancio";
	notas="El cáncer se ha diseminado a partes distantes del cuerpo";
	indicaciones="Plática sobre continuación del tratamiento considernado tasa relativa de supervivencia a 5 años de %15";
}

// Getters()
int Estad3::getNum(){
	return num;
}

string Estad3::getNombre(){
	return nombre;
}

string Estad3::getEnfermedad(){
	return enfermedad;
}

string Estad3::getSintomas(){
	return sintomas;
}

string Estad3::getNotas(){
	return notas;
}

string Estad3::getIndicaciones(){
	return indicaciones;
}

// Setters()
void Estad3::setNum(int n){
	num=n;
}

void Estad3::setNombre(string nom){
	nombre=nom;
}

void Estad3::setEnfermedad(string enfer){
	enfermedad=enfer;	
}

void Estad3::setSintomas(string sint){
	sintomas=sint;	
}

void Estad3::setNotas(string note){
	notas=note;
}

void Estad3::setIndicaciones(string indic){
	indicaciones=indic;
}