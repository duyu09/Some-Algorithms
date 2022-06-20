#include<stdio.h>
void Choice_Sort(int*,int);
int main()
{
	int num;scanf("%d",&num);getchar();
	int array[100];int a;
	for(a=0;a<=num-1;a++)
	{
		scanf("%d",&array[a]);getchar();
	}
	Choice_Sort(array,num);int b;
	for(b=0;b<=num-1;b++)
	{
		printf("%d ",array[b]);
	}
   return 0;
}
void Choice_Sort(int in[],int n)
{
	int a;
	for(a=0;a<=n-1;a++)
	{
		int b;
		for(b=a;b<=n-1;b++)
		{
			if(in[a]>in[b])
			{
				int temp;
				temp=in[a];
				in[a]=in[b];
				in[b]=temp;
			}
		}
	}
}
