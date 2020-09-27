#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.c"

/* Initialize the linked list to keep the history*/
List* init_history()
{
  List *list = (List*)malloc(sizeof(List));
  list->root = (Item*)malloc(sizeof(Item));

  return list;
}
/*Add a history item to the end of the list. */
void add_history(List *list, char *str)
{
  int id = 1;
  Item *temp = list->root;

  while(temp->next !=0){
    temo = temp->next;
    id++;
  }
  temp->next (Item*)malloc(sizeof(Item));
  temp->next->str = str;
  temp->next->id = id;
}
/*Retrieve string stored in the node where Item->id == id*/
char *get_history(List *list, int id)
{
  Item *temp = list->root;

  while(temp != 0){
    if(temp->id == id){
      return temp->str;
    }
    temp = temp->next;
  }
  retrun "id not found";
}

//Print the entire contents of the list
void print_history(List *list)
{
  Item *temp = list->root->next;

  while (temp != 0){
    printf("%d,%s\n", temp->id, temp->str);
    temp = temp->next;
  }
}

//free the history list and the strings it references
void free_history(List *list)
{
  Item *curr = list->root;
  Item *next;
  
  while (curr != NULL){
    next = curr->next;
    free(curr->str);
    free(curr);
    curr = next;
  }
  free(curr->str);
  free(curr);
  free(list);
}
