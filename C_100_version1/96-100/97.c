#include <stdio.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}lnode, *linklist;

// int linklist_sort(linklist head)
// {
//     if (head->next == NULL)
//     {
//     	printf("表空!\n");
//     	return 0;
//     }
    
//     lnode* pre=head;
//     lnode* p=head->next;

//     while (pre->next != NULL)
//     {
//         int min=pre->next->data;
//         lnode* pmin = pre->next;
//         lnode* premin = pre;

//     	while (p->next != NULL)
//     	{
//             if (p->data < min)
//             {
                
//             }
//             p=p->next;
//     	}

//     	pre=pre->next;
//     }
// }

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

int linklist_sort(linklist head)
{
	lnode* h = (lnode*)malloc(sizeof(lnode));

	if (h == NULL)
	{
		printf("表空!\n");
		return 0;
	}
	h->next=NULL;

	lnode* p=NULL;
	lnode* pre=head;
	lnode* temp_p=NULL;
	lnode* temp_pre=NULL;

	while (head->next != NULL)
	{
		lnode* min_p = head->next;
		int min=head->next->data;

		for ( temp_p=head->next, temp_pre=head;
			    temp_p != NULL;
			    temp_p=temp_p->next
			    temp_pre=temp_pre->next)
		{
			if (p->data < min)
			{
				min = temp_p->data;
				min_p = temp_p;
				min_pre = temp_pre;
			}
		}

		min_pre=min_p->next;

		linklist_add(h, min);
        free(min_p);	
	}
    
    head = h;
    return 1;

}


int main(int argc, char const *argv[])
{
	
	return 0;
}