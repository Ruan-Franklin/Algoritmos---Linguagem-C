#include <stdio.h>
  int main(){
    int p1,p2,resto,candidato1,candidato2, i;
    printf("Digite dois números:\n");
    scanf("%d %d", &p1,&p2);
    for(i=1;i>0;i++){
	resto=(p1*i)%p2;
         if(resto==0){
	   break;}
      }
      if(resto==0){
	candidato1=p1*i;
	printf("O MMC entre os números  %d e %d é: %d\n",p1,p2,candidato1);}

      else{
	candidato2=p2*i;
	printf("O MMC entre os números %d e %d é: %d\n", p1,p2,candidato2);}



    return 0;
  }



