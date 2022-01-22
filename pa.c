#include <stdio.h>
int main(){
  int i
  int a[5] /* Quando declaramos o array, declaramos uma área contínua de memória, essa área é liberada quando o escopo do programa é definido. */
  int *p;
  for(i=0 ; i<5 ; ++i){
    a[i]=i*2+3;}
  p=a; /* p é 0 porque é uma variável criada que aponta o início de memória da variável do array */
  for(i=0; i<5 ; ++i){
    printf("%d ",*p++);}
  printf("\n");
  return 0;
} 

