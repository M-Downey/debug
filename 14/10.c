#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = n - i + 1; j >= 1; j--){
            printf("%d", j);
            if(j > 1){
                printf(" ");
            }
        }
        if(i < n){
            printf("\n");
        }
    }
    return 0;
}
