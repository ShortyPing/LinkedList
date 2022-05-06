#include <stdio.h>
#include "LinkedList.h"

int main() {

    LinkedList *list = createLinkedList();
    LL_append(list, createLinkedListItem("Hello"));
    LL_append(list, createLinkedListItem("Hello"));
    LL_append(list, createLinkedListItem("Hello"));
    printf("%s\n", LL_get(list, 1));
    LL_del(list);
    return 0;
}
