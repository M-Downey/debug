#include <stdio.h>

int main() {
    int n = 10;
    int min;
    int numbers[10];
    int i,j,k;

    // 读入给定的数字
    for (i = 0; i < 10; i++) {
    	scanf("%d", &numbers[i]);
	}
	for (j = 0; j < 9; j++) {
		for (k = 0; k < 9 - j; k++) {
			if (numbers[k] < numbers[k + 1]) {
				min = numbers[k];
				numbers[k] = numbers[k + 1];
				numbers[k + 1] = min;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d", numbers[i]);
		if (i < 9) {
		    printf(" ");
		}
	}	
    
    return 0;
}
