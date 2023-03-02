/*

    题目：反向输出一个链表。

*/

#include <stdio.h>
#include <malloc.h>

typedef struct LNode{
	int data;
	struct LNode* next;
}LNode, *linklist;

LNode* linklist_create()
{
	LNode* head = (LNode*)malloc(sizeof(LNode));
	if (head == NULL)
	{
		printf("创建失败!\n");
		return NULL;
	}

	head->next=NULL;
	return head;
}

int linklist_HeadAdd(linklist head, int num)
{
	LNode* new = (LNode*)malloc(sizeof(LNode));

	if (new == NULL)
	{
		printf("创建失败!\n");
		return 0;
	}

    new->data=num;
    new->next=head->next;
    head->next=new;
    return 1;
}

int linklist_TailAdd(linklist head, int num)
{
	LNode* new = (LNode*)malloc(sizeof(LNode));

	if (new == NULL)
	{
		printf("创建失败!\n");
		return 0;
	}

	LNode* p=NULL;

	for (p=head; p->next!=NULL; p=p->next);

    new->data=num;
	p->next=new;
	new->next=NULL;

    return 1;
}

int linklist_destroy(linklist head)
{
	if (head->next == NULL)
	{
		free(head);
		return 0;
	}

	
	LNode* pre=head;
	LNode* p=pre->next;

	while (p->next!=NULL)
	{
        free(pre);
        pre=p;
        p=p->next;
	}
    
    free(p);
	// printf("%d\n", p->data);

	return 1;
}

int linklist_show(linklist head)
{
	if (head == NULL)
	{
		printf("表空!\n");
		return 0;
	}

	LNode* p=head;

	while (p->next!=NULL)
	{
		printf("%d\t", p->next->data);
		p=p->next;
	}

	printf("\n");
}

int linklist_reverse(linklist head)
{
	if (head->next == NULL)
	{
		printf("表空!\n");
		return 0;
	}

	LNode* p = head;
	LNode* head_temp = linklist_create();

	for ( ; p->next !=NULL ; p=p->next)
	{
        linklist_HeadAdd(head_temp, p->next->data);
	}

    linklist_show(head_temp);

    linklist_destroy(head_temp);    

    // if (head_temp == NULL || head_temp != NULL)
    // {
    // 	printf("%p\n", head_temp);
    // 	printf("head_temp存在!\n");
    // }
    // else
    // {
    // 	printf("销毁完毕!\n");
    // }

}


int main(int argc, char const *argv[])
{
	int i=0;
	LNode* L=linklist_create();

	for (i=1 ;i<=5; i++)
	{
        linklist_TailAdd(L, i);
	}
    linklist_show(L);

    linklist_reverse(L);

	return 0;
}