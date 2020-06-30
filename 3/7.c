#include <stdio.h>
int main() 
{
    int matrix[100][100];
    int m;
    int n;
    int i;
    int j;
    int startX;
    int startY;
    int endX;
    int endY;
   
    startX = 0;
    startY = 0;
    endX = m;
    endY = n;
   
    scanf("%d %d", &m, &n);
    
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
   
    while (m > 0 && n > 0) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                if (startX == endX && j == endY) {
                	return 0;
                }
                else
                {
                	printf(" ");
				}
            }
          
            for (j = startX + 1; j <= endX; j++) {
                printf("%d", matrix[j][endY]);
                if (startY == endY && j == endX){
                	return 0;
                }
                else{
                	printf(" ");
				}
            }

            for (j = endY - 1; j >= startY; j--){
                printf("%d", matrix[endX][j]);
                if (startX == endX - 1 && j == startY){
                    return 0;
                }
                else{
                	printf(" ");
				}
            }

            for (j = endX - 1; j >= startX + 1; j--){
                printf("%d", matrix[j][startX]);
                if (startY == endY - 1 && j == startX + 1){
                    return 0;
                }
                else{
                	printf(" ");
				}
            }
            
        startX++;
        startY++;
    }
    
    return 1;
}
