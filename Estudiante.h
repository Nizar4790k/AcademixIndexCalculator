#pragma once

#include<string>
using namespace std;
struct Estudiante{
    
    string *Calificaciones_por_semestre;

    string *Cantidad_creditos_por_semestre;
    string ARCHIVO;
    string *nombre;
   
    
    
    
    //Las variables que estan repetidas, las que estan en mayuscula son arreglos dinamicos y las minusculas son acumuladores temporales.
    int cantidad_semestres;
    int *numero_materias;
    int *creditos_materias;
    int *TOTAL_CREDITOS;
    int *TOTAL_PRODUCTO; 
    
    float total_materias=0;
    float *calificaciones;
    float acumulador_producto=1;
    float total_creditos=0;
    float producto=1;
    float total_producto=0;
    float *INDICE_SEMESTRAL;
    
};