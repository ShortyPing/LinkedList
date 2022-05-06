#include <stdio.h>
#include "LinkedList.h"

void printItem(LinkedListItem* item) {
    printf("ITEM: %s\n", item->value);
}

int main() {

    LinkedList *list = createLinkedList();
    LL_append(list, createLinkedListItem("0"));
    LL_append(list, createLinkedListItem("1"));
    LL_append(list, createLinkedListItem("2"));
    LL_append(list, createLinkedListItem("3"));
    LL_append(list, createLinkedListItem("4"));
    LL_append(list, createLinkedListItem("5"));
    LL_remove(list, 4);
    LL_foreach(printItem, list);
    LL_del(list);
    return 0;
}

