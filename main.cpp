// Biblioteca
#include <iostream>
using namespace std;

// Clases
#include "estad1.h"
#include "estad2.h"
#include "estad3.h"

/* 
 * Avance 1: Disease Staging
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 12/11/2020
*/

/* 
 * Descripción:
 * Disease Staging es un sistema de clasificación que utiliza hallazgos 
 * de diagnóstico para producir grupos de pacientes según la etiología, 
 * la fisiopatología y la gravedad de las manifestaciones fisiopatológicas
 * de la enfermedad.
 * De ahí que, con este progeama se busca ayudar a un Hospital X administrar
 * y capturar datos de sus pacientes diviéndolos de acuerdo a dichos estadíos
 * de la enfermedad: Estadío 1, Estadío 2, Estadío 3 y *Estadío 4.
 * En este caso, el Estadío 4: Defunción es omitido.
*/

int main(){
	// Creación de objetos por default para cada Estadío (1,2,3)
	Estad1 p1;
	Estad2 p2;
	Estad3 p3;
	
	// Información de cada paciente (Número, Nombre, Enfermerdad)
	cout << "Num. de paciente: " << p1.getNum() << endl << "Nombre: " << p1.getNombre() << endl << "Enfermedad: " << p1.getEnfermedad() << endl;	
	cout << "Num. de paciente: " << p2.getNum() << endl << "Nombre: " << p2.getNombre() << endl << "Enfermedad: " << p2.getEnfermedad() << endl;	
	cout << "Num. de paciente: " << p3.getNum() << endl << "Nombre: " << p3.getNombre() << endl << "Enfermedad: " << p3.getEnfermedad() << endl;
	
	// Modificación de objetos (p1)
	p1.setNum(75930);
	p1.setNombre("José de Ribera");
	p1.setEnfermedad("Etapa inicial de Linfoma no Hodgkin");
	p1.setSintomas("Inflamación de los ganglios linfáticos");
	p1.setNotas("Es necesario hacer pruebas para determinar la diseminación de la enfermedad");
	p1.setIndicaciones("Biopsias de ganglios linfáticos agrandados u otras áreas anormales");
	
	cout << endl;
	cout << "Num. de paciente: " << p1.getNum() << endl << "Nombre: " << p1.getNombre() << endl << "Enfermedad: " << p1.getEnfermedad() << endl;
	cout << "Síntomas: " << p1.getSintomas() << endl;
	cout << "Notas: " << p1.getNotas() << endl;
	cout << "Indicaciones: " << p1.getIndicaciones() << endl;
	
	return 0;
}

/* 
 * Consideraciones:
 * Las clases no varían mucho entre sí más que en la gravedad del paciente.
 * Por tanto, se vuelve necesario desarollar una clase principal donde se concentren
 * los métodos y atributos genéricos y donde también se encuentren como clases hijas
 * los tres estadíos del Disease Staging. Además, implementaré en avances siguientes
 * métodos para la modificación del expediente, ingreso y egreso del paciente,
 * cambio de estadío, etc. Asimismo, quisiera agregar más atributos al expediente y
 * determinar métodos (compotarmientos) específicos de cada estadío.
*/