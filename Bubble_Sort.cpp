#include<stdio.h>
void Bubble_Sort(int*,int);
int main()
{
	int num;scanf("%d",&num);getchar();
	int array[100];int a;
	for(a=0;a<=num-1;a++)
	{
		scanf("%d",&array[a]);getchar();
	}
	Bubble_Sort(array,num);int b;
	for(b=0;b<=num-1;b++)
	{
		printf("%d ",array[b]);
	}
    return 0;
}
void Bubble_Sort(int in[],int n)
{
	for(int a=0;a<=n-1;a++)
	{
		for(int b=0;b<=n-1-a;b++)
		{
			if(in[b]>in[b+1])
			{
				int temp;
				temp=in[b];
				in[b]=in[b+1];
				in[b+1]=temp;
			}
		}
	}
}
