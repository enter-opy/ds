#include<stdio.h>
int i,j,n;
void read(int a[],int n);
void qsort(int a[],int l,int r);
int partition(int a[],int l,int r);
void swap(int *p,int *q);
void display(int a[],int n);
void main()
{
	int x[50];
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	read(x,n);
}
void read(int a[],int n)
{
	
	printf("Enter array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,0,(n-1));
	display(a,n);
}
void qsort(int a[],int l,int r)
{
	int pos;
	if(l<r)
	{
		pos=partition(a,l,r);
		qsort(a,l,(pos-1));
		qsort(a,(pos+1),r);
	}
}
int partition(int a[],int l,int r)
{
	l=0,r=n-1;
	int i=l+1,j=r,key=a[l];
	do
	{
		while(a[i]<key && i<r)
			i++;
		while(a[j]>key && j>l)
			j--;
		if(i<j)
			swap(&a[i],&a[j]);
	}
	while(i<j);
	swap(&a[l],&a[j]);
	return j;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void display(int a[],int n)
{
	printf("Sorted array is:");
	for(i=0;i<n;i++)
		printf("\n %d",a[i]);
}