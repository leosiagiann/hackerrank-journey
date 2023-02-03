#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *input = (char*)malloc(1024*sizeof(char));
    scanf("%s", input);
    int num[] = {0,0,0,0,0,0,0,0,0,0};
    for(int i = 0 ; i < strlen(input) ; i++){
        if(input[i] >= '0' && input[i] <= '9'){
            int number = (int)input[i] - 48;
            num[number]++;
        }
    }
    int len = sizeof(num)/sizeof(num[0]);
    for(int i = 0 ; i < len ; i++){
        printf("%d ", num[i]);
    }
    return 0;
}