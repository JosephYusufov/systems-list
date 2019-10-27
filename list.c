#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node * next};

//  print_list
void print_list(struct node *head){
    struct node *next_ref = head;
    printf("\t[");
    for(next_ref; next_ref != NULL; next_ref = next_ref->next){
        printf("  %d  ", (next_ref->i));
    }
    printf("]\n");
}

struct node * insert_front(struct node *head , int value){
    struct node *new_head = malloc(sizeof(struct node));
    new_head->i = value;
    new_head->next = head;
    return new_head; 
}

struct node * free_list(struct node * head){
    struct node *next_ref = head;
    struct node *cursor;
    for(next_ref; next_ref != NULL; next_ref = cursor){
        cursor = next_ref->next;
        free(next_ref);
    }
    return next_ref;
}

struct node * remove_node(struct node * head, int data){
    if(head->i == data){
        struct node *new_head = head->next;
        free(head);
        return new_head; 
    }
    struct node *cursor = head;
    for(cursor; cursor != NULL; cursor = head->next){
        if(cursor->next->i == data){
            struct node *after_removed = cursor->next->next;
            free(cursor->next);
            cursor->next = after_removed;
            return head;
        }
    }
}
