//
//  main.c
//  Question5
//
//  Created by Onur Akman on 29.10.2023.
//Question 5- Write the function that deletes the next node from the node with the searched student name in the list.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char studentName[20];
    struct node *next;
};

struct node *addNode(struct node *head, char name[20]);
struct node *searchList(struct node *head, char name[20]);
struct node *deleteNextNode(struct node *head, char name[20]);
void printList(struct node *head);

int main() {
    char name[20];
    struct node *head = NULL;
    
    for (int i = 0; i < 3; i++) {
        printf("Please enter a name: ");
        scanf("%s", name);
        head = addNode(head, name);
    }

    printf("Enter a name that you want to delete node comes after that: ");
    scanf("%s", name);

    struct node *result = searchList(head, name);
    if (result != NULL) {
        int position = 1;
        struct node *temp = head;
        
        while (temp != result) {
            temp = temp->next;
            position++;
        }

        printf("%d-%s\n", position, result->studentName);

        head = deleteNextNode(head, name);

        printf("Updated list after deleting the next node:\n");
        printf("******************************************\n");
        printList(head);
    } else {
        printf("Name is not in the list.\n");
    }

    return 0;
}

struct node *addNode(struct node *head, char name[20]) {
    struct node *newNode;
    struct node *temp;
    newNode = malloc(sizeof(struct node));
    temp = head;
    newNode->next = NULL;
    strcpy(newNode->studentName, name);

    if (head == NULL) {
        head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}

struct node *searchList(struct node *head, char name[20]) {
    struct node *temp = head;
    while (temp != NULL) {
        if (strcmp(temp->studentName, name) == 0) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

struct node *deleteNextNode(struct node *head, char name[20]) {
    struct node *current = head;
    struct node *temp;

    if (current != NULL && strcmp(current->studentName, name) == 0) {
        temp = current->next;
        free(current);
        return temp;
    }

    while (current != NULL && current->next != NULL) {
        if (strcmp(current->next->studentName, name) == 0) {
            temp = current->next;
            current->next = temp->next;
            free(temp);
            return head;
        }
        current = current->next;
    }

    return head;
}

void printList(struct node *head) {
    struct node *temp = head;
    int position = 1;
    while (temp != NULL) {
        printf("%d-%s\n", position, temp->studentName);
        temp = temp->next;
        position++;
    }
}
