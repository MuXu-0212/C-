/*

    题目：连接两个链表。 

*/


#include <stdio.h>
#include <malloc.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}lnode, *linklist;


lnode* linklist_Create()
{
	lnode* head = (lnode*)malloc(sizeof(lnode));

	if (head==NULL)
	{
		printf("创建失败!\n");
		return NULL;
	}

	head->next = NULL;
	return head;

}

int linklist_TailAdd(linklist head, int num)
{
    lnode* new = (lnode*)malloc(sizeof(lnode));
	if (new == NULL)
	{
		printf("添加失败!\n");
		return 0;
	}
    
    lnode* p=head;

    for ( ; p->next!=NULL; p=p->next);
	new->data = num;
    new->next = NULL;
    p->next = new;

    //printf("%d\n", p->data);

    return 1;
}

void linklist_Scanf(linklist head)
{
	int input=0, exit=1;

	do
	{
		printf("请输入一个数(0结束)>");
		scanf("%d", &input);

        if (input)
        {
            linklist_TailAdd(head, input);
        }
        else
        {
        	exit = 0;
        }
	}while(exit);
}

int linklist_Show(char c, linklist head)
{

	if (head->next == NULL)
	{
		printf("表空!\n");
		return 0;
	}
   
	lnode* p=head;
    
    printf("表%c : ", c);
	for (p=head->next; p!=NULL; p=p->next)
	{
        printf("%d ", p->data);
	}

	printf("\n");
    return 1;
}

int linklist_Connect(linklist LA, linklist LB)
{
    if (LA==NULL || LB==NULL)
    {
    	printf("表空!\n");
    	return 0;
    }

    lnode* p=LA;

    for ( ; p->next!=NULL; p=p->next);

    p->next = LB->next;
    
    free(LB);
    return 1;
}

int main(int argc, char const *argv[])
{
	lnode* LA = linklist_Create();
	lnode* LB = linklist_Create();


	linklist_Scanf(LA);
	// printf("%d", LA->next->data);
	// printf("%d\n", LA->next->next->data);
	linklist_Show('A', LA);
 
    linklist_Scanf(LB);
	linklist_Show('B', LB);

	linklist_Connect(LA, LB);
	linklist_Show('C', LA);

	return 0;
}