/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	/*struct node *pointer;
	pointer = head;
	int count[3];
	int i;
	for (i = 0; i < 3; i++)
		count[i] = 0;
	while (pointer != NULL)
	{
		count[pointer->data] += 1;
		pointer = pointer->next;

	}
	i = 0;
	pointer = head;
	while (pointer != NULL)
	{
		if (count[i] == 0)
			i++;
		else
		{
			pointer->data = i;
			pointer = pointer->next;
			i--;
		}*/
}