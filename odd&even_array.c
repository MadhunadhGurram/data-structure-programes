#include<stdio.h>
void main()
{
	int arr[20],i,q=0,p=0,even[20],odd[20],n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter any %d numbers:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("the seperation of even and odd");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[p]=arr[i];
			p++;
		}
		else
		{
			odd[q]=arr[i];
			q++;
		}
		printf("even array is");
		for(i=0;i<p;i++)
		printf("even numbers are %d",i);
		printf("odd array is");
		for(i=0;i<q;i++)
		printf("odd numbers are %d",q);
	}
}
