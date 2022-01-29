#include <stdio.h>
#include <stdlib.h>
int main(){
  int *a;
  int n,i;
  scanf("%d",&n);
  a=(int*)malloc(sizeof(int)*n);
  printf("Endereço do início da memória: %p {%lld}\n",a,(long long)a);

  if(a==0){
    printf("Erro ao alocar a memória \n");
    exit(1);
  }

  for(i=0; i<n ; ++i){
    scanf("%d",a+i);
  }
  for(i=0; i<n ; ++i){
     printf("[a]+1= %d\n",a[i]);
  }
  free(a);

  return 0;
}


