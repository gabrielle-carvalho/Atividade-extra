#include <stdio.h>
main()
{
    int x, y;
    y=1;
    printf("Digite ");
    scanf("%d", &x);
    
    do {
        y=y*x;
        x=x-1;
    }
    while (x>0);
    printf("%d", y, "\n");
    }