#include<bits/stdc++.h>
#include<windows.h>
#define cutoff 3
void QuickSort_Core(int*,int,int);
int Midnum(int*,int,int);
void QuickSort(int*,int);
void Swap(int*,int*);
void Insertion_Sort(int*,int);
int main()
{
   int a[10]={6,8,9,3,0,1,4,7,2,5};
   LARGE_INTEGER FREQ;
   LARGE_INTEGER TIME1,TIME2;
   QueryPerformanceFrequency(&FREQ);
   QueryPerformanceCounter(&TIME1);
   for(int esc=1;esc<=100000000;++esc)
   {
   	QuickSort(a,10);
   }
   QueryPerformanceCounter(&TIME2);
   for(int b=0;b<=9;++b)
   {
   	printf("%d ",a[b]);
   }
   printf("\n%.10f",(TIME2.QuadPart-TIME1.QuadPart)*1.0/FREQ.QuadPart);
   return 0;
}
void QuickSort_Core(int in[],int left,int right)
{
	if(right-left<cutoff)
	{
		int pivot=Midnum(in,left,right);
		int i=left;int j=right-1;
		while(true)
		{
			while(in[++i]<pivot);
			while(in[--j]>pivot);
			if(i>j)
			{
				break;
			}
			else
			{
				Swap(&in[i],&in[j]);
			}
		}
		Swap(&in[i],&in[right-1]);
		QuickSort_Core(in,left,i-1);
		QuickSort_Core(in,i+1,right);
	}
	else
	{
		Insertion_Sort(in+left,right-left+1);
	}
}
void QuickSort(int in[],int n)
{
	QuickSort_Core(in,0,n-1);
}
int Midnum(int in[],int left,int right)
{
	int center=(left+right)/2;
	if(in[left]>in[right])
	Swap(&in[left],&in[right]);
	if(in[right]<in[center])
	Swap(&in[right],&in[center]);
	if(in[center]<in[left])
	Swap(&in[center],&in[left]);
	Swap(&in[center],&in[right-1]);
	return in[right-1];
}
void Swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Insertion_Sort(int in[],int n)
{
	int temp;
	for(int a=0;a<=n-1;a++)
	{
		for(int b=0;b<=n-1-a;b++)
		{
			if(in[b]>in[b+1])
			{
				temp=in[b];
				in[b]=in[b+1];
				in[b+1]=temp;
			}
		}
	}
}
