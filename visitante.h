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
 * 27/11/2020
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
		string nombre;
		string a_paterno;
		string a_materno;
		string motivo;
		int h_ingreso;
		int m_ingreso;
		int h_salida;
		int m_salida;
		int dia;
		int mes;
		int anio;
		int gafete;
		bool entrega;
		
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructores
		Visitante();
		Visitante(string m, int hi, int mi, int hs, int ms, int d, int mm, int a, int g);
		
		// Getters()	
		string getMotivo();
		int getHingreso();
		int getMingreso();
		int getHsalida();
		int getMsalida();
		int getDia();
		int getMes();
		int getAnio();
		int getGafete();
		bool getEntrega();
		
		// Setters()		
		void setMotivo(string);
		void setHingreso(int);
		void setMingreso(int);
		void setHsalida(int);
		void setMsalida(int);
		void setDia(int);
		void setMes(int);
		void setAnio(int);
		void setGafete(int);
		
		void entregaGafete(string);
		string printVisitante1();
		string printVisitante2();
};

// Constructor por default
Visitante::Visitante(){
	nombre = " ";
	a_paterno = " ";
	a_materno = " ";
	motivo = " ";
	h_ingreso = 0;
	m_ingreso = 0;
	h_salida = 0;
	m_salida = 0;
	dia = 0;
	mes = 0;
	anio = 0;
	gafete = 0;
	entrega = false;
}

// Constructor parametrizado
// Visitante::Visitante(string m, int hi, int mi, int hs, int ms, int d, int mm, int a, int g){
	// motivo = m;
	// h_ingreso = hi;
	// m_ingreso = mi;
	// h_salida = hs;
	// m_salida = ms;
	// dia = d;
	// mes = mm;
	// anio = a;
	// gafete = g;
	// entrega = false;
// }

// Getters()
string Visitante::getMotivo(){
	return motivo;
}

int Visitante::getHingreso(){
	return h_ingreso;
}

int Visitante::getMingreso(){
	return m_ingreso;
}

int Visitante::getHsalida(){
	return h_salida;
}

int Visitante::getMsalida(){
	return m_salida;
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

int Visitante::getGafete(){
	return gafete;
}

bool Visitante::getEntrega(){
	return entrega;
}

// Setters()
void Visitante::setMotivo(string mot){
	motivo = mot;
}

void Visitante::setHingreso(int hing){
	h_ingreso = hing;
}

void Visitante::setMingreso(int ming){
	m_ingreso = ming;
}

void Visitante::setHsalida(int hsal){
	h_salida = hsal;
}

void Visitante::setMsalida(int msal){
	m_salida = msal;
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

void Visitante::setGafete(int gaf){
	gafete = gaf;
}

void Visitante::entregaGafete(string res){
	if (res == "Sí")
		entrega=true;
}

string Visitante::printVisitante1(){
	stringstream vi1;
	vi1 << "Ingreso: " << h_ingreso << ":" << m_ingreso << "\nSalida: " << h_salida << ":" << m_salida << "\n";
	return vi1.str();
}

string Visitante::printVisitante2(){
	stringstream vi2;
	if (entrega== true)
		vi2 << "Motivo: " << motivo << "\nFecha: " << dia << "/" << mes << "/" << anio << "\nGafete: " << gafete << "\nEntrega: Sí";
	else
		vi2 << "Motivo: " << motivo << "\nFecha: " << dia << "/" << mes << "/" << anio << "\nGafete: " << gafete << "\nEntrega: No";
	return vi2.str();
}