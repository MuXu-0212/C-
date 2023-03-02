/*

    题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
    凡报到3的人退出圈子，问最后留下的是原来第几号的那位。 

*/

#include <stdio.h>
#include <malloc.h>


//答案
int main()
{
	int i,a[100],n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	i=1;
	int t=0,m=0;
	while(m!=n-1)
	{
		t++;
		if(t!=3)
		{
			a[i+n-m]=a[i];
            printf("%d-%d-%d\n",a[i],a[i+n-m],i+n-m);
		}
		else
		{
			m++;
			t=0;
		}
		i++;
	}
 	printf("%d\n",a[i+n-m-1]);
	return 0;
}

/*
// typedef struct student{
// 	int id;
// 	struct student* next;
// }stu;


// stu* stu_create()
// {
// 	stu* head = (stu*)malloc(sizeof(stu));

// 	if (head == NULL)
// 	{
// 		printf("创建失败!\n");
// 		return NULL;
// 	}
    
//     head->next=head;
// 	return head;
	
// }

// int stu_add(stu* head, int num)
// {
// 	stu* new=(stu*)malloc(sizeof(stu));
// 	stu* p=head;

// 	if(new == NULL)
// 	{
// 		printf("创建失败!\n");
// 		return 0;
// 	}
    
//     for (p=head->next; p->next!=head; p=p->next);

//     new->id = num;
// 	new->next = head;
// 	p->next = new;
    
// 	printf("%d\n", p->next->id);

//     return 1;
// }

// int stu_delete(stu* head, stu* pre, stu* p)
// {
// 	if (p == head)
// 	{
//         return 0;
// 	}

//     stu* temp = p;
//     pre->next = p->next;
//     free(temp);

//     return 1;
//     // temp = NULL;
// }

// int stu_show(stu* head)
// {
// 	stu* p=NULL;
// 	if (head->next == head)
// 	{
// 		printf("表空!\n");
// 		return 0;
// 	}

// 	for (p=head->next; p!=head; p=p->next)
// 	{
//         printf("%d\t", p->id);
// 	}
    
//     printf("\n");
// }


// int main(int argc, char const *argv[])
// {
// 	int i=0, count=0, n=0;
// 	scanf("%d", &n);
// 	stu* L=stu_create();

// 	for (i=1; i<=n; i++)
// 	{
// 		stu_add(L, i);
// 	}
    
//     stu* pre=L;
//     stu* p=L->next;
    
//     // stu_delete(pre, p);
//     // stu_show(L);

// 	while (1)
// 	{
// 		count++;
// 		printf("count=%d\n", count);

// 		if (p->next==L)
// 		{
// 			stu* pre=L;
//     		stu* p=L->next;
// 		}

// 		if (L->next->next == L)
// 		{
//             printf("%d\n", L->next->id);
// 			break;
// 		}
 
// 		//printf("222222\n");
// 		if (count == 3)
// 		{
// 			count=0;
// 			stu_delete(L, pre, p);
// 			stu_show(L);

// 			p=pre->next;
// 			continue;
// 		}
        
// 		//printf("444444\n");

// 		pre=pre->next;
//         p=pre->next;
// 	}
// 	return 0;
// }
*/



