//
//  main.c
//  Question1
//
//  Created by Onur Akman on 29.10.2023.
//
//Question 4 - Write the function that searches records by student name in the list.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char studentName[20];
    struct node *next;
};

struct node *addNode(struct node *head, char name[20]);
struct node *searchList(struct node *head, char name[20]);

int main() {
    char name[20];
    struct node *head = NULL;
    
    for (int i = 0; i < 3; i++) {
        printf("Please enter a name: ");
        scanf("%s", name);
        head = addNode(head, name);
    }

    printf("Name that you want to look for:  ");
    scanf("%s", name);

    struct node *result = searchList(head, name);
    if (result != NULL) {
        int position = 1;
        struct node *temp = head;
        
        while (temp != result) {
            temp = temp->next;
            position++;
        }

        printf("%d-%s \n", position, result->studentName);
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
