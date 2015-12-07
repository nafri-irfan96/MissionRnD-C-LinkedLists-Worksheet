/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES:

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node{
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N);
void display(struct node * first);
struct node * insertend(struct node * first, int x);

struct node * numberToLinkedList(int N) {
	struct node * list = (struct node *)malloc(sizeof(struct node));

	list = NULL;
	int temp; int arr[100];
	int i = 0, j;
	N = N<0 ? -N : N;
	temp = N;
	if (temp == 0)
	{
		list = insertend(list, 0);
	}
	while (temp != 0)
	{

		arr[i] = temp % 10;
		i++;
		temp /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		list = insertend(list, arr[j]);
	}
	return list;
}
struct node * insertend(struct node * first, int x)
{
	struct node * p, *t;
	t = NULL;
	p = (struct node *)malloc(sizeof(struct node));
	p->num = x;
	p->next = NULL;

	if (first == NULL)
	{
		first = p;
		return first;
	}
	t = first;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = p;
	return first;
}

