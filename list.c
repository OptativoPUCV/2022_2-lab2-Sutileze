#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

typedef struct Node Node;

struct Node {
    void * data;
    Node * next;
    Node * prev;
};

struct List {
    Node * head;
    Node * tail;
    Node * current;
};

typedef List List;

Node * createNode(void * data) {
    Node * new = (Node *)malloc(sizeof(Node));
    assert(new != NULL);
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    return new;
}

List * createList() {
  List* list=(List*) malloc (sizeof(List));
  list -> head = NULL;
  list -> tail = NULL;
  list-> current = NULL;
  return list;
}

void * firstList(List * list) {
  list -> current = list -> head;
  if (list->head != NULL){
    return list -> current -> data;
  }
  else{
    return NULL;
  }
  
}

void * nextList(List * list) {
  list -> current = list -> head;
  list -> current-> next ;
  return NULL;
}

void * lastList(List * list) {
    return NULL;
}

void * prevList(List * list) {
  /*if (list -<current = Null)
return null  

    */
    return NULL;
}

void pushFront(List * list, void * data) {
  //if (list  == null)
  //return null
  /*node *newnode =cratenodo(data)
if (list -< head != null){
LIST-< HEAD -<PREV =NEWNODO
NEWNODO = NEXT = LIST -< HEAD
  LIST -< NHEAD = NEWNODE*/
}
/*else {
LIST -< HEAD = NEWNODE
LIST -< TAIL = NEWNODE
  
  
}*/
return NULL;
}

void pushBack(List * list, void * data) {
    list->current = list->tail;
    pushCurrent(list,data);
}

void pushCurrent(List * list, void * data) {
}

void * popFront(List * list) {
    list->current = list->head;
    return popCurrent(list);
}

void * popBack(List * list) {
    list->current = list->tail;
    return popCurrent(list);
}

void * popCurrent(List * list) {
    return NULL;
}

void cleanList(List * list) {
    while (list->head != NULL) {
        popFront(list);
    }
}