#include <stdio.h>
#include <stdlib.h>
struct ll_node_int{
  int value;
  struct ll_node_int *next;
 };
int main(){
  struct ll_node_int *first=0;
  first=(struct ll_node_int*) malloc(sizeof(struct ll_node_int)); /* alocando um espaço para uma área de memória */
  first->value=5;
  first->next=0;
  printf("Valor em first: %d\n",first->value);
  printf("First aponta para: %p\n",first->next);
  struct ll_node_int *second=(struct ll_node_int*) malloc (sizeof(struct ll_node_int));
  second->value=8;
  second->next=0;
  first -> next = second;
  printf("Valor em first: %d\n",first->value);
  printf("First aponta para: %p\n",first->next);
  printf("Valor em second: %d\n",second->value);
  printf("Second aponta para: %p\n",second->next);

    

  
  return 0;
}
