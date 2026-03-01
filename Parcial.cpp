#include <iostream>
// Correr en online gbd para mas facilidad 
using namespace std;

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3] = {0}; 

   
    
    cout << "MATRIZ A: PRODUCTIVIDAD DE LOS DESARROLLADORES ===" << endl;
    cout << "A continuacion, ingrese los puntos por hora que cada desarrollador logra en cada proyecto.\n" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "--- Evaluando al Desarrollador " << (i + 1) << " ---" << endl;
        for (int j = 0; j < 3; j++) {
            
            cout << "¿Cuantos puntos/calificacion por hora produce en el Proyecto " << (j + 1) << "?: ";
            cin >> A[i][j];
        }
        cout << endl; 
    }

    cout << "=== MATRIZ B: HORAS REQUERIDAS POR PROYECTO ===" << endl;
    cout << "A continuacion, ingrese cuantas horas toma completar cada fase de los proyectos.\n" << endl;
    
    for (int j = 0; j < 3; j++) {
        cout << "--- Planificando el Proyecto " << (j + 1) << " ---" << endl;
        for (int k = 0; k < 3; k++) {
            
            cout << "¿Cuántas horas se necesitan para completar la Fase " << (k + 1) << "?: ";
            cin >> B[j][k];
        }
        cout << endl;
    }

    
    
    
    for (int i = 0; i < 3; i++) {           
        for (int k = 0; k < 3; k++) {       
            for (int j = 0; j < 3; j++) {   
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    
    
    
    cout << "MATRIZ C - PRODUCTIVIDAD TOTAL (Puntos por Desarrollador en cada Fase)" << endl;
    
    cout << "\t\tFase 1\tFase 2\tFase 3" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << " EL Desarrollador " << (i + 1) << ":\t";
        for (int k = 0; k < 3; k++) {
            cout << C[i][k] << "\t";
        }
        cout << endl;
    }

    return 0;
}
// Correr en online gbd para mas facilidad 