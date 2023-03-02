/*

    题目：找到年龄最大的人，并输出。
    请找出程序中有什么问题。  

*/


#include <stdio.h>

#define N 4

static struct man
{ 
    char name[20];
    int age;
} person[N]={"li",19,"wang",18,"zhang",20,"sun",22};

int main()
{
    struct man *q,*p;
    int i,m=0;
    p=person;
    for (i=0;i<N;i++)
    {
        if(m < p->age)
            q=p++;
        m=q->age;   
    }
    printf("%s,%d\n",(*q).name,(*q).age);
    return 0; 
}

/*

person[N]={“li”,18,“wang”,19,“zhang”,20,“sun”,22}; 输出sun,22 。
person[N]={“li”,19,“wang”,18,“zhang”,20,“sun”,22}; 输出 li,19。

    第一个结构体数组很容易误导人，换成第二个就一眼看出哪有问题了：
    即当前一个数组元素比后一个数组元素大时，指针p便不会后移了。

程序分析：
    if(m< p->age) q=p++; 这句，只有当m< p->age的时候，才能够执行p++操作；

    换句话说，不满足m< p->age时，p无法遍历后边的数组。而实际应该是：
        无论怎样，都要始终执行p++，直至数组末尾。

*/
