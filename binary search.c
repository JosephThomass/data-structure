 #include <stdio.h>
    
    void main()
    {
       int i, first, lst, mid, n, s, a[100];
    
       printf("Enter number of elements\n");
       scanf("%d",&n);
    
       printf("Enter %d integers\n", n);
    
       for (i = 0; i < n; i++)
          scanf("%d",&a[i]);
    
       printf("Enter value to find\n");
       scanf("%d", &s);
    
       first = 0;
       lst = n - 1;
       mid = (first+lst)/2;
    
       while (first <= lst)
        {
          if (a[mid] < s)
             first = mid + 1;   
          else if (a[mid] == s)
            {
                 printf("%d found at location %d.\n", s, mid+1);
                 break;
              }
          else
             lst = mid - 1;
        
          mid = (first + lst)/2;
           }
       if (first > lst)
          printf("%d Not found!\n", s);
    
       
    }
