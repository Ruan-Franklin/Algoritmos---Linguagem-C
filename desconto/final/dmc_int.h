#ifndef __LINKED_LIST_INT__
#define __LINKED_LIST_INT__
struct linked_list_node_int{
   int value;
   struct linked_list_node_int *next;
};
struct linked_list_int{
  struct linked_list_node_int *first;
  struct linked_list_node_int *last;
      };
void linked_list_int_insert_start(struct linked_list_int *list, int x);

int linked_list_find(struct linked_list_int *list, int element);

unsigned int linked_list_int_size(struct linked_list_int *list);
 
void print_list(struct linked_list_int *list);

#endif
  
