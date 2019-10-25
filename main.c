#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main(){
  struct node test_node;
  test_node.i = 12;
  test_node.next = &test_node;
  return 0;
}
