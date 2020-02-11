#include<stdio.h>
#include<string.h>

void leer(char cadena[]);

int main(void){
  char texto[50];
  leer(texto);
  puts(texto);
}

void leer(char cadena[]){
  FILE *archivo;
  char nombre[50];
  printf("Como se llama el archivo que quieres leer?\n");
  gets(nombre);
  archivo=fopen(nombre,"rt");
  fgets(cadena,49,archivo);
  fclose(archivo);
}