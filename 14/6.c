#include <stdio.h>
int main() 
{
    int num;
    scanf("%d", &num);
    int i, j; 
    for (i = 0; i <= num; i++) {
        for (j = num - i; j >= 1; j--) {
            printf("%d", j);
            if ( j != 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
