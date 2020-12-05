#ifndef HOSPITAL_H
#define HOSPITAL_H

// Biblioteca
#include <iostream>
#include <string>
#include <sstream>
#include "visitante.h"
#include "paciente.h"
#include "medico.h"
using namespace std;

/* 
 * Título: individuo.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 4/12/2020
*/

/* 
 * Descripción:
 * Clase Hospital compuesta por Individuos:
 * Visistante, Paciente y Medico.
*/

// Declaración de Clase:Hospital
class Hospital{
	// Declaración de atributos (características)
	private:
		// Declaración de variables de instancia
		Visitante visitantes[100];
		Paciente pacientes[100];
		Medico medicos[100];
		int iv,ip, im;		
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor
		Hospital();
		
		// Métodos miembros de la clase
		void agregaVisitante(string n, string p, string m, string mot, int ih, int im, int dd, int mm, int aa);
		void agregaPaciente(string n, string p, string m, string r, string nt, string i, string d, int c, bool s, bool cn, bool cm);
		void agregaMedico(string n, string p, string m, string t, string e, int i, int f, int ex);
		void muestraVisitantes();
		void muestraPacientes();
		void muestraMedicos();		
};

/* 
 * Constructor por default
 * @param 
 * @return Objeto Hospital 
*/
Hospital::Hospital(){
	iv = 0;
	ip = 0;
	im = 0;
};

/* 
 * Utiliza arreglo de visitantes y su último índice.
 * Recibe parámetros para la creación de un objeto Visitante,
 * el cual se agrega al arreglo.
 * @param 
 * @return 
*/
void Hospital::agregaVisitante(string n, string p, string m, string mot, int ih, int im, int dd, int mm, int aa){
	Visitante x(n, p, m, mot, ih, im, dd, mm, aa);
	visitantes[iv] = x;
	iv += 1;	
}

/* 
 * Utiliza arreglo de pacientes y su último índice.
 * Recibe parámetros para la creación de un objeto Paciente,
 * el cual se agrega al arreglo.
 * @param 
 * @return 
*/
void Hospital::agregaPaciente(string n, string p, string m, string r, string nt, string i, string d, int c, bool s, bool cn, bool cm){
	Paciente y(n, p, m, r, nt, i, d, c, s, cn, cm);
	pacientes[ip] = y;
	ip += 1;	
}

/* 
 * Utiliza arreglo de medicos y su último índice.
 * Recibe parámetros para la creación de un objeto Medico,
 * el cual se agrega al arreglo.
 * @param 
 * @return 
*/
void Hospital::agregaMedico(string n, string p, string m, string t, string e, int i, int f, int ex){
	Medico z(n, p, m, t, e, i, f, ex);
	medicos[im] = z;
	im += 1;	
}

/* 
 * Utiliza método printVisitante() de la clase Visistante
 * para mostrar la información de cada objeto en el arreglo.
 * @param 
 * @return 
*/
void Hospital::muestraVisitantes(){
	for (int i = 0; i < iv; i++)
		cout << visitantes[i].printVisitante() << "\n";		
}

/* 
 * Utiliza método printPaciente() de la clase Paciente
 * para mostrar la información de cada objeto en el arreglo.
 * @param 
 * @return 
*/
void Hospital::muestraPacientes(){
	for (int i = 0; i < ip; i++)
		cout << pacientes[i].printPaciente() << "\n";			
}

/* 
 * Utiliza método printMedico() de la clase Medico
 * para mostrar la información de cada objeto en el arreglo.
 * @param 
 * @return 
*/
void Hospital::muestraMedicos(){
	for (int i = 0; i < im; i++)
		cout << medicos[i].printMedico() << "\n";		
}

#endif // HOSPITAL_H