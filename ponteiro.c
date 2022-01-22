#include <stdio.h>
int main(){
  int a,b,c;
  int *p; /* *p armazena um endereço de memória) */
  p=&a;
  a=10;
  printf("Endereço de a: %p (%lld)\n", &a,(long long)&a); 
  printf("Valor armazenado em a: %d\n",a);
  printf("Endereço de p: %p (%lld)\n",&p,(long long)&p);
  printf("Valor armazenado em p: %p\n",p);
  printf("Valor onde p aponta: %d\n",*p);









  return 0;
}
