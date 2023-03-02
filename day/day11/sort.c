/*
	题目：请使用任意一种链表，
	使用任意一种排序算法对链表内的节点从小到大进行排序
	(把排序算法封装为函数，只需要写排序部分即可)

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}lnode, *linklist;

//创建头节点
lnode* linklist_create()
{
	lnode* head = (lnode*)malloc(sizeof(lnode));
	if (head == NULL)
	{
		printf("创建失败!\n");
		return NULL;
	}
    
    head->next = NULL;
    return head;
}


//尾插法
int linklist_add(linklist head, int num)
{
	lnode* new = (lnode*)malloc(sizeof(lnode));
	if (new == NULL)
	{
        printf("表空!\n");
        return 0;
	}
    
    lnode* p=NULL;

    for (p=head; p->next!=NULL; p=p->next);

    new->data = num;
    new->next = NULL;
    p->next = new;
    return 1;
}

//排序
//思路:将原表的数据按个最小结点,逐个尾插到新表中
//1.创建一个新头节点h
//2.在原表中找到最小结点
//3.插入到新表h中
//4.销毁原表的头节点
lnode* linklist_sort(linklist head)
{

//1.创建一个新头节点h
	lnode* h = (lnode*)malloc(sizeof(lnode));

	if (h == NULL)
	{
		printf("表空!\n");
		return NULL;
	}
	h->next=NULL;

	lnode* pre = head;
	lnode* cmp = head;

	while (pre->next != NULL)
	{

//2.在原表中找到最小结点
		lnode* min_p = cmp->next;
		int min=cmp->next->data;
		while (cmp->next->next != NULL)
		{
			if (cmp->next->data < min)
			{
				min = cmp->next->data;
				min_p = cmp->next; 
			}
		}

//3.插入到新表h中
		linklist_add(h, min_p->data);
		lnode* p = min_p;
		free(cmp->next);
		min_p = min_p->next;
		pre = pre->next;
	}

//4.销毁原表的头节点
    free(pre);
    return h;
}

void linklist_scanf(linklist head)
{
	int  input=0;

	while (1)
	{
		printf("input a number(0 end)>");
		scanf("%d", &input);

		if (input !=0)
		{
			linklist_add(head, input);
		}

		if (input == 0)
		{
			break;
		}
		//printf("111\n");
	}
	//printf("222\n");
}

int linklist_print(linklist head)
{
	if (head->next == NULL)
	{
		printf("表空!\n");
		return 0;
	}
	//printf("33333\n");
    
    lnode* p = head->next;
	while (p != NULL)
	{
		//printf("4444\n");

		printf("%d\n", p->data);
		p=p->next;
	}

		//printf("5555\n");


	return 1;
}


int main(int argc, char const *argv[])
{
	lnode* h = linklist_create();

	linklist_scanf( h);
	linklist_print( h);

	linklist_sort( h);
	linklist_print( h);
	return 0;
}