//
// Created by shortping on 06.05.22.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

typedef struct {
    void *value;
    void *next;
    int index;
} LinkedListItem;

typedef struct {
    LinkedListItem *root;
    void *last;
} LinkedList;

LinkedList *createLinkedList();

int LL_append(LinkedList* list, LinkedListItem*);
LinkedListItem *createLinkedListItem(void*);
void* LL_get(LinkedList*, unsigned);
int LL_size(LinkedList*);
void LL_del(LinkedList*);

#endif //LINKEDLIST_LINKEDLIST_H
