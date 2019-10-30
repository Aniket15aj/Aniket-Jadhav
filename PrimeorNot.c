#include <stdio.h>
int main()
{
    int i,n,count=0,flag;
 
    printf("Enter number to check prime number or not");
    scanf("%d",&n);
 
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
        printf("%d is a prime number.",n);
        printf("\n\n");
    else
        printf("%d is not a prime number.",n);

}
