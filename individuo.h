#ifndef INDIVIDUO_H
#define INDIVIDUO_H

// Biblioteca
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/* 
 * Título: individuo.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 1/12/2020
*/

/* 
 * Descripción:
 * Clase Individuo que contiene los métodos genéricos
 * para el manejo de individuos que ingresan a un hospital;
 * tiene 3 clases hijas especializadas en:
 * Paciente, Visitante y Medico
*/

// Declaración de Clase: Individuo
class Individuo{
	// Declaración de atributos (características)
	protected:
		// Identificación
		string nombre;
		string a_paterno;
		string a_materno;	
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructores
		Individuo();
		Individuo(string n, string p, string m);
		
		// Getters()
		string getNombre();
		string getPaterno();
		string getMaterno();
		
		// Setters()
		void setNombre(string);
		void setPaterno(string);
		void setMaterno(string);

		string printNombre();
};

// Constructor por default
Individuo::Individuo(){
	nombre = " ";
	a_paterno = " ";
	a_materno = " ";
}

// Constructor parametrizado
Individuo::Individuo(string n, string p, string m){
	nombre = n;
	a_paterno = p;
	a_materno = m;
}

// Getters()
string Individuo::getNombre(){
	return nombre;
}

string Individuo::getPaterno(){
	return a_paterno;
}

string Individuo::getMaterno(){
	return a_materno;
}

// Setters()
void Individuo::setNombre(string nom){
	nombre = nom;
}

void Individuo::setPaterno(string paterno){
	a_paterno = paterno;	
}

void Individuo::setMaterno(string materno){
	a_materno = materno;	
}

string Individuo::printNombre(){
	stringstream nm;
	nm << "Nombre: " << nombre << " " << a_paterno << " " << a_materno << "\n";
	return nm.str();
}

#endif // INDIVIDUO_H_