#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m;
    int n;

    int k = 0;
    int l = 0;
    scanf("%d %d", &m, &n);
    
    int i, j; 
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

      
    while (k < m && l < n){
        for (i = l; i < n; i++){
            printf("%d", matrix[k][i]);
            if(k == m - 1 && i == n - 1){
            	return 0;
	    }
	    else{
		printf(" ");
	    }

        }
        k++;
 
        for (i = k; i < m; i++){
            printf("%d", matrix[i][n - 1]);
            if(l == n - 1 && i == m - 1){
            	return 0;
	    }
	    else{
	        printf(" ");
	    }
        }
        n--;
 
        for (i = n - 1; i >= l; i--){
            printf("%d", matrix[m - 1][i]);
            if(k == m - 1 && i == l){
            	return 0;
	    }
	    else{
	        printf(" ");
	    }
        }
        m--;
 
        for (i = m - 1; i >= k; i--){
            printf("%d", matrix[i][l]);
            if(l == n - 1 && i == k){
            	return 0;
	    }
	    else{
		printf(" ");
	    }
        }
        l++;
    }
    return 0;
}
