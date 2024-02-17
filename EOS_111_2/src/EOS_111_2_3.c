#include <stdio.h>
#include <stdlib.h>

//linked list
typedef struct NODE{
    int v;
    struct NODE *next;
} NODE_t;

NODE_t *mergeSorted21(NODE_t *l1, NODE_t *l2)
{
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->v < l2->v) {
        l1->next = mergeSorted21(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSorted21(l2->next, l1);
        return l2;
    }
}

int main() {
    int x[] = {1, 3, 6}, y[] = {1, 2, 5, 7, 9};

    // init & convert x[] to list1
    // *h_list_1 => head, *ptr => operate , *tail => tail
    NODE_t *h_list1 = NULL, *ptr, *tail;
    int i;
    for (i = 0; i < sizeof(x) / sizeof(int); i++) 
    {
        ptr = (NODE_t*)malloc(sizeof(NODE_t));
        ptr->v = x[i];
        ptr->next = NULL;
        if (h_list1 == NULL) {
            h_list1 = ptr;
            tail = ptr;
        } else {
            tail->next = ptr;
            tail = ptr;
        }
    }

    // init & convert y[] to list2
    // *h_list_2 => head, *ptr => operate , *tail => tail
    NODE_t *h_list2 = NULL;
    for (i = 0; i < sizeof(y) / sizeof(int); i++) 
    {
        ptr = (NODE_t*)malloc(sizeof(NODE_t));
        ptr->v = y[i];
        ptr->next = NULL;
        if (h_list2 == NULL) {
            h_list2 = ptr;
            tail = ptr;
        } else {
            tail->next = ptr;
            tail = ptr;
        }
    }

    NODE_t *h_list3 = mergeSorted21(h_list1, h_list2);

    // Output the merged list
    printf("Merged list:\n");
    ptr = h_list3;
    while (ptr != NULL) {
        printf("%d ", ptr->v);
        ptr = ptr->next;
    }
    printf("\n");

    // Free the memory
    while (h_list3 != NULL) {
        ptr = h_list3;
        h_list3 = h_list3->next;
        free(ptr);
    }

    return 0;
}