#include<stdio.h>
#include<string.h>

struct book
{
	char bname[30];
	char bauthor_name[100];
	int bISBN_code;
	int  bprice;
};

int main()
{

    struct book b;
    gets(&b.bname);
    gets(&b.bauthor_name);
	scanf("%d",&b.bISBN_code);
	scanf("%d",&b.bprice);

	printf("bname: %s \n",b.bname);
	printf("bauthor_name: %s \n",b.bauthor_name);
	printf("bISBN_code: %d \n",b.bISBN_code);
	printf("bprice: %d \n",b.bprice);

	return 0;
}
    