/*
	在一个链表中插入一个节点
*/

#include <stdio.h>
#include <malloc.h>

typedef struct linknode{
	int data;
	struct linknode* next;
}linknode, *linklist;


linknode* linklist_create()
{
	linknode* head = (linknode*)malloc(sizeof(linknode));
	if (head != NULL)
	{
		return head;
	}
	else
	{
		return NULL;
	}
}

linknode* linklist_newnode(int data)
{
	linknode* new = (linknode*)malloc(sizeof(linknode));
	if (head != NULL)
	{
		new->data = data;
		new->next = NULL;
		return head;
	}
	else
	{
		return NULL;
	}
}

void linklist_add(linklist head, int data)
{
	linknode* p = head;
	linknode* new = linklist_newnode(data);

	for( ; p->next!=NULL; p=p->next);
	new->next = p->next;
	p->next = new;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}

