//
// main.c
// Question2
//Question2-Add 100 randomly generated numbers to the list, write the c code that sorts all the numbers entered from largest to smallest and prints them on the screen.
// Created by Onur Akman on 29.10.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    struct Node* next;
    int data;
};

struct Node* sortValues(struct Node* head, int data);
void printNodes(struct Node* head);

int main(void) {
    struct Node* head = NULL;
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        int value = rand() % 100 + 1;
        head = sortValues(head, value);
    }

    printNodes(head);

    return 0;
}

struct Node* sortValues(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL || data > head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL && current->next->data > data)
            current = current->next;
        newNode->next = current->next;
        current->next = newNode;
    }
    return head;
}

void printNodes(struct Node* head) {
    if (head == NULL) {
        printf("Nothing to see here\n");
        return;
    }
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
}
