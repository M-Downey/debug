#include <stdio.h>

int main()
{
    int matrix_1[100][100];
    int matrix_2[100][100];
    int m;
    int n;
    int i, j;
    
	scanf("%d %d", &m, &n);

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &matrix_1[i][j]);
		}
	}
	
		
	while(m > 0 && n > 0){	
	    for(j = 0 ; j < n ; j++){
			printf("%d", matrix_1[0][j]);
			if(m == 1 && j == n - 1){
				return 0;
			}
			else{
				printf(" ");
			}    
		}
	    
		for(i = 0; i < n ; i++){
			for(j = 0 ; j < m - 1 ; j++){
				matrix_2[i][j] = matrix_1[j + 1][n - 1 - i];
			}
		}
		 
		for(i = 0 ; i < n ; i++){
			for(j = 0 ; j < m - 1 ; j++){
				matrix_1[i][j] = matrix_2[i][j];
			}
		}
		
		int t;
		t = m;
		m = n;
		n = t - 1;
	}
	
    return 1;
}
