#include<stdio.h>
void InsertionSort(int a[], int n)
{
    int j, i;
    int tmp;
    for(j = 1; j < n; j++)
    {
        tmp = a[j];
	j=i-1;
     while(temp<a[j]&&j>=0)
            a[j+1]=a[j];
	       j=j-1;
            a[j+1] = tmp;
    }
}
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements- ");
    scanf("%d",&n);
    printf("Enter the elements - ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are-  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
