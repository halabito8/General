#include<stdio.h>

unsigned long int recursion(unsigned long int iteraciones);

int main(void){
  unsigned long int numero,resultado;
  printf("Que factorial quieres calcular (solo positivos)?\n");
  scanf("%lu",&numero);
  resultado=recursion(numero);
  printf("El numero es: %lu",resultado);
}

unsigned long int recursion(unsigned long int iteraciones){
  if(iteraciones==0)
    return 1;
  return iteraciones*(recursion(iteraciones-1));
}