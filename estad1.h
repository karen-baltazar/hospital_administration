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
 * Clase: Estad1
 * Clase cuyo origen es la clasificación sobre 
 * progreso de la enfermedad en diferentes estadíos:
 * Estadío 1. Sin complicaciones.
*/

// Declaración de Clase: Estad1
class Estad1{
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
		Estad1();
		
		// Getters()
		int getNum();
		string getNombre();
		string getEnfermedad();
		string getSintomas();
		string getNotas();
		string getIndicaciones();
		
		// Setters()
		void setNum(int);
		void setNombre(string);
		void setEnfermedad(string);
		void setSintomas(string);
		void setNotas(string);
		void setIndicaciones(string);		
};

// Constructor
Estad1::Estad1(){
	num=67953;
	nombre="Gabriel Fernández";
	enfermedad="Carcinoma in situ";
	sintomas="Cambio en los hábitos de evacuación";
	notas="Hábitos sugieren posible desarrollo de cáncer colorrectal";
	indicaciones="Realizar prueba de detección de cáncer colorrectal";
}

// Getters()
int Estad1::getNum(){
	return num;
}

string Estad1::getNombre(){
	return nombre;
}

string Estad1::getEnfermedad(){
	return enfermedad;
}

string Estad1::getSintomas(){
	return sintomas;
}

string Estad1::getNotas(){
	return notas;
}

string Estad1::getIndicaciones(){
	return indicaciones;
}

// Setters()
void Estad1::setNum(int n){
	num=n;
}

void Estad1::setNombre(string nom){
	nombre=nom;
}

void Estad1::setEnfermedad(string enfer){
	enfermedad=enfer;	
}

void Estad1::setSintomas(string sint){
	sintomas=sint;	
}

void Estad1::setNotas(string note){
	notas=note;
}

void Estad1::setIndicaciones(string indic){
	indicaciones=indic;
}