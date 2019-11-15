#include<stdio.h>
#include<string.h>
void main()
{
char str[50],pat[20];
int i=0,j=0,k,flag=0,lens,lenp;
printf("enter the string:-");
scanf("%s",&str);
printf("enter the pattern:-");
scanf("%s",&pat);
lens=strlen(str);
lenp=strlen(pat);
while(i<lens&&j<lenp)
{
if(j==0)
	{
		k=i;
	}
if(str[i]==pat[j])
	{
		i++;
		j++;	
		flag=1;
	}
else
	{
		i=k+1;
		j=0;
		flag=0;
	}
}
if(flag==1&j==lenp)
	{
		printf("pattern is present\n");
	}
	else
	{
		printf("pattern is not present\n");
	}
	i=k+lenp;
	
	while(str[i]!='\0')
	{
		str[k]=str[i];
		k++;
		i++;
	}
printf("string after deletion\n ");
pstr[k]='\0';
rintf("%s\n",str);
}		
