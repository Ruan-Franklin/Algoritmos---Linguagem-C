#include <stdio.h>
int main(){
  int somador[100],i,j,tamanho,ref,soma=0;
  printf("Digite o tamanho do array\n");
  scanf("%d",&tamanho);
  printf("Digite os números do array\n");
  for(i=0;i<tamanho;i++){
     scanf("%d",&somador[i]); }				    
  printf("Digite um valor, para verificar se uma soma de dois elementos do array podem formar esse número.\n");
  scanf("%d",&ref);				   
  for(i=0;i<tamanho;i++){
     for(j=i+1;j<tamanho;j++){     	                                                                               soma=somador[i]+somador[j];		
	if(soma==ref){										
	  printf("Com a soma dos valores presentes nos índices [%d e %d] é possível formar o número %d \n",i,j,ref); } 
        }  }
    if(soma<ref){
    printf("Não foi possível formar o número %d por meio da soma de dois elementos no array.\n",ref);}
  return 0;

}


