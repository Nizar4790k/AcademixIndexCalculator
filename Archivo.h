#pragma once
#include<fstream>
#include"Destacado.h"
#include"Estudiante.h"
using namespace std;
string leer_archivo(Estudiante &est,Destacado &dest,int& contador_est_nombre);

void crear_archivo(Estudiante &est,int&);