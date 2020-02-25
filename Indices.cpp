#include"Indices.h"

float get_indice_semestral(Estudiante &est) {
 est.INDICE_SEMESTRAL= new float[est.cantidad_semestres];

    for (int i = 0; i < est.cantidad_semestres; i++) {
       *(est.INDICE_SEMESTRAL+i) = *(est.TOTAL_PRODUCTO + i) / *(est.TOTAL_CREDITOS + i);
      
    }
 
 return *(est.INDICE_SEMESTRAL);
  }

void mostrar_indice_semestral(Estudiante &est,int& contador_est_nombre){
    for(int i=0;i<est.cantidad_semestres;i++)
    {
        cout<<"El indice correspondiente al semestre "<<i+1<<"es de "<<*(est.INDICE_SEMESTRAL+i)<<" ptos"<<endl;
    
        if(*(est.INDICE_SEMESTRAL+i)>=85){
            cout<<"El estudiante "<<est.nombre[contador_est_nombre]<<"es meritorio en el semestre "<<i+1<<endl;
        }}}


float get_indice_gral(Estudiante &est){
    float indice_gral=1,sumatoria_indice_semestral=0;

    for(int i=0;i<est.cantidad_semestres;i++){
        sumatoria_indice_semestral+=*(est.INDICE_SEMESTRAL+i);
    }
    indice_gral=sumatoria_indice_semestral/est.cantidad_semestres;
    
   
   
   return indice_gral;
}


void mostrar_indice_gral(Estudiante &est,int& contador_est_nombre){
    float indice_general;
    indice_general= get_indice_gral(est);
    cout<<"El estudiante "<<est.nombre[contador_est_nombre]<<" Obtuvo un indice general de "<<indice_general<<" puntos"<<endl;
}