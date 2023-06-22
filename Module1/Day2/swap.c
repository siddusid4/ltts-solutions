#include<stdio.h>
void swap(void *p1,void *p2,int s)
{
    char temp1;
    int temp2;
    double temp3;
    
    switch(s)
    {
        case 1:
        temp1=*(char*)p1;
        *(char*)p1=*(char*)p2;
        *(char*)p2=temp1;
        break;
        case 4:
        
        temp2=*(int*)p1;
        *(int*)p1=*(int*)p2;
        *(int*)p2=temp2;
        break;
        case 8:
        temp3=*(double*)p1;
        *(double*)p1=*(double*)p2;
        *(double*)p2=temp2;
        break;
        

    }
   
}
int main()
{
    int x=2,y=3;
    char a='a',b='b';
    double i=2.8,j=3.33;
    void *p1,*p2;
    p1=(void*)&x;
    p2=(void*)&y;
    swap(p1,p2,sizeof(x));
    printf("\n%d %d",x,y);
     p1=(void*)&a;
    p2=(void*)&b;
    swap(p1,p2,sizeof(a));
    printf("\n%c %c",a,b);
     p1=(void*)&i;
    p2=(void*)&j;
    swap(p1,p2,sizeof(i));
    printf("\n%lf %lf",i,j);
    return 0;
}
