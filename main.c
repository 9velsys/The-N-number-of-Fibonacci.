#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,a,b=0,n,c=1;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        a = b;
        b = c;
        c = a + b;
    }printf("The Fibonacci's %d number is %d",n,c);
    return 0;
}
