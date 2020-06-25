#include <stdio.h>
#include <string.h>
int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix_b[i][j]);
        }
    }
    int result[m][m];
    memset(result,0,sizeof(int)*m*m);
    //¾ØÕóÏà³Ë ·ÅÈëresult
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k <n ; k++){
                result[i][j] += matrix_a[i][k]*matrix_b[k][j];
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d", result[i][j]);
            if(j != m-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
