#include"Destacado.h"
#include"Archivo.h"
#include"Indices.h"
void mostrar_honores(Estudiante &est,Destacado &dest,int& contador_est_nombre){
    float indice_gral;
    indice_gral=get_indice_gral(est);

  
    
    if((indice_gral>=85)&&(indice_gral<=90)){
  
        cout<<"El estudiante "<<est.nombre[contador_est_nombre]<<" tendra el honor de CUM LAUDE"<<endl;
        dest.cum_laude+=est.nombre[contador_est_nombre];
        dest.cum_laude+="\n";
    
    }else if((indice_gral>=90)&&(indice_gral<=95)){
        
        cout<<"El estudiante "<<est.nombre[contador_est_nombre]<<" tendra el honor de MAGNA CUM-LAUDE"<<endl;
        dest.magna_cum_laude+=est.nombre[contador_est_nombre];
       dest.magna_cum_laude+="\n";
    
    }else  if(indice_gral>95){
               
        cout<<"Al estudiante "<<est.nombre[contador_est_nombre]<<" se le otorgara el honor academico SUMA CUM LAUDE"<<endl;
       dest.suma_cum_laude+=est.nombre[contador_est_nombre];
         dest.suma_cum_laude+="\n";
        
    }}
    


    
void mostrar_destacado(Estudiante &est,Destacado &dest){
    system("cls");
    system("clear");
 
    
 cout<<"Estudiantes CUM LAUDE"<<endl;
cout<<dest.cum_laude<<endl;


cout<<"Estudiantes MAGNA CUM LAUDE"<<endl;
cout<<dest.magna_cum_laude<<endl;
    
cout<<"Estudiantes SUMA_CUM LAUDE"<<endl;
cout<<dest.suma_cum_laude<<endl;
    
}

