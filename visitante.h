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
 * 1/12/2020
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
		// Identificación
		string motivo;
		int hi, mi, hs, ms, dia, mes, anio;		
		
	// Declaración de métodos (comportamentos)
	public:
		//Constructor por default
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
		
		// Constructor parametrizado
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
string Visitante::getMotivo(){
	return motivo;
}

int Visitante::getHingreso(){
	return hi;
}

int Visitante::getMingreso(){
	return mi;
}

int Visitante::getHsalida(){
	return hs;
}

int Visitante::getMsalida(){
	return ms;
}

int Visitante::getDia(){
	return dia;
}

int Visitante::getMes(){
	return mes;
}

int Visitante::getAnio(){
	return anio;
}

// Setters()
void Visitante::setMotivo(string mot){
	motivo = mot;
}

void Visitante::setHingreso(int h_ingreso){
	hi = h_ingreso;
}

void Visitante::setMingreso(int m_ingreso){
	mi = m_ingreso;
}

void Visitante::setHsalida(int h_salida){
	hs = h_salida;
}

void Visitante::setMsalida(int m_salida){
	ms = m_salida;
}

void Visitante::setDia(int day){
	dia = day;
}

void Visitante::setMes(int month){
	mes = month;
}

void Visitante::setAnio(int year){
	anio = year;
}

string Visitante::printVisitante(){
	stringstream v;
	v << printNombre() << "Motivo: " << motivo << "\n";
	v << "Ingreso: " << hi << ":" << mi << "\nSalida: " << hs << ":" << ms << "\n";
	v << "Fecha: " << dia << "/" << mes << "/" << anio << "\n";
	return v.str();
}

#endif // VISITANTE_H