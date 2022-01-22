#include <stdio.h>
int main(){
 int n,cont=0;
 int i;
 printf("Digite um numero.\n");
 scanf("%d",&n);
 for(i=1; i<=n; i++){		       
    if(n%i==0){
      cont++;}	
    printf("O teste: %d\n",cont);

        }
 if(cont==2){
   printf("O número %d é primo!\n",n);
 }
 
 return 0;

 }
