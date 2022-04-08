#include <stdio.h>
#include <stdlib.h>
#include "dmc_int.h"
int main(){
  struct linked_list_int *l01=linked_list_int_create();
  int i;
  for(i=0 ; i<5 ; ++i)
    linked_list_int_insert_start(l01,i*5);
  print_list(l01);
  printf("Size: %u\n",linked_list_int_size(l01));
  return 0;
  }


  
    
