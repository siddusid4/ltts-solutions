#include<stdio.h>

struct box
{
	int l;
	int b;
	int h;
	int vol;
	int tsa;
};
struct box findusingdot(struct box b1)
{
	b1.vol=b1.b*b1.h*b1.l;
	b1.tsa=(2*b1.b*b1.h)+(2*b1.b*b1.l)+(2*b1.h*b1.l);
	return b1;
}
void findusingarrow(struct box *ptr)
{
	ptr->vol=ptr->b*ptr->h*ptr->l;
	ptr->tsa=(2*ptr->b*ptr->h)+(2*ptr->b*ptr->l)+(2*ptr->h*ptr->l);
}
void findusingptr(struct box *pt)
{
	(*pt).vol=(*pt).b*(*pt).h*(*pt).l;
	(*pt).tsa=(2*(*pt).b*(*pt).h)+(2*(*pt).b*(*pt).l)+(2*(*pt).h*(*pt).l);
}
int main()
{
	struct box b1;
	scanf("%d %d %d",&b1.b,&b1.h,&b1.l);
	struct box b2;
	scanf("%d %d %d",&b2.b,&b2.h,&b2.l);
	struct box b3;
	scanf("%d %d %d",&b3.b,&b3.h,&b3.l);
	b1=findusingdot(b1);
	printf("\n%d %d ",b1.vol,b1.tsa);
	findusingarrow(&b2);
	printf("\n%d %d ",b2.vol,b2.tsa);
	findusingptr(&b3);
	printf("\n%d %d ",b3.vol,b3.tsa);
}
