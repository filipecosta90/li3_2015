/*
 *  * Copyright (C) Carlos Sá, Filipe Oliveira, Sérgio Caldas
 *  * Copyright (C) Laboratórios Informática III, Universidade do Minho, 2015
 *  */

#ifndef _GENERIC_LINKED_LIST_H_INCLUDED_
#define _GENERIC_LINKED_LIST_H_INCLUDED_

typedef struct listNode*  ListNode;

typedef struct list* List;

typedef void ( *freeFunction ) ( void* );

struct list* initLL ();

void newLL ( List , int , freeFunction );

void destroyLL ( List );

void prependLL ( List , void* );

void appendLL ( List , void* );

void* searchLL (  struct list *list , void * element , int ( *isEqualFunc ) ( void* , void* ) );

struct list* limitLL ( struct list* list , int limit );

struct list* orderedInsertLL ( struct list *list , void * element , int ( *comparatorFunc ) ( void* , void* ) );

struct list* reorderLL ( struct list *list , int ( *comparatorFunc ) ( void* , void* ) , int , freeFunction );

struct list* orderedInsertLLWithLimit ( struct list *list , void * element , int ( *comparatorFunc ) ( void* , void* ) , int limit );

int sizeLL ( List );

void*  headLL ( List );

void*  getDataInPositionLL ( struct list *list , int position );

void tailLL ( List , void * );

struct list* convertLLtoStringer ( struct list* list , void* ( toStringer ) ( void* ) );

#endif /* _GENERIC_LINKED_LIST_H_INCLUDED_ */

