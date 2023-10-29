//
//  main.c
//  Question1
//
//  Created by Onur Akman on 29.10.2023.
//Question 3- Write a function that stores the student number, name and age, traverses all the nodes in the list, writes all the student information on the screen and counts it.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int studentID;
    int number;
    char name[20];
    struct Node* next;
};

struct Node* addToList(struct Node* head, int studentID, int number, char studentName[20]);

int main() {
    struct Node* head = NULL;
    struct Node* temp;
    int id, num;
    char name[20];

    for (int i = 0; i < 2; i++) {
        printf("Enter a student ID: ");
        scanf("%d", &id);
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Enter a name: ");
        scanf("%s", name);
        head = addToList(head, id, num, name);
        printf("\n");
    }

    printf("\n");

    temp = head;
    int count = 1;
    while (temp != NULL) {
        printf("%d- %s %d %d\n", count, temp->name, temp->number, temp->studentID);
        temp = temp->next;
        count++;
    }

    return 0;
}

struct Node* addToList(struct Node* head, int studentID, int number, char studentName[20]) {
    struct Node* temp = head;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->next = NULL;
    strcpy(newNode->name, studentName);
    newNode->number = number;
    newNode->studentID = studentID;

    if (head == NULL) {
        head = newNode;
    }
    else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}
