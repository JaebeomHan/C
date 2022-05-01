#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    
    separate(a);
}

void separate(double n)
{
    printf("%d\n%g", (int)n, n-(int)n);
}

// 나중에할래..