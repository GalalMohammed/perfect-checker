#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
    printf("Enter the number:");
    int n,s=0;
    scanf("%d",&n);
    for (int i=n-1;i>0;i--)
    {
        if (n%i==0)
            s+=i;
    }
    if (s==n)
        printf("The number is perfect.\n\n");
    else
        printf("The number isn't perfect.\n\n");
    }
    return 0;
}
