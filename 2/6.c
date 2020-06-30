#include <stdio.h>
#include <memory.h>
int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    long long matrix_result[10][10];
    int m;
    int n;
    scanf("%d %d", &m, &n);
    
    int i;
    int j;
    for(i = 0; i < 10; i ++){
        for(j = 0; j < 10; j ++){
        matrix_result[i][j] = 0;
        }
	}
	
    int mIndex;
    int nIndex;
    
    
    for(mIndex = 0; mIndex < m; mIndex ++){
        for(nIndex = 0; nIndex < n; nIndex ++){
            scanf("%d", &matrix_a[mIndex][nIndex]);
        }
    }
    for(nIndex = 0; nIndex < n; nIndex ++){
        for(mIndex = 0; mIndex < m; mIndex ++){
            scanf("%d", &matrix_b[nIndex][mIndex]);
        }
    }
    
    for(mIndex = 0; mIndex < m; mIndex ++){
        for(nIndex = 0; nIndex < m; nIndex ++){
            for(j = 0; j < n ; j ++){
                matrix_result[mIndex][nIndex] += matrix_a[mIndex][j] * matrix_b[j][nIndex];
            }
            
        }
    }
    
    
    for(mIndex = 0; mIndex < m; mIndex ++){
        for(nIndex = 0; nIndex < m; nIndex ++){
            printf("%lld", matrix_result[mIndex][nIndex]);
            if(nIndex == m - 1 && mIndex != m - 1){
                printf("\n");
            }
			else if(nIndex == m - 1 && mIndex == m - 1){
			}
			else if(mIndex != m ){
                printf(" ");
            }
            
        }
    }
    
    
    return 0;
}
