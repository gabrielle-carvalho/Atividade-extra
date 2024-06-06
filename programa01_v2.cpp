#include <stdio.h>
main()
{
    int n, x, y;
    y=1;
    printf("Digite ");
    scanf("%d", &n);
    printf("Digite ");
    scanf("%d", &x);
    
    do {
        y=y*n;
        x=x-1;
    }
    while (x>0);
    printf("%d", y, "\n");
    }