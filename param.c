#include <stdio.h>
void troca(int *p1, int *p2){
  int aux=*p1;
  *p1=*p2;
  *p2=aux;
}
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b){
    troca(&a,&b);}
  else if(a>c){
    troca(&a,&c);}
  else if(b>c){
    troca(&b,&c);}
   
  printf("%d %d %d\n",a,b,c);
  return 0;
}

