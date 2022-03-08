#include<stdio.h>
#define size 50
int Q[size],item,f=-1,r=-1;
int isempty();
int isfull();
void insertrear(int item);
int deletefront();
void insertfront(int item);
int deleterear();
void display();
void main()
{
	int ch;
	printf("1.insertrear \n2.deleterear \n3.insertfront \n4.deletefront \n5.display queue \n6.exit");
	do
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter the number to be inserted in rear:");
				scanf("%d",&item);
				insertrear(item);
				break;
			case 2:item=deleterear();
				if(item!=-1)
					printf("Item in rear is %d",item);
				break;
			case 3:printf("\nEnter the number to be inserted in front:");
				scanf("%d",&item);
				insertfront(item);
				break;
			case 4:item=deletefront();
				if(item!=-1)
					printf("Item in front is %d",item);
				break;
			case 5:display();
				break;
			case 6:break;
			default:printf("Invalid choice");
		}
	}while(ch!=6);
}
int isempty()
{
	if (f==-1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(f==(r+1)%size)
		return 1;
	else
		return 0;
}
void insertrear(int item)
{
	if(isfull())
	{
		printf("Queue is full");
	}
	else
	{
		if(f==-1)
		{
			f=r=0;
		}
		else
		{
			r=(r+1)%size;
		}
		Q[r]=item;
	}
}
int deletefront()
{
	if(isempty())
	{
		printf("Queue is empty");
		return -1;
	}
	else
	{
		item=Q[f];
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			f=(f+1)%size;
		}
		return item;
	}
}
void insertfront(int item)
{
	if(isfull())
	{
		printf("Queue is full");
	}
	else
	{
		if(f==-1)
		{
			f=r=0;
		}
		else
		{
			f=(f+(size-1))%size;
		}
		Q[f]=item;
	}
}
int deleterear()
{
	if(isempty())
	{
		printf("Queue is empty");
		return -1;
	}
	else
	{
		item=Q[r];
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			r=(r+(size-1))%size;
		}
		return item;
	}
}
void display()
{
	int i;
	printf("Queue is:");
	for(i=f;i!=r;i=(i+1)%size)
		printf("%d \n",Q[i]);
	printf("%d \n",Q[r]);
}