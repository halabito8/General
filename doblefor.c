#include<stdio.h>

void Imprime(int arreglo[4][3]);

int main(void){
  int fila, columna, numero=0,arreglo[4][3];
  for(columna=0;columna<3;columna++){
    printf("Primer for, ciclo %i\n", columna);
    for(fila=0;fila<4;fila++){
      printf("Segundo for, ciclo %i\n",fila);
      arreglo[fila][columna]=numero++;
    }
    printf("\n");
  }
  Imprime(arreglo);
}

void Imprime(int arreglo[4][3]){
  int fila,columna;
  for(fila=0;fila<4;fila++){
    for(columna=0;columna<3;columna++){
      printf("|%i", arreglo[fila][columna]);
    }
    printf("|\n");
  }
}
