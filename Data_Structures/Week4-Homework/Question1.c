//
//  main.c
//  Question1
//
//  Created by Onur Akman on 29.10.2023.
//

//Question 1- Write a function that adds all odd numbers to the beginning of the list and all even numbers to the end of the list until -1 is entered from the keyboard.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
//addFront fonksiyonu tek sayıları listenin başına ekliyor.
struct Node* addFront(struct Node* head, int value);
//addLast fonksiyonu çift sayıları listenin sonuna ekliyor.
struct Node* addLast(struct Node* head, int value);
//buildList fonksiyonu -1 girilene kadar kullanicidan deger aliyor.
struct Node* buildList();

int main() {
    struct Node* myList = NULL;
    printf("It will take input from you till you enter -1...\n");
    myList = buildList();
    
    printf("Final List: ");
    while (myList != NULL) {
        printf("%d ", myList->data);
        myList = myList->next;
    }
    
    return 0;
}

struct Node* addFront(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    
    return head;
}

struct Node* addLast(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }
    
    return head;
}
struct Node* buildList() {
    struct Node* head = NULL;
    int continueInput = 1;
    
    while (continueInput) {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        //Girilen sayi tek mi, cift mi yoksa -1 mi diye filtreleniyor.
        if (number == -1) {
            continueInput = 0;
        } else if (number % 2 == 0) {
            head = addLast(head, number);
        } else {
            head = addFront(head, number);
        }
    }
    
    return head;
}
