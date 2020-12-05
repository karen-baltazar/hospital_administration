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
 * 4/12/2020
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
		// Declaración de variables de instancia
		string nombre;
		string a_paterno;
		string a_materno;	
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor default y parametrizado
		Individuo();
		Individuo(string n, string p, string m);
		
		// Métodos miembros de la clase
		
		// Getters()
		string getNombre();
		string getPaterno();
		string getMaterno();
		
		string printNombre();
};

/* 
 * Constructor por default
 * @param 
 * @return Objeto Individuo 
*/
Individuo::Individuo(){
	nombre = " ";
	a_paterno = " ";
	a_materno = " ";
}

/* 
 * Constructor parametrizado
 * @param string n: nombre del individuo, string p: apellido paterno, 
 * string m: apelldio materno
 * @return Objeto Individuo 
*/
Individuo::Individuo(string n, string p, string m){
	nombre = n;
	a_paterno = p;
	a_materno = m;
}

// Getters()

/* 
 * getter nombre
 * @param 
 * @return string: nombre del individuo 
*/
string Individuo::getNombre(){
	return nombre;
}

/* 
 * getter a_paterno
 * @param 
 * @return string: apellido paterno 
*/
string Individuo::getPaterno(){
	return a_paterno;
}

/* 
 * getter a_materno
 * @param 
 * @return string: apellido materno
*/
string Individuo::getMaterno(){
	return a_materno;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos del Individuo
*/
string Individuo::printNombre(){
	stringstream nm;
	nm << "Nombre: " << nombre << " " << a_paterno << " " << a_materno << "\n";
	return nm.str();
}

#endif // INDIVIDUO_H_