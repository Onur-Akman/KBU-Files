//
//  main.c
//  Question6
//
//  Created by Onur Akman on 29.10.2023.
//Question 6-Write the function that prints the record with the longest name in the list.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char studentName[20];
    struct node* next;
};

struct node* addNode(struct node* head, char name[20]);
void findLongestName(struct node* head);

int main() {
    char name[20];
    struct node* head = NULL;

    for (int i = 0; i < 3; i++) {
        printf("Please enter a name: ");
        scanf("%s", name);
        head = addNode(head, name);
    }

    findLongestName(head);

    return 0;
}

struct node* addNode(struct node* head, char name[20]) {
    struct node* newNode;
    struct node* temp;
    newNode = (struct node*)malloc(sizeof(struct node));
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

void findLongestName(struct node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node* temp = head;
    char longestName[20];
    int maxLength = 0;

    while (temp != NULL) {
        int currentLength = strlen(temp->studentName);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longestName, temp->studentName);
        }
        temp = temp->next;
    }
    printf("*************************\n");
    printf("Longest name on the list is: %s\nCharacter Length: %d\n", longestName, maxLength);
}
