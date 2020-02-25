
#pragma once
#include<iostream>
#include<string>
#include"Estudiante.h"
using namespace std;
struct Destacado {
    string cum_laude;
    string magna_cum_laude;
    string suma_cum_laude;
    
    int contador_cum=0;
    int contador_magna=0;
    int contador_suma=0;
    
};


void mostrar_honores(Estudiante &est,Destacado &dest,int&);

void mostrar_destacado(Estudiante &est, Destacado &dest);