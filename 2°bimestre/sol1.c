#include <stdio.h>
int lab_bt(char lab[20][20], int c, int l, int x, int y){ /* Para cada ponto do labirinto, precisamos saber onde estamos. O x e o y representam a linha e a coluna que estamos atualmente. */
/*Opções: 1°: Rejeita */
/*Opções: 2°: Aceita */
/*Opções: 3°: Fazer chamadas recursivas */  
/*Essa é a chamada padrão de um algoritmo global de backtracking */
/* Rejeita:*/ 
  if(x<0 || y<0 || x>=c || y>1 || lab[y][x]!='B') return 0;
 /* Aceita */
  if(x==c-1 && y==l-1) return 1;
  lab[y][x]='P';
  /*Esquerda */
  int ans=lab_bt(lab,l,c,x-1,y);
  /*Abaixo */
  if(!ans)ans=lab_bt(lab,l,c,x,y+1);
  /*Direita */
  if(!ans)ans=lab_bt(lab,l,c,x+1,y);
  /*Acima */
  if(!ans) ans =lab_bt(lab,l,c,x,y-1);
  lab[y][x]='B';
  return ans;

	  /*Abaixo, detalhes das opções: */
  /*Opção Fazer chamadas recursivas */
  /*Vai para a esquerda */ /*Resposta */
  /*A opção "aceita" é acionada SE x(indicador de posição de linha) for igual a coluna -1 e se y(indicador de posição de coluna) for igual a linha -1. * Se estiver na célula final, vai retornar verdadeiro (1);*/

}

int sol_lab (char lab[20][20], int l, int c){
  return lab_bt(lab, l,c,0,0); /*O ponto inicial para este problema é o 0,0 */
  /* lab, l e c (labirinto, linha e coluna) podem ser variáveis globais */
  }
 
  
int main(){
  char lab[20][20];  /*O tamanho máximo é de 20 linhas e 20 colunas */
  int l, c, i, j; 
  scanf("%d %d", &l, &c); /* Lê a quantidade linhas e colunas */
  for(i=0 ; i<l ; ++i) /* Para cada linha  para cada coluna, ele lê o valor */
    for(j=0 ; j<c ; ++j) 
     scanf("%c",&lab[i][j]); /* Lendo valores */
   int ans=sol_lab(lab,l,c); /*A primeira informação que precisa ser passada é o labirinto com a quantidade de linhas e a quantidade de colunas */
   printf("%d\n",ans);
   return 0;
   }
/* Essa solução lê alguns caracteres para um labirinto. Nosso programa vai simplesmente dizer se é possível sair do labirinto. */

