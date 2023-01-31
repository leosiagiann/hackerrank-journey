#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char number[9][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = a ; i <= b ; i++){
        if(i < 10){
            printf("%s\n", number[i-1]);
        }else{
            (i % 2 == 0) ? printf("even\n") : printf("odd\n");
        }
    }
    return 0;
}