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
 * Clase: Estad2
 * Clase cuyo origen es la clasificación sobre 
 * progreso de la enfermedad en diferentes estadíos:
 * Estadío 2. Manifestaciones en un órgano o sistema.
*/

// Declaración de Clase: Estad2
class Estad2{
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
		Estad2();
		
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
Estad2::Estad2(){
	num=87479;
	nombre="María Fernanda Martínez";
	enfermedad="Cáncer colorrectal - Localizado";
	sintomas="Sangrado rectal y pérdida inexplicable de peso";
	notas="Caso confirmado de cáncer colorrectal según la prueba de detección";
	indicaciones="Buscar especialista para iniciar tratamiento inmediato del cáncer";
}

// Getters()
int Estad2::getNum(){
	return num;
}

string Estad2::getNombre(){
	return nombre;
}

string Estad2::getEnfermedad(){
	return enfermedad;
}

string Estad2::getSintomas(){
	return sintomas;
}

string Estad2::getNotas(){
	return notas;
}

string Estad2::getIndicaciones(){
	return indicaciones;
}

// Setters()
void Estad2::setNum(int n){
	num=n;
}

void Estad2::setNombre(string nom){
	nombre=nom;
}

void Estad2::setEnfermedad(string enfer){
	enfermedad=enfer;	
}

void Estad2::setSintomas(string sint){
	sintomas=sint;	
}

void Estad2::setNotas(string note){
	notas=note;
}

void Estad2::setIndicaciones(string indic){
	indicaciones=indic;
}