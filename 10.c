#include<stdio.h>
void main()
{
    int a[100] , b[100],c[100],n , m;
    printf("enter no. of elements in set A(Greater no. of elements):");
    scanf("%d",&n);
    printf("enter no. of elements in set B(Lesser no. of elements):");
    scanf("%d",&m);
    printf("enter elements of set A:");

    for(int i = 0;i < n;i ++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of set B:");
     for(int i = 0;i < m;i ++)
    {
        scanf("%d",&b[i]);
    }
    int k = 0;
    for(int i = 0 ; i < n ;i ++)
    {
        for(int j = 0 ;j < m; j ++)
        {
            if (a[i] == b[j])
            {
                c[k] = b[j];
                k += 1;
                break;
            }
        }
    }
    printf("intersection of set A and set B = \n");
    for(int i = 0;i < k;i ++)
    {
        printf("%d ",c[i]);
    }

}
