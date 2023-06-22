#include<stdio.h>
struct box
{
	int l;
	int b;
	int h;
};
int main()
{
	struct box b1,b2,temp;
	scanf("%d %d %d",&b1.b,&b1.h,&b1.l);
	scanf("%d %d %d",&b2.b,&b2.h,&b2.l);
	temp=b1;
	b1=b2;
	b2=temp;
	printf("\n%d %d %d\n",b1.b,b1.h,b1.l);
	printf("%d %d %d",b2.b,b2.h,b2.l);
}
