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
