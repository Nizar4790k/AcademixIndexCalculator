#include<string>
#include"Pedir Datos.h"
#include"Estudiante.h"


const int a = 1;
const int b =999;

void pedir_datos(Estudiante &est,int &contador_est_nombre) {
    
    est.nombre= new string[b];
    

    
    cout << "Digite su nombre completo" << endl;
    getline(cin, est.nombre[contador_est_nombre]);
    system("cls");
    system("clear");
    
   
    cout << "Digite la cantidad de semestres que ha cursado" << endl;
    cin >> est.cantidad_semestres;
    system("cls");
    system("clear");
    
    
    est.numero_materias = new int [est.cantidad_semestres];
    est.TOTAL_CREDITOS = new int[est.cantidad_semestres];
    est.TOTAL_PRODUCTO = new int [est.cantidad_semestres];
    pedir_calificaciones(est,contador_est_nombre);

}

void pedir_calificaciones(Estudiante &est,int& contador_est_nombre) {
    string a,c,d,e;    // variables numericas convertidas a string
   
    est.Calificaciones_por_semestre= new string[b];
    est.Cantidad_creditos_por_semestre= new string [b];
    for (int i = 0; i < est.cantidad_semestres; i++) {


        cout << "Digite cuantas materias escogio el semestre " << i + 1 << endl; /// Para capturar la cantidad de materias que escogio en cada semestre
        cin>>*(est.numero_materias + i);
        est.total_materias+=*(est.numero_materias);
         system("cls");
        system("clear");
        
        
        est.calificaciones = new float[(*est.numero_materias + i)];
        est.creditos_materias = new int [(*est.numero_materias + i)];
        to_string(i+1);
        a= to_string(i+1);
                                       // para guardarse en un archivo de ser necesario
        
     cout << "\n Digite las calificaciones correspondientes al semestre" << i + 1 << endl;
     cout<<"\n";
        
      
     
        for (int j = 0; j<*(est.numero_materias + i); j++) {
          
            
           cout << "Digite la calificacion  de la materia numero " << j + 1 << endl;
            cin>>*(est.calificaciones + j);
            to_string(*(est.calificaciones+j));
            c=to_string(*(est.calificaciones+j));
           
            
            
            
            cout << "Digite la cantidad de creditos de la materia numero " << j + 1 << endl;
            cin>>*(est.creditos_materias + j);
            to_string(*(est.creditos_materias));
            d= to_string(*(est.creditos_materias));
            
            est.Calificaciones_por_semestre[i]+="["+c +" , "+ d +"]";
            est.Calificaciones_por_semestre[i]+="\r\n";
            
            
            
            
            est.total_creditos += *(est.creditos_materias + j);
            est.producto = est.calificaciones[j] * est.creditos_materias[j];
            est.total_producto += est.producto;
            

        }
       
         e=to_string(est.total_creditos);
         est.Cantidad_creditos_por_semestre[i]+=e;
         est.Cantidad_creditos_por_semestre[i]="\r\n";


        *(est.TOTAL_CREDITOS + i) = est.total_creditos;
        *(est.TOTAL_PRODUCTO + i) = est.total_producto;
        est.total_creditos=0,est.producto=1,est.total_producto=0;
        system("clear");
        }
}