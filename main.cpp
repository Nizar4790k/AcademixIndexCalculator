#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Estudiante.h"
#include "Destacado.h"
#include "Ayudar main.h"
using namespace std;


int main(int argc, char *argv[]) {
    int cont_est_nombre=0;;  //Contador para los nombres;
    
    Destacado dest;
    Estudiante est;
    cout << "Bienvenido a la calculadora de indice academico estudiantil  XYZ" << endl;
    cout<<"\n\n";
	mostrar_menu(est,dest,cont_est_nombre);



    return 0;
}






