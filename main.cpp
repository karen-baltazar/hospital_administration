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
#include "hospital.h"

/* 
 * Avance 4: Registro de Hospital
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 4/12/2020
*/

/* 
 * Descripción:
 * Este programa fue desarrollado con la intención de llevar un registro
 * de los individuos que ingresan a un hospital para administrar
 * y capturar los datos de éstos dividiéndoles en tres categorías:
 * Pacientes, Visitantes y Médicos.
*/

// Función menu(): Imprime las opciones que existen en el programa
void menu(){
    cout << "\nMenú:\n";
    cout << "1. Mostrar visitantes. \n";
    cout << "2. Mostrar pacientes. \n";
    cout << "3. Mostrar médicos. \n";
    cout << "4. Agregar visistante. \n";
    cout << "5. Agregar paciente. \n";
    cout << "6. Agregar médico. \n";
    cout << "7. Actualizar datos de un visistante. \n";
    cout << "8. Actualizar datos de un paciente. \n";
    cout << "9. Actualizar datos de un médico. \n";
    cout << "10. Salir \n";
}

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	Hospital hospital;
	int opcion = 0;
	char c;
	
	// Variables de Individuo
	string t_n, t_m, t_p;
	
	// Variables de Visitante
	string t_mot;
	int t_hi, t_mi, t_hs, t_ms, t_dd, t_mm, t_aa, t_g;	
	
	// Variables de Paciente
	string t_r, t_note, t_ind, t_dir;
	int t_ID, t_celular;
	bool t_seg, t_cons, t_comp;
	
	// Variables de Medico
	string t_titulo, t_esp;
	int t_inicio, t_fin, t_exp;	
	
	while(1){
		menu();
		cout << "Introduce función a ejecutar: ";
		cin >> opcion;
		
		if(opcion == 1){
			cout << "\nVISITANTES\n";
			hospital.muestraVisitantes();		
		}

		else if(opcion == 2){
			cout << "\nPACIENTES\n";
			hospital.muestraPacientes();			
		}
		
		else if(opcion == 3){
			cout << "\nMEDICOS\n";
			hospital.muestraMedicos();			
		}
		
		else if(opcion == 4){
			cout << "\nCreación de Visitante.";
			cout << "\nIntroduce apellido materno del visistante: ";
			cin >> t_m;
			cout << "Introduce apellido paterno del visistante: ";
			cin >> t_p;
			cout << "Introduce nombre del visistante: ";
			getline(cin, t_n);
			cin.ignore();
			cout << "Introduce motivo de visita: ";	
			getline(cin, t_mot);
			cin.ignore();
			cout << "Introduce minuto de ingreso: ";
			cin >> t_mi;			
			cout << "Introduce hora de ingreso: ";
			cin >> t_hi;
			cout << "Introduce año de visita: ";
			cin >> t_aa;
			cout << "Introduce mes de visita: ";
			cin >> t_mm;
			cout << "Introduce día de visita: ";
			cin >> t_dd;
			hospital.agregaVisitante(t_n, t_p, t_m, t_mot, t_hi, t_mi, t_dd, t_mm, t_aa);
		}
		
		else if(opcion == 5){
			cout << "\nCreación de Paciente.";
			cout << "\nIntroduce apellido materno del paciente: ";
			cin >> t_m;
			cout << "Introduce apellido paterno del paciente: ";
			cin >> t_p;
			cout << "Introduce nombre del paciente: ";
			getline(cin, t_n);
			cin.ignore();
			cout << "Introduce razón de hospitalización del paciente: ";
			getline(cin, t_r);
			cin.ignore();
			cout << "Introduce notas sobre condición del paciente: ";
			getline(cin, t_note);
			cin.ignore();
			cout << "Introduce indicaciones sobre tratamiento del paciente: ";
			getline(cin, t_ind);
			cin.ignore();
			cout << "Introduce dirección del paciente: ";
			getline(cin, t_dir);
			cin.ignore();
			cout << "Introduce celular en caso de emergencias: ";
			cin >> t_celular;
			cout << "¿El paciente cuenta con seguro Médico? [Y/N] ";
			cin >> c;
			if(c == 'Y' || c == 'y')
				t_seg = true;
			else
				t_seg = false;
			cout << "¿El paciente acepta el Consetimiento de Tratamiento? [Y/N] ";
			cin >> c;
			if(c == 'Y' || c == 'y')
				t_cons = true;
			else
				t_cons = false;
			cout << "¿El paciente acepta el Compromiso de Pago? [Y/N] ";
			cin >> c;
			if(c == 'Y' || c == 'y')
				t_comp = true;
			else
				t_comp = false;
			hospital.agregaPaciente(t_n, t_p, t_m, t_r, t_note, t_ind, t_dir, t_celular, t_seg, t_cons, t_comp);			
		}
		
		else if(opcion == 6){
			cout <<"\nCreación de Médico.";
			cout << "\nIntroduce apellido materno del medico: ";
			cin >> t_m;
			cout << "Introduce apellido paterno del medico: ";
			cin >> t_p;
			cout << "Introduce nombre del medico: ";
			getline(cin, t_n);
			cin.ignore();
			cout << "Introduce título del medico: ";
			getline(cin, t_titulo);
			cin.ignore();
			cout << "Introduce especialidad del medico: ";
			getline(cin, t_esp);
			cin.ignore();
			cout << "Introduce experiencia en anios del medico: ";
			cin >> t_exp;
			cout << "Introduce hora de inicio de atencion del medico (sólo los primeros 2 dígitos): ";
			cin >> t_inicio;
			cout << "Introduce hora fin de atencion del medico (sólo los primeros 2 dígitos): ";
			cin >> t_fin;
			hospital.agregaMedico(t_n, t_p, t_m, t_titulo, t_esp, t_inicio, t_fin, t_exp);		
		}
		
		else if(opcion == 7){
			cout << "\nModificación de Visitante.\n";
			cout << "En construcción\n";				
		}
		
		else if(opcion == 8){
			cout << "\nModificación de Paciente.\n";
			cout << "En construcción\n";		
		}
		
		else if(opcion == 9){
			cout << "\nModificación de Médico.\n";
			cout << "En construcción\n";			
		}
		
		else if(opcion == 10){
			cout << "\nGracias por utilizar el programa. \n";
			break;		
		}
		
		else{
			cout << "\nError. Opción inválida. \n";
			break;
		}
	}
	return 0;
}