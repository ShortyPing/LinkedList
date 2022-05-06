//
// Created by shortping on 06.05.22.
//

#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>

LinkedList *createLinkedList() {
    LinkedList *list = malloc(sizeof(LinkedList));
    return list;
}

int LL_append(LinkedList *list, LinkedListItem *item) {
    if (list->root == NULL) {
        list->root = item;
        list->last = item;
        item->index = 0;
        return 0;
    }
    LinkedListItem *i = (LinkedListItem *) list->root;
    while (i->next != NULL) {
        i = i->next;
    }
    if (i->next == NULL) {
        item->index = i->index + 1;
        i->next = item;

    }
    return i->index;

}

LinkedListItem *createLinkedListItem(void *value) {
    LinkedListItem *item = malloc(sizeof(LinkedListItem));
    item->value = value;
    return item;
}

void *LL_get(LinkedList *list, unsigned index) {
    if (index == 0) {
        return list->root->value;
    }

    LinkedListItem *crnt = list->root->next;
    while (crnt->index != index) {
        crnt = crnt->next;
    }

    if (crnt->index == index) {
        return crnt->value;
    }
}

void LL_del(LinkedList* list) {
    LinkedListItem *i =list->root;
    if(i == NULL) {
        free(list);
        return;
    }

    while(i->next != NULL) {
        LinkedListItem *i1 = i->next;
        i = i->next;
        free(i1);
    }
}

int LL_size(LinkedList* list) {
    LinkedListItem* i = list->root;
    int ret = 1;
    if(i == NULL) return 0;
    while(i->next != NULL) {
        i = i->next;
        ret++;
    }

    return ret;
}