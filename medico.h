#ifndef MEDICO_H
#define MEDICO_H


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
 * 1/12/2020
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
		string titulo, especialidad;
		int h_inicio, h_fin, experiencia;		
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor por default
		Medico(): Individuo(){
			titulo = " ";
			especialidad = " ";
			h_inicio = 0;
			h_fin = 0;
			experiencia = 0;		
		}
		
		// Constructor parametrizado
		Medico(string n, string p, string m, string t, string e, int i, int f, int ex): Individuo(n, p, m){
			titulo = t;
			especialidad = e;
			h_inicio = i;
			h_fin = f;
			experiencia = ex;			
		}
		
		// Getters()
		string getTitulo();
		string getEspecialidad();
		int getHorarioInicio();
		int getHorarioFin();
		int getExperiencia();
		
		// Setters()
		void setTitulo(string);
		void setEspecialidad(string);
		void setHorarioInicio(int);
		void setHorarioFin(int);
		void setExperiencia(int);
		
		string printMedico();
};

// Getters()
string Medico::getTitulo(){
	return titulo;
}

string Medico::getEspecialidad(){
	return especialidad;
}

int Medico::getHorarioInicio(){
	return h_inicio;
}

int Medico::getHorarioFin(){
	return h_fin;
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

void Medico::setHorarioInicio(int hi){
	h_inicio = hi;
}

void Medico::setHorarioFin(int hf){
	h_fin = hf;
}

void Medico::setExperiencia(int exp){
	experiencia = exp;
}

string Medico::printMedico(){
	stringstream m;
	m << printNombre() << "Título: " << titulo << "\n";
	m << "Especialidad: " << especialidad << "\n";
	m << "Horario: " << h_inicio << ":00 - " << h_fin << ":00" << "\nExperiencia: " << experiencia << " años \n";
	return m.str();
}

#endif // MEDICO_H