#include <stdio.h>
int f1(int n){
  if(n<=0) return 0;  
  return(n&1)+f1(n>>1);  /*Soma entre o resto de divisão e o resultado dessa divisão */
/*Esse código tem uma complexidade O(1).*/
/*É importante lembrar que as operações bit a bit estão na taxa de milisegundos de complexidade! */
}
int main(){
  int n,x;
  printf("Digite um valor para testar\n");
  scanf("%d",&n);
  x=f1(n);  
  printf("%d\n",x);    /*Imprime o valor da soma realizada na função recursiva */
  return 0;
}

