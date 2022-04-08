#ifndef __LL_INT__
#define __LL_INT__
  
  struct ll_node_int{
   int value;
   struct ll_node_int *next;
   };

struct ll_int{
  struct ll_node_int *first;
  struct ll_node_int *last;
  };
 void ll_int_inserir_inicio(struct ll_int *list, int x);

 unsigned int(ll_int_size(struct ll_int *list));

 
 struct ll_int *ll_int_create();
  
   
void print_list(struct ll_int *list);
#endif
  
  

