// Biblioteca
#include <iostream>
#include <locale.h>
using namespace std;

// Clases
#include "individuo.h"
#include "medico.h"
#include "visitante.h"
#include "paciente.h"
#include "expediente.h"

/* 
 * Avance 3: Registro de Hospital
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 27/11/2020
*/

/* 
 * Descripción:
 * Este programa fue desarrollado con la intención de llevar un registro
 * de los individuos que ingresan a un hospital par ayudar a administrar
 * y capturar los datos de éstos dividiéndoles en tres categorías:
 * Pacientes, Visitantes y Médicos.
*/

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	// Creación de objetos: Paciente, Visistante, Médico
	Paciente p;
	Visitante v;
	Medico m;
	
	// Información de objetos por default:
	cout << "\nOBJETOS DEFAULT\n";
	cout << "\nPaciente: \n" << p.printPaciente();
	cout << "\nVisistante: \n" << v.printVisitante1();
	cout << v.printVisitante2();
	cout << "\n\nMédico: \n" << m.printMedico1();
	cout << m.printMedico2();
	
	// Modificación de objetos: setters()
	p.setRazon("Cáncer colorrectal - Distante");
	p.setNotas("Es necesario hacer pruebas para determinar la diseminación de la enfermedad");
	p.setIndicaciones("Biopsias de ganglios linfáticos agrandados u otras áreas anormales");
	p.setID(678);
	
	v.setMotivo("Visista a Luis Carlos Trujillo");
	v.setHingreso(13);
	v.setMingreso(56);
	v.setHsalida(16);
	v.setMsalida(45);
	v.setDia(27);
	v.setMes(11);
	v.setAnio(2020);
	v.setGafete(8);
	v.entregaGafete("Sí");

	m.setTitulo("Anestesiólogo");
	m.setEspecialidad("Anestesiología");
	m.setCertificacion("Ninguna");
	m.setHorarioInicio(8);
	m.setHorarioFin(17);
	m.setExperiencia(6);
	
	// Información de objetos modificados: getters() y métodos(comportamientos)
	cout << "\nOBJETOS MODIFICADOS\n";
	cout << "\nPaciente (MÉTODO): \n" << p.printPaciente() << "\n"; // Método
	cout << "\nPaciente (GETTERS): \n" <<  "Razón: " << p.getRazon() << "\nNotas: " << p.getNotas() << "\nIndicaciones: " << p.getIndicaciones() << "\nID: " << p.getID() << "\n"; // Getters()
	
	cout << "\nVisistante (MÉTODO): \n" << v.printVisitante1(); // Método
	cout << v.printVisitante2() << "\n";
	cout << "\nVisistante (GETTERS): \nMotivo: " << v.getMotivo() << "\nIngreso: " << v.getHingreso() << ":" << v.getMingreso() << "\n"; // Getters()
	cout << "Salida: " << v.getHsalida() << ":" << v.getMsalida() << "\n";
	cout << "Fecha: " << v.getDia() << "/" << v.getMes() << "/" << v.getAnio() << "\n";

	cout << "\n\nMédico (MÉTODO): \n" << m.printMedico1(); // Método
	cout << m.printMedico2();
	cout << "\n\nMédico (GETTERS): \nTítulo: " << m.getTitulo() << "\nEspecialidad: " << m.getEspecialidad() << "\nCertificación: " << m.getEspecialidad() << "\n"; // Getters()
	cout << "Horario: " << m.getHorarioInicio() << ":00 - " << m.getHorarioFin() << ":00 \nExperiencia: " << m.getExperiencia() << "años\n";

	return 0;
}

/* 
 * Consideraciones:
 * A pesar de que Paciente, Visistante y Medico son clases hija de Individuo, no tiene acceso
 * a los atributos de éste, por lo que se debe revisar el código a fondo.
 * Para la siguiente entrega, se agregarán construcores parametrizados y es posible
 * que los getters() de las clases construidas sean eliminadas, siendo los printClase()
 * su equivalente para mostrar los objetos de estas Clases en pantalla.
 * Asimismo, correcciones se deben hacer en el Diagrama de Clases, crear ejemplos y en el
 * main1.cpp integrar aún muchas cosas para interactuar con las funciones y clases construidas 
 * con mayor libertad.
*/