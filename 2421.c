#include <stdio.h>
int main() {
  int lf1, af1, lf2, af2;//Altura e largura das 2 fotos
  int lp, ap;//Tamanho da pagina -lp= largura, ap=altura
  scanf("%d%d%d%d",&lf1, &af1, &lf2, &af2);
  scanf("%d%d",&lp,&ap);
  if(   (ap<=lf1+af2)&&(lp<=af1 && lp<=lf2)){
    printf("S\n");}
  else if((ap<=lf1+lf2)&&(lp<=af1 && lp<=af2)){ 
    printf("S\n");}
  else if((ap<=af1+af2)&&(lp<=lf1 && lp<=lf2)){ 
    printf("S\n");}
  else if((ap<=af1+lf2)&&(lp<=lf1 && lp<=af2)){
    printf("S\n");}
  else if((lp<=lf1+af2)&&(ap<=af1 && ap<=lf2)){
   printf("S\n");}  
  else if((lp<=lf1+lf2)&&(ap<=af1 && ap<=af2)){
   printf("S\n");}
  else if((lp<=af1+af2)&&(ap<=lf1 && ap<=lf2)){ 
   printf("S\n");}
  else if((lp<=af1+lf2)&&(ap<=lf1 && ap<=af2)){ 
   printf("S\n");} 
  else{
   printf("N\n");}		
  return 0;}

  

