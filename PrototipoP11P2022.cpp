#include <iostream>
using namespace std;
//Carlos Javier Sandoval Catalan, Carnet No. 9959-21-1324
//Se le asigna a N el valor de 3
#define N 3
int main()
{
    //Declaracion de vectores
    int m1[N][N] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int m2[N][N];
    //Declaracion de variables
    int x, y;
    //Ciclos para evaluar los datos de los vectores
    for(x=0; x < N; x++){
        for(y=0; y < N; y++){
    //If para asignar valores al nuevo vector
            if (m1[x][y]%2 == 0){
                m2[x][y] = 0;}
            else{
                m2[x][y] = 1;}
        }
    }
    //Impresion de los valores de m2 (posiciones especificas)
    cout << m2[0][0] <<", "<< m2[1][1]<<", "<< m2[2][2]<<endl;
}
