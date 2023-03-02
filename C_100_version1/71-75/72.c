/*

    题目：创建一个链表。 

*/

#include <stdio.h>
#include <malloc.h>

// #define MAXSIZE 10

typedef struct lnode{
	int data;
	struct lnode* next;
}lnode, *linknode;

lnode* linknode_create()
{
    lnode* head = (lnode*)malloc(sizeof(lnode));
	if (head == NULL)
	{
		printf("创建失败!\n");
		return NULL;
	}
	
	head->next=NULL;

	return head;
}

int linknode_add(linknode head, int num)
{
	lnode* new = (lnode*)malloc(sizeof(lnode));

	if (new == NULL)
	{
		printf("创建失败!\n");
		return -1;
	}

	lnode* p=NULL;

	for (p=head; p->next != NULL; p=p->next);

    new->data = num;
	new->next = NULL;
    p->next = new;
    

    // printf("-------------\n");
    // printf("%d : %p\n", (num+1)/2, new);
    // printf("%d\n", num);
    return 1;
}


int linknode_show(linknode head)
{
	lnode* p = head;
    // printf("p : %p\n", p);
    // printf("111111!\n");
	if (p->next == NULL)
	{
		printf("表空!\n");
		return 0;
	}

    // printf("p->next : %p\n", p->next);
    
	while (p->next != NULL)
	{
		//printf("2222222!\n");
		printf("%d\t", p->data);
		p=p->next;
	}

	return 1;
}

int main(int argc, char const *argv[])
{
	lnode* L = linknode_create();
    
    int i=0, n=0;
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
    	linknode_add(L, 2*i-1);
    }

    // printf("L : %p\n", L);
    // printf("L->next : %p\n", L->next);

    linknode_show(L);

	return 0;
}




//答案
// struct list 
// { int data; 
// struct list *next; 
// }; 

// typedef struct list node; 
// typedef node *link; 

// void main() 
// { 
// 	link ptr,head; 
// 	int num,i; 
// 	ptr=(link)malloc(sizeof(node)); 
// 	ptr=head; 

// 	printf("please input 5 numbers==>\n"); 

// 	for(i=0;i<=4;i++) 
// 	{ 
// 		scanf("%d",&num); 
// 		ptr->data=num; 
// 		ptr->next=(link)malloc(sizeof(node)); 
// 		if(i==4) ptr->next=NULL; 
// 		else ptr=ptr->next; 
// 	} 

// 	ptr=head; 

// 	while(ptr!=NULL) 
// 	{ 
// 		printf("The value is ==>%d\n",ptr->data); 
// 		ptr=ptr->next; 
// 	} 
// } 
