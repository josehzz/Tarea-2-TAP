/*
Tarea 2
Jose Hernandez
Luis Caceres
*/

#include <iostream>

using namespace std;

int main(){
    int *numeros; //Arreglo de numeros
    int N, operaciones;

    char tipo; //Tipo de operacion
    int J, K; //Numeros de entrada de la operacion

    int resultado; //Resultado de la operacion

    cin >> N >> operaciones; //Entrada de tamaño del arreglo y cantidad de operaciones a realizar

    numeros = new int[N]; //Reservar memoria e inicializar arreglo
    for(int i = 0; i < N; i++) numeros[i] = 1;

    //Cada vez que entra se hace la comparacion y luego la resta
    while(operaciones--){ //Mientras operaciones sea != 0
        cin >> tipo >> J >> K; //Entrada de datos

        if(tipo == 'c'){
            numeros[J -1] = K;
        }
        else if(tipo == '?'){
            resultado = 1; //Inicializar resultado
            for(int i = J -1; i < K; i++){ //Recorrer arreglo
                resultado *= numeros[i]; //Multiplicar posiciones
            }

            //Chequear si el numero es igual, mayor o menor a 0 y mostrar resultado
            cout << ((resultado == 0) ? "0" : ((resultado > 0) ? "+" : "-")) <<endl;
        }
    }
}
