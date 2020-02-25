#include"Ayudar main.h"
#include"Pedir Datos.h"
#include"Indices.h"
#include"Destacado.h"
#include"Archivo.h"



void mostrar_menu(Estudiante &est, Destacado &dest, int& contador_est_nombre) {
	cout << "Que desea hacer ?" << endl;
	cout << "a) Calcular Indice Academico Estudiantil " << endl;
	cout << "b) Leer  archivo " << endl;
	cout << "c) Mostrar estudiantes destacados" << endl;
	cout << "d) Salir" << endl;

	evaluar_opcion(est, dest, contador_est_nombre);
}

int evaluar_opcion(Estudiante &est, Destacado &dest, int& contador_est_nombre) {
	char opcion;
	cin >> opcion;

	opcion = toupper(opcion);
	cin.ignore();
	switch (opcion) {
	case'A':
		system("clear");
		system("cls");
		pedir_datos(est, contador_est_nombre);
		get_indice_semestral(est);
		mostrar_indice_semestral(est, contador_est_nombre);
		get_indice_gral(est);
		mostrar_indice_gral(est, contador_est_nombre);
		mostrar_honores(est, dest, contador_est_nombre);
		cin.get();
		cin.ignore();
		system("cls");
		system("clear");

		cout << "Desea guardar todos estos datos de entrada, los indices semestrales y el indice general [S/N]?" << endl;
		cin >> opcion;

		opcion = toupper(opcion);

		if (opcion == 'S') {
			crear_archivo(est, contador_est_nombre);
		}
		system("cls");
		system("clear");
		contador_est_nombre++;



		cout << "Presione ENTER para volver al menu principal " << endl;
		cin.get();
		cin.ignore();
		mostrar_menu(est, dest, contador_est_nombre);
		break;

	case'B':
		cout << leer_archivo(est, dest, contador_est_nombre);

		cout << "Presione ENTER para volver al menu principal " << endl;
		cin.get();
		cin.ignore();
		mostrar_menu(est, dest, contador_est_nombre);


		break;



	case'C':
		if (contador_est_nombre != 0) {
			mostrar_destacado(est, dest);
			cout << "\n\n";
			cout << "Presione ENTER para regresar al menu" << endl;
			cin.get();
			cin.ignore();
			mostrar_menu(est, dest, contador_est_nombre);


		}
		else {
			cout << "No ha registrado ningun estudiante hasta el momento" << endl;
			cout << "\n";
			cout << "Pulse ENTER para regresar al menu principal" << endl;
			cin.get();
			cin.ignore();
			mostrar_menu(est, dest, contador_est_nombre);
		}

		break;


	case 'D':

		return 0;
	default: 
		cout << "Ha elegido la opcion incorrecta" << endl;
		system("cls");
		mostrar_menu(est, dest, contador_est_nombre);
	}
}
