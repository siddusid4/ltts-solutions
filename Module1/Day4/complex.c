#include<stdio.h>
struct cn
{
	int real;
	int img;
};
struct cn sum(struct cn a,struct cn b)
{
	struct cn sum;
	sum.real=a.real+b.real;
	sum.img=a.img+b.img;
	return sum;
}
struct cn write(struct cn *ptr)
{
	scanf("%d %d",&(ptr->real),&(ptr->img));	
}
struct cn read(struct cn *ptr)
{
	printf("%d %d",(ptr->real),(ptr->img));	
}
struct cn mul(struct cn a,struct cn b)
{
	struct cn res;
	res.real=(a.real*b.real)-(a.img*b.img);
	res.img=(a.real*b.img)+(a.img*b.real);
	return res;
}

int main()
{
	struct cn a,b,res;
	write(&a);
	write(&b);
	res=sum(a,b);
	printf("sum = %d+i%d\n",res.real,res.img);
	res=mul(a,b);
	printf("sum = %d+i%d\n",res.real,res.img);
	
}
