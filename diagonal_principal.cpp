//Imprimir solo la diagonal principal.
#include <iostream>
using namespace std;
void diagonal(int matriz[5][5], int filas, int columnas){
    for (int i = 0; i<filas; i++){
        cout << matriz[i][i] << "\t";
    }
    cout << endl;
}

int main(){
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int filas =5;
    int columnas =5;
    cout << "Diagonal principal:" << endl;
    diagonal(matriz, filas,columnas);
    return 0;
}