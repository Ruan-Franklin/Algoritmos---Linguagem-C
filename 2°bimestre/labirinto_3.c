#include <stdio.h>

int A[4][4]={
    1,1,0,1,
    1,0,1,0,
    1,1,1,0,
    0,0,1,1

};

int path [4][4] = { /*Caminho do labirinto */
        0,0,0,0,
        0,0,0,0,
        0,0,0,0,
        0,0,0,0
};

/* I=Coluna e J =Linha */
int findPath(int i, int j, int n){  /*A busca do caminho leva três argumentos */
/* i e j são índices, n é o tamanho quadrático da matriz. */
/* Se chegar ao destino, apenas retorna verdadeiro se os índices forem iguais a n-1 */
if(i==n-1 && j==n-1){
    path[i][j]=1;
    return 1;
}
/*Verificando se um caminho está fechado ou aberto */

if(A[i][j]==1){
    path[i][j]=1;
    if(findPath(i,j+1,n)==1) return 1;  /*Se a movimentação para a direita fizer chegar ao caminho, retornar verdadeiro*/
    if(findPath(i-1,j,n)==1) return 1; /*Se a movimentação para baixo fizer chegar ao caminho, retornar verdadeiro */
    path[i][j]=0; /*Apaga o caminho no qual já passou */
    
} 
 return 0;
}

int main(){
    findPath(0,0,4);
    for (int i = 0 ; i<4 ; ++i){   /*O labirint é 4 por 4 */
        for(int j = 0 ; j<4 ; j++){
            if(path [i][j]){
                printf("%d, %d\n --->\n",i,j);
            }
            printf("\n");

        }
    }
}