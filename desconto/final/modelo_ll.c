#include <stdio.h>

#include <stdlib.h>

typedef struct node{
  int value;
  struct node *next;
  }Node;
  /* procedimento para inserir no início */
void insert_start(Node **list, int n){
  Node *new_node = malloc(sizeof(Node));
  if(new_node){
    new_node->value = n;
    new_node->next = *list;
    *list = new_node;	 
     }
  else	
    printf("Erro ao alocar memoria!\n");  
    }
   /* procedimento para inserir no fim */

void insert_end(Node **list, int n){   
  Node *aux, *new_node = malloc(sizeof(Node));
  if(new_node){
    new_node->value = n;
    new_node->next = NULL;
    /* Se for o primeiro elemento */
    if(*list == NULL)
      *list = new_node;
    else{
      aux = *list;
      while(aux->next){
          aux=aux->next;
      aux->next=new_node;
	 }
	 }
	 }
   else{
     printf("Erro ao alocar a memória, tente novamente!\n");
     }
}

// insert função insert at

void insert_at(Node **list, int n, int prev){
  Node *aux, *new_node = malloc(sizeof(Node));
  if(new_node){
    new_node->value = n;
    /* Se for o primeiro elemento */
    if(*list == NULL){
      new_node->next = NULL;
      *list = new_node;}
    else{
      aux = *list;
      while(aux->value != prev && aux->next)
         aux = aux->next;
      new_node->next = aux->next;
      aux->next = new_node;
      }
}
  else{
    printf("Erro ao alocar memoria!\n");
    }
    }


void print_vector(Node *node){
  printf("\n\tLista: ");
  while(node){
    printf("%d ", node->value);
    node = node->next;
    }			
  printf("\n\n");

				}

int main(){
  int option, value, previous;
  Node *list = NULL;
  do{
    printf("\n\t0 - Sair\n\t 1 -Função Insert_start\n\t 2 - Função Insert_end\n\t 3 - Função insert_at \n\t 4 - Função print_vector\n");
    scanf("%d", &option);
    switch(option){
    case 1:
      printf("Digite um valor: ");
      scanf("%d", &value);
      insert_start(&list, value);
      break;
    case 2:
      printf("Digite um valor: ");
      scanf("%d", &value);
      insert_end(&list, value);
      break;
    case 3:
      printf("Digite um valor e o valor de referencia: ");
      scanf("%d%d", &value, &previous);
      insert_at(&list, value, previous);
      break;
    case 4:
      print_vector(list);
      break;
    default:
        if(option != 0)			
	  printf("Opcao invalida!\n");
	  }
 }while(option != 0);						
 return 0;
										}



