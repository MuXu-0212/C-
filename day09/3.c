/*
    3.给一个足够大的空间，输入的数据要求要从小到大进行排列
    	包含正数与负数输入0停止输入，退出程序. (使用指针)
*/

#include <stdio.h>
#include <malloc.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}lnode, *linklist;

lnode* linklist_create()
{
	lnode* L = (lnode*)malloc(sizeof(lnode));

	if (L==NULL)
	{
		printf("创建失败!\n");
		return NULL;
	}

	L->next=NULL;
	return L;
}

int linklist_print(linklist head)
{
	if (head->next==NULL)
	{
		printf("表空!\n");
		return 0;
	}

	lnode* p=head;

	while (p->next!=NULL)
	{
		printf("%d ", p->next->data);
		p=p->next;
	}
	printf("\n");
	return 1;
}

int linklist_add(linklist L, int num)
{
	lnode* new = (lnode*)malloc(sizeof(lnode));
	lnode* p = L;
    if (new == NULL)
    {
    	printf("创建失败\n");
    	return 0;
    }

    while (p->next!=NULL)
    {
    	if (num < p->data)
    	{
    		break;
    	}
    	p=p->next;
    }
    new->data=num;
    new->next=p->next;
    p->next=new;
    return 1;
}

void linklist_scanf(linklist head)
{
	int exit=1, input=0;

	do
	{
		printf("请输入一个数(0结束)>");
		scanf("%d", &input);
		if (input == 0)
		{
			exit=0;
		}
		else
		{
			linklist_add(head, input);
			linklist_print(head);
		}

	}while(exit);
}



int main(int argc, char const *argv[])
{
	lnode* h = (lnode*)malloc(sizeof(lnode));

	h=linklist_create();
	linklist_scanf(h );

	return 0;
}