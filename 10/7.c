#include <stdio.h>
int main() 
{
    int a;
    int i;
    int j;
    scanf("%d", &a);
    if(a == 2){
        printf("2\n");
        return 0; 
    }
    else{
        printf("2\n");
        for(j = 2; j <= a; j++){
            for(i = 2; i < j; i++){
                if(j % i == 0){
                    break;
                }
                if(i == j - 1){
                    printf("%d\n", j);
                }
            }
        }
    }

    return 0;
}