#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("\n--------------------------------------\n");
  printf("Joseph Yusufov: Linked-list Assignment \n");
  printf("\n");
  printf("Due 2019-10-28\n");
  printf("--------------------------------------\n\n");
  struct node *list = NULL;
  printf("empty list\n");
  print_list(list);
  
  int i = 9;
  for (i; i >= 0; i--){
    list = insert_front(list, i);
  }
  printf("inserting into list: [0, 9]\n");
  print_list(list);

  printf("Removing 0\n");
  list = remove_node(list, 0);
  print_list(list);

  printf("Removing 7\n");
  list = remove_node(list, 7);
  print_list(list);

  printf("Removing -1\n");
  list = remove_node(list, -1);
  print_list(list);

  printf("freeing list\n");
  list = free_list(list);
  print_list(list);

  return 0;
}
