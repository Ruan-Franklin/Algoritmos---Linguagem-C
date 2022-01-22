#include <stdio.h>
long long primo(long long n){
  long long teste,contador=0;
  for(teste=1;teste<=n;teste++){
     if(n%teste==0){
       ++contador;
       }
  }

  if(contador>2){
    return 0;
  }
  if(contador==2){
    return 1;
  }
}

  

     
int main(){ 
  long long n;
  printf("Digite um numero.\n");
  scanf("%lld",&n); 
    if(primo(n)==1){
      printf("O número %lld é primo\n",n);}
    else if(primo(n)==0){
     printf("O número %lld não é primo\n",n);}
 


  return 0;
}




   
