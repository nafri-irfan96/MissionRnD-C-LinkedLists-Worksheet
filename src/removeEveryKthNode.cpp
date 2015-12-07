/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (K <=1 || head == NULL)
		return NULL;

	struct node *x, *y;
	x = y = head;
	int c = 1, d = 1;
	while (x != NULL)
	{
		if (c == K)
		{
			
			if (c == 1)
			{
				head = x->next;
				return head;
			}
			else
			{
				while (y != NULL)
				{
					if (d == K - 1)
					{
						y->next = y->next->next;
						return head;
					}
					d++;

					y = y->next;
				}
			}

		}
		c++;
		x = x->next;
	}
	return NULL;
}