#include<stdio.h>
void read(int a[]);
void mergesort(int a[],int f,int l);
void smerge(int a[],int f,int s,int t);
void print(int a[],int n);
void main()
{
	int x[100];
	read(x);
}
void read(int a[])
{
	int i,n,s,flag=0,key;
	printf("Enter number of elements in the array=");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,(n-1));
	print(a,n);
}
void mergesort(int a[],int f,int l)
{
	int m;
	if(f<l)
	{
		m=(f+l)/2;
		mergesort(a,f,m);
		mergesort(a,(m+1),l);
		smerge(a,f,(m+1),l);
	}
}
void smerge(int a[],int f,int s,int t)
{
	int i=f,j=s,k=0,temp[10];
	while(i<s && j<=t)
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else if(a[i]>a[j])
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	while(i<s)
	{
		temp[k]=a[i];
		i++;
		k++;
	}
	while(j<=t)
	{
		temp[k]=a[j];
		j++;
		k++;
	}
	for(i=f,j=0;j<k;)
	{
		a[i]=temp[j];
		j++;
		i++;
	}
}
void print(int a[],int n)
{
	int i;
	printf("Sorted array");
	for(i=0;i<n;i++)
		printf("\n %d",a[i]);
}