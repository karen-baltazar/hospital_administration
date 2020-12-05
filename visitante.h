#ifndef VISITANTE_H
#define VISITANTE_H

// Biblioteca
#include <iostream>
#include "individuo.h"
#include <string>
#include <sstream>

using namespace std;

/* 
 * Título: visitante.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 4/12/2020
*/

/* 
 * Descripción:
 * Clase Visitante que es clase hija de Individuo.
 * Captura parcialmente comportmaiento y atributos
 * de un visitante en hospital.
*/

// Declaración de Clase: Visitante
class Visitante: public Individuo{
	// Declaración de atributos (características)
	private:
		// Declaración de variables de instancia
		string motivo;
		int hi, mi, hs, ms, dia, mes, anio;		
		
	// Declaración de métodos (comportamentos)
	public:
		/* 
		 * Constructor por default
		 * @param 
		 * @return Objeto Visitante 
		*/
		Visitante(): Individuo(){
			motivo = " ";
			hi = 0;
			mi = 0;
			hs = 0;
			ms = 0;
			dia = 0;
			mes = 0;
			anio = 0;
		}
		
		/* 
		 * Constructor parametrizado
		 * @param string n: nombre, string p: apellido paterno, 
		 * string m: apellido materno, string mot: motivo de visita, 
		 * int ih: hora de ingreso, int im: minuto de ingreso,
		 * int dd: día de visita, int mm: mes de visita,
		 * int aa: año de visita
		 * @return Objeto Visitante
		*/
		Visitante(string n, string p, string m, string mot, int ih, int im, int dd, int mm, int aa): Individuo(n, p, m){
		motivo = mot;
		hi = ih;
		mi = im;
		hs = 0;
		ms = 0;
		dia = dd;
		mes = mm;
		anio = aa;
		}
		
		// Getters()	
		string getMotivo();
		int getHingreso();
		int getMingreso();
		int getHsalida();
		int getMsalida();
		int getDia();
		int getMes();
		int getAnio();
			
		// Setters()		
		void setMotivo(string);
		void setHingreso(int);
		void setMingreso(int);
		void setHsalida(int);
		void setMsalida(int);
		void setDia(int);
		void setMes(int);
		void setAnio(int);
		
		string printVisitante();
};

// Getters()

/* 
 * getter motivo
 * @param 
 * @return string: motivo de visita
*/
string Visitante::getMotivo(){
	return motivo;
}

/* 
 * getter hi
 * @param 
 * @return int: hora de ingreso
*/
int Visitante::getHingreso(){
	return hi;
}

/* 
 * getter mi
 * @param 
 * @return int: minuto de ingreso
*/
int Visitante::getMingreso(){
	return mi;
}

/* 
 * getter hs
 * @param 
 * @return int: hora de salida
*/
int Visitante::getHsalida(){
	return hs;
}

/* 
 * getter ms
 * @param 
 * @return int: minuto de salida
*/
int Visitante::getMsalida(){
	return ms;
}

/* 
 * getter dia
 * @param 
 * @return int: día de visita
*/
int Visitante::getDia(){
	return dia;
}

/* 
 * getter mes
 * @param 
 * @return int: mes de visita
*/
int Visitante::getMes(){
	return mes;
}

/* 
 * getter anio
 * @param 
 * @return int: año de visita
*/
int Visitante::getAnio(){
	return anio;
}

// Setters()

/* 
 * setter motivo
 * @param string: motivo de visita
 * @return
*/
void Visitante::setMotivo(string mot){
	motivo = mot;
}

/* 
 * setter h_ingreso
 * @param int: hora de ingreso
 * @return
*/
void Visitante::setHingreso(int h_ingreso){
	hi = h_ingreso;
}

/* 
 * setter m_ingreso
 * @param int: minuto de ingreso
 * @return
*/
void Visitante::setMingreso(int m_ingreso){
	mi = m_ingreso;
}

/* 
 * setter h_salida
 * @param int: hora de salida
 * @return
*/
void Visitante::setHsalida(int h_salida){
	hs = h_salida;
}

/* 
 * setter m_salida
 * @param int: minuto de salida
 * @return
*/
void Visitante::setMsalida(int m_salida){
	ms = m_salida;
}

/* 
 * setter dia
 * @param int: día de visita
 * @return
*/
void Visitante::setDia(int day){
	dia = day;
}

/* 
 * setter mes
 * @param int: mes de visita
 * @return
*/
void Visitante::setMes(int month){
	mes = month;
}

/* 
 * setter anio
 * @param int: año de visita
 * @return
*/
void Visitante::setAnio(int year){
	anio = year;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos de Visitante
*/
string Visitante::printVisitante(){
	stringstream v;
	v << printNombre() << "Motivo: " << motivo << "\n";
	v << "Ingreso: " << hi << ":" << mi << "\nSalida: " << hs << ":" << ms << "\n";
	v << "Fecha: " << dia << "/" << mes << "/" << anio << "\n";
	return v.str();
}

#endif // VISITANTE_H