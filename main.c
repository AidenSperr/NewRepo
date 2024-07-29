#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
} node;

void add(node** head, int x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
	}
	else {
		node* last = *head;
		while (last->next != NULL) {
			last = last->next;
		}

		last->next = newNode;
	}
}

void printIt(node* head) {
	node* temp = head;
	
	printf("\nList:\n");
	while (temp != NULL) {
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n\n");
}

int main(void) {
	int value;
	int runs;
	node* list = (node*)malloc(sizeof(node));
	list = NULL;
	printf("How many values would you like to add to the list?\nAnswer: ");
	scanf("%d", &runs);
	printf("\n");

	for (int i = 0; i < runs; i++) {
		printf("Value #%d to insert: ", i + 1);
		scanf("%d", &value);

		add(&list, value);

		printf("\n");
	}

	getchar();
	char printChoice;
	node* temp = list;
	printf("Print list? (Y/N): ");
	scanf("%c", &printChoice);

	if (printChoice == 'Y') {
		printIt(list);
	}
	else if (printChoice == 'N') {
		printf("Print list skipped.\n\n");
	}

	free(list);
	printf("Exiting program.\n\n");

	return 0;
}