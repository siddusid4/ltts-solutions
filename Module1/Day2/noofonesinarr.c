#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int re,quo,i;
	int arr[size];
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	int count=0;
	
	for(i=0;i<size;i++)
	{
		while(arr[i]!=0)
		{
			re=arr[i]%2;
			if(re==1)
			count++;
			arr[i]/=2;
		}
	}
	printf("%d",count);
}
