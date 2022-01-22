#include<stdio.h>
int main(){
  int t;
  float msinicial,msfinal;
  printf("Digite a massa em g\n");
  scanf("%f",&msinicial);
  msfinal=msinicial;
  t=0;
  while(msfinal>=0){
    msfinal=msfinal/2;
    t=t+50;
  }
  printf("Massa inicial: %.2f gramas. \n",msinicial);
  printf("Massa final: %.2f gramas. \n",msfinal);
  printf("Tempo total: %d segundos. \n",t);
  return 0;}


