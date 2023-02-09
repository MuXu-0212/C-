#include <stdio.h>

int main(int argc, char const *argv[])
{
	char* c=NULL;
	short* s=NULL; 
	int* i=NULL;
	float* f=NULL;
	double* d=NULL;
	long* l=NULL;
	long long* ll=NULL;

	printf("char*(字符型指针) : %ld\n", sizeof(c));
	printf("short*(短整型指针) : %ld\n", sizeof(s));
	printf("int*(整型指针) : %ld\n", sizeof(i));
	printf("float*(单浮点型指针) : %ld\n", sizeof(f));
	printf("double*(双浮点型指针) : %ld\n", sizeof(d));
	printf("long*(长整型指针) : %ld\n", sizeof(l));
	printf("long long*(长长整型指针) : %ld\n", sizeof(ll));

	printf("-------------------------------------------------\n");

	printf("char*(字符型指针) : %ld\n", sizeof(*c));
	printf("short*(短整型指针) : %ld\n", sizeof(*s));
	printf("int*(整型指针) : %ld\n", sizeof(*i));
	printf("float*(单浮点型指针) : %ld\n", sizeof(*f));
	printf("double*(双浮点型指针) : %ld\n", sizeof(*d));
	printf("long*(长整型指针) : %ld\n", sizeof(*l));
	printf("long long*(长长整型指针) : %ld\n", sizeof(*ll));

	printf("-------------------------------------------------\n");

	printf("char*(字符型指针) : %x\n", c);
	printf("short*(短整型指针) : %x\n", s);
	printf("int*(整型指针) : %x\n", i);
	printf("float*(单浮点型指针) : %x\n", f);
	printf("double*(双浮点型指针) : %x\n", d);
	printf("long*(长整型指针) : %x\n", l);
	printf("long long*(长长整型指针) : %x\n", ll);

	return 0;
}