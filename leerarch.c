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
  /*En el fgets hay que poner el numero maximo de caracteres que se quiere leer,
  hay que tener en cuenta que hay que hacer espacio para el caracter nulo, por eso se pone 
  el numero de caracteres menos 1*/
  cadena[strlen(cadena)-1]='\0';
  /*En Ubuntu por la forma en como estan hechos los archivos hay que borrar un caracter antes
  porque hay un caracter "invisible" para el salto de linea y el fgets lo lee como un caracter para imprimir*/
  fclose(archivo);
}