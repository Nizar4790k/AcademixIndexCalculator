#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Archivo.h"
#include "Ayudar main.h"
#include "Indices.h"

#include"Destacado.h"
using namespace std;

void crear_archivo(Estudiante &est, int& contador_est_nombre) {

	ofstream archivo;
	archivo.open("Estudiante.txt", ios::app);


	if (archivo.fail()) {
		cout << "Error inesperado " << endl;
		cout << "Pulse Enter para volver al menu " << endl;
		cin.get();
		cin.ignore();

	}

	// archivo<<"\r\n"; Innecesario agregar al principio
	archivo << "NOMBRE DEL ESTUDIANTE:" << est.nombre[contador_est_nombre] << "\n";

	for (int i = 0; i < est.cantidad_semestres; i++) {
		archivo << "Calificaciones correspondientes al semestre --->" << "[" << i + 1 << "]\n";
		archivo << est.Calificaciones_por_semestre[i];
		archivo << "Total de creditos correspondiente al semestre [" << i + 1 << "]----->" << est.TOTAL_CREDITOS[i];
		archivo << "\n";
	}
	archivo << "INDICE GENERAL------>" << get_indice_gral(est) << "\n";



	archivo.close();
}

string leer_archivo(Estudiante &est, Destacado &dest, int& contador_est_nombre) {
	string mensaje = "";
	ifstream archivo;
	archivo.open("Estudiante.txt", ios::in);

	if (!archivo.fail())
	{
		string linea;
		while (getline(archivo, linea))
		{
			mensaje.append(linea + '\n'); // equivale a mensaje += linea;
		}

	}
	else
	{
		mensaje = "El archivo que esta intentando leer esta daniado o no existe. \n";
	}

	archivo.close();

	return mensaje;

}