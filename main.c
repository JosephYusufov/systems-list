#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *list = NULL;
  printf("empty list");
  print_list(list);
  
  int i = 0;
  list = insert_front(list, 0);
  list = insert_front(list, 1);
  list = insert_front(list, 2);
  list = insert_front(list, 3);
  list = insert_front(list, 4);
  list = insert_front(list, 5);
  list = insert_front(list, 6);
  list = insert_front(list, 7);
  list = insert_front(list, 8);
  list = insert_front(list, 9);
  printf("inserting into list: [0, 9]");
  print_list(list);
  return 0;
}
