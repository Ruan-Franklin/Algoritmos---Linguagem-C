#include <stdio.h>
/*Um item é uma estrutura que possui um peso e um valor */
struct item{
  int peso;
  double valor;
  };
typedef struct item item;
double mochila(item itens[], int n, int cap){
  if(cap<0 || n==0) return 0;
  double c1=0;
  if(itens[n-1].peso<=cap) /*Verificando se o elemento cabe na mochila */
    c1=itens[n-1].valor+mochila(itens,n-1,cap-itens[n-1].peso);
  double c2=mochila(itens,n-1,cap);
  return c1>c2?c1:c2;   /*Retorna o valor do elemento na chamada recursiva */
  }

int main(){
  int i, n, cap;
  scanf("%d %d",&n,&cap); /*Lendo a quantidade de elementos e a capacidade máxima da mochila */
  item itens[n];  /*Array de itens */ 
  for(i=0 ; i<n ; ++i)
    scanf("%d %lf",&itens[i].peso,&itens[i].valor);
  printf("%lf\n",mochila(itens,n,cap)); 
  return 0;
  }


