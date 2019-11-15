#include<stdio.h>
void main()

{
int a[100],i,n,x,c=0;
printf("Enter the number of terms:-");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	printf("Enter the element %d th element:-",i+1);
	scanf("%d",&a[i]);
	}
printf("Enter the number to be searched:-");
scanf("%d",&x);
for(i=0;i<n;i++)
	{
		if(a[i]==x)
			{
			c=1;
			}
		else
			{	
			c=0;
			}
	}
if (c==0)
	{
	printf("**number not found**\n");
	}
else
	{
	printf("number found in '%dth' position",i);
	}

	
}
