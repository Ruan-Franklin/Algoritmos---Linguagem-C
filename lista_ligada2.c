#include <stdio.h>
#include <stdlib.h>

struct ll_node_int{
   int value;
   struct ll_node_int *next;
};

int main(){
  struct ll_node_int *first=0, *new_node;
  new_node = (struct ll_node_int*) malloc(sizeof(struct ll_node_int));
  new_node -> value=5;
  new_node->next=first;
  first=new_node;

  new_node = (struct ll_node_int*) malloc(sizeof(struct ll_node_int));
  new_node -> value=2;
  new_node -> next=first;
  first=new_node;
  new_node = (struct ll_node_int*) malloc(sizeof(struct ll_node_int));

  new_node -> value=3;
  new_node -> next=first;
  first=new_node;
  struct ll_node_int *current = first;
  printf("Lista: \n");
  while(current !=0){
    printf("%d -> ",current -> value);

    current=current->next;}
  printf("Null \n");
  return 0;

}

