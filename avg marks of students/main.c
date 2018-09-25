#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] ,i,sum=0,count=0;
    float avg ;
    printf("enter the marks of the students\n");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0 ; i<5 ; i++)
    {
        sum = sum+x[i] ;
    }
    printf("sum is %d\n", sum);
    for(i=0 ; i<5 ; i++)
    {
        count++ ;
    }
    avg = sum/(float)count ;
    printf("avg is %f\n",avg );
    getch();
    return 0;
}
