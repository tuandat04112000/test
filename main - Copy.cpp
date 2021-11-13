#include <stdio.h>

using namespace std;

int main()
{
    int i, n, a;
    printf("How many positive odd number that you want to display?");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Accept positive number only!");
    }
    printf("2");

    for(i=1,a=4; i<n; ++i)
    {
        printf(", %d", a);
        a+=2;
    }
    return 0;
}
