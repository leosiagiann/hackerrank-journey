#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a1, a2;
    float b1, b2;
    scanf("%d %d %f %f", &a1, &a2, &b1, &b2);
    printf("%d %d\n%.1f %.1f", (a1 + a2), (a1 - a2), (b1 + b2), (b1 - b2));
    return 0;
}