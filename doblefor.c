#include<stdio.h>

int main(void){
  int i, j;
  for(i=0;i<3;i++){
    printf("Primer for, ciclo %i\n", i);
    for(j=0;j<4;j++){
      printf("Segundo for, ciclo %i\n",j);
    }
    printf("\n");
  }
}
