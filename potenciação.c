#include <stdio.h>
int main(){
  int base, potencia;
   double r= 1.0;
  printf("Digite a base numérica\n");
  scanf("%d",&base);
  printf("Digite a potência da base %d.\n",base);
  scanf("%d",&potencia);
  while(potencia !=0){
    r*=base;
    --potencia;
  }
  printf("O resultado  é de: %0.lf\n",r);
  return 0;
}


