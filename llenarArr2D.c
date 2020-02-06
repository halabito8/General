#include<stdio.h>

void menu(); //Funcion para tener un menu y no llenar el main
void llenarfilas(int arreglo[5][5]);//Funcion que recibe el arreglo y solo llena filas en columna 0
void llenarcolumnas(int arreglo[5][5]);//Funcion que recibe el arreglo y solo llena columnas en fila 0
void llenardiagonal(int arreglo[5][5]);
void Imprime(int arreglo[5][5]);//Funcion que imprime el arreglo

int main(void){
  int columna, fila, opcion;
  int arreglo[5][5];
  for(fila=0;fila<5;fila++){//Doble for para llenar el arreglo de ceros
    for(columna=0;columna<5;columna++)
      arreglo[fila][columna]=0;
  }
  do{//Do-while para repetir el menu en caso de que se escoja una opcion no deseada
    menu();
    scanf(" %i",&opcion);
  }while(opcion<1||opcion>3);
  if(opcion==1)
    llenarfilas(arreglo);
  else if(opcion==2)
    llenarcolumnas(arreglo);
  else
    llenardiagonal(arreglo);
  Imprime(arreglo);
}

void menu(void){
  printf("1.- Para llenar solo filas\n2.- Para llenar solo columnas\n3.- Llenar en diagonal\n");
}

void llenarfilas(int arreglo[5][5]){
  int filas, numero;
  for(filas=0;filas<5;filas++){
    printf("Numero para poner en la fila %i columna 0?\n",filas);
    scanf(" %i",&numero);
    arreglo[filas][0]=numero;
    /*Solo va a llenar en las filas porque
    la variable donde van las filas (primer corchete) se va aumentando la posicion con el for
    mientras que la posicion de las columnas (segundo corchete) esta estatico en 0*/
  }
}

void llenarcolumnas(int arreglo[5][5]){
  int columnas, numero;
  for(columnas=0;columnas<5;columnas++){
    printf("Numero para poner en la fila 0 columna %i?\n",columnas);
    scanf(" %i",&numero);
    arreglo[0][columnas]=numero;
    /*Solo va a llenar en las columnas porque
    la variable donde van las filas (primer corchete) esta estatico en 0
    mientras que la posicion de las columnas (segundo corchete) se va aumentando la posicion con el for*/
  }
}

void llenardiagonal(int arreglo[5][5]){
  int i,numero;
  for(i=0;i<5;i++){
    printf("Numero para poner en la fila %i columna %i?\n",i,i);
    scanf(" %i",&numero);
    arreglo[i][i]=numero;
  }
}

void Imprime(int arreglo[5][5]){
  int fila,columna;
  for(fila=0;fila<5;fila++){
    for(columna=0;columna<5;columna++){
      printf("|%i", arreglo[fila][columna]);
    }
    printf("|\n");
  }
}