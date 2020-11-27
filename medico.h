// Biblioteca
#include <iostream>
#include "individuo.h"
#include <string>
#include <sstream>

using namespace std;

/* 
 * Título: medico.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 27/11/2020
*/

/* 
 * Descripción:
 * Clase Medico que es clase hija de Individuo.
 * Captura parcialmente comportmaiento y atributos
 * de un médico ejerciendo su profesión en un hospital.
*/

// Declaración de Clase: Medico
class Medico: public Individuo{
	// Declaración de atributos (características)
	private:
		// Identificación
		string nombre;
		string a_paterno;
		string a_materno;
		string titulo;
		string especialidad;
		string certificacion;
		int horario_inicio;
		int horario_fin;
		int experiencia;		
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructores
		Medico();
		Medico(string t, string e, string c, int i, int f, int ex);
		
		// Getters()
		string getTitulo();
		string getEspecialidad();
		string getCertificacion();
		int getHorarioInicio();
		int getHorarioFin();
		int getExperiencia();
		
		// Setters()
		void setTitulo(string);
		void setEspecialidad(string);
		void setCertificacion(string);
		void setHorarioInicio(int);
		void setHorarioFin(int);
		void setExperiencia(int);
		
		string printMedico1();
		string printMedico2();
};

// Constructor por default
Medico::Medico(){
	nombre = " ";
	a_paterno = " ";
	a_materno = " ";
	titulo = " ";
	especialidad = " ";
	certificacion = " ";
	horario_inicio = 0;
	horario_fin = 0;
	experiencia = 0;
}

// Constructor parametrizado
// Medico::Medico(string t, string e, string c, int i, int f, int ex){
	// titulo = t;
	// especialidad = e;
	// certificacion = c;
	// horario_inicio = i;
	// horario_fin = f;
	// experiencia = ex;
// }

// Getters()
string Medico::getTitulo(){
	return titulo;
}

string Medico::getEspecialidad(){
	return especialidad;
}

string Medico::getCertificacion(){
	return certificacion;
}

int Medico::getHorarioInicio(){
	return horario_inicio;
}

int Medico::getHorarioFin(){
	return horario_fin;
}

int Medico::getExperiencia(){
	return experiencia;
}

// Setters()
void Medico::setTitulo(string title){
	titulo = title;
}

void Medico::setEspecialidad(string esp){
	especialidad = esp;
}

void Medico::setCertificacion(string certf){
	certificacion = certf;
}

void Medico::setHorarioInicio(int hi){
	horario_inicio = hi;
}

void Medico::setHorarioFin(int hf){
	horario_fin = hf;
}

void Medico::setExperiencia(int exp){
	experiencia = exp;
}

string Medico::printMedico1(){
	stringstream med1;
	med1 << "Título: " << titulo << "\nEspecialidad: " << especialidad << "\nCertificación: " << certificacion << "\n";
	return med1.str();
}

string Medico::printMedico2(){
	stringstream med2;
	med2 << "Horario: " << horario_inicio << ":00 - " << horario_fin << ":00" << "\nExperiencia: " << experiencia << "años \n";
	return med2.str();
}