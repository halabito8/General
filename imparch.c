#include<stdio.h>
#include<string.h>

void imprimir(char cadena[50]);

int main(void){
  char string[50];
  puts("Que quiere imprimir en el archivo?");
  gets(string);
  imprimir(string);
}

void imprimir(char cadena[50]){
  /* IMPORTANTE: siempre mantener
  un fopen comentado para que compile*/
  FILE* arch;
  //arch=fopen("prueba.txt","wt");
  arch=fopen("prueba.txt","at");
  fputs(cadena,arch);
  fclose(arch);
}