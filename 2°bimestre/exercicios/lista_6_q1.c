#include <stdio.h>
/*Função recursiva para contar quantas vezes um digito aparece */
int ocorrencia(int n,int dig){
    int resto, quantidade;
    quantidade=0;
    if(n<0){
      return 0;
    }
    while(n>0)
    {
        resto=n%10;
        if(resto==dig){
            quantidade++;}
        n/=10;
    }    
    return quantidade;
}
  /*Função main */
int main()
{
    int n, digito, quantidade;
  
    printf("Digite um número:  ");
    scanf("%d",&n);
    printf("Digite um número que deseja procurar:  ");
    scanf("%d",&digito);
    quantidade=ocorrencia(n,digito); 
    printf("O   algarismo %d ocorre %d vezes no número %d.\n",digito,quantidade,n);
    
    return 0;
}