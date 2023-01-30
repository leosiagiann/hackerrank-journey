#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    scanf("%c", &ch);
    char *s = (char *)malloc(sizeof(s));
    scanf("%s", s);
    char *sen = (char *)malloc(sizeof(sen));
    scanf(" %[^\n]*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}