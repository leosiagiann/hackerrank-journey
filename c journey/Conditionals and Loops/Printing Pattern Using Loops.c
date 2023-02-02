#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void drawLeftUp(int i, int j, int n, int index){
    if(i > 1 && j > 1){
        if(j < i){
            int selisih = abs(i - j);
            int result = selisih + index;
            printf("%d ", result);
        }else{
            printf("%d ", index);
        }
    }else{
        printf("%d ", n);
    }
}

void drawRightUp(int i, int j, int n, int index){
    if(i > 1 && j < (n - 1)){
        if(j <= n - i){
            printf("%d ", index);
        }else{
            int jumlah = (n - 1) - index;
            int selisih = (n - 1) - j;
            int tambahan = jumlah - selisih + 1;
            int result = index + tambahan;
            printf("%d ", result);
        }
    }else{
        printf("%d ", n);
    }
}

void drawLeftDown(int i, int j, int n, int index){
    if(i < (n - 1) && j > 1){
        if((n - 1) - j >= index - 1){
            int selisih = (n - 1) - index;
            int start = j - 2;
            int tambahan = index + (selisih - start);
            printf("%d ", tambahan);
        }else{
            printf("%d ", index);
        }
    }else{
        printf("%d ", n);
    }
}

void drawRightDown(int i, int j, int n, int index){
    if(i < (n - 1) && j < (n - 1)){
        if(j < index){
            printf("%d ", index);
        }else{
            int jumlah = (n - 1) - index;
            int selisih = abs(i - j);
            int tambahan = index + selisih;
            printf("%d ", tambahan);   
        }
    }else{
        printf("%d ", n);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
    int index;
    int start = 1;
    for(int i = 1 ; i < n*2 ; i++){
       for(int j = 1 ; j < n*2 ; j++){
           if(i < n){
               index = n - (i-1);
               if(j == n){
                    if(i < n){
                        printf("%d ", n - (i - 1));
                    }
                }else if(j < n){
                    drawLeftUp(i, j, n, index);
                }else{
                    int changeJ = j - n;
                    drawRightUp(i, changeJ, n, index);
                }
           }else if(i == n){
               if(j <= n){
                   printf("%d ", n - (j-1));
                }
                else if(j == n){
                   printf("%d ", n - (n - 1));
                }else{
                   printf("%d ", j - (n - 1));
                }
            }else{
                index = i - (n - 1);
                int changeI = i - n;
                int changeJ = j - n;
                if(j == n){
                    printf("%d ", i - (n - 1));
                }else if(j < n){
                    drawLeftDown(changeI, j, n, index);
                }else{
                    drawRightDown(changeI, changeJ, n, index);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
