/* Quantas soluções existem?*/
#include <stdio.h>
#include <stdlib.h>
int soma_sublista_bt(int a[], int tam, int soma){
  if(soma==0) return 1; /* Aceita */
  if(soma<0) return 0; /* Rejeita */
  int r1=soma_sublista_bt(a,tam-1,soma-a[tam-1]);
  int r2=soma_sublista_bt(a,tam-1,soma);
  return r1+r2;
  }

int main(){
  int n,s,i;
  scanf("%d",&n,&s);
  int a[n];
  for(i=0 ; i<n ; ++i) scanf("%d",&a[i]);
  printf("%d\n",soma_sublista_bt(a,n,s));
  return 0;
  }
