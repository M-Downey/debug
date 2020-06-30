#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	int i = 0;
	int j = 0; 
	int chmod = 0;
	int chmod_r = 0;
	int chmod_w = 0;
	int chmod_x = 0;
	
	
	char temp[3];
	char permission[100][3];

	while (scanf("%s", temp) != EOF) {
			strcpy(permission[j], temp);
			j++;
	}
	
	for (i = 0; i < 3; i++) {
		if (permission[0][i] == 'r') {
				chmod_r = 1;
			}	
		if (permission[0][i] == 'w') {
				chmod_w = 1;
			}
		if (permission[0][i] == 'x') {
				chmod_x = 1;
			}
	}
	
	for (i = 1; i < j; i++) {
		if (permission[i][0] == '+') {
			if (permission[i][1] == 'r') {
					chmod_r = 1;
				}	
			if (permission[i][1] == 'w') {
					chmod_w = 1;
				}
			if (permission[i][1] == 'x') {
					chmod_x = 1;
				}
		}
		if (permission[i][0] == '-') {
			if (permission[i][1] == 'r') {
					chmod_r = 0;
				}	
			if (permission[i][1] == 'w') {
					chmod_w = 0;
				}
			if (permission[i][1] == 'x') {
					chmod_x = 0;
				}
		}	
	}
	chmod = chmod_r * 4 + chmod_w * 2 + chmod_x;	  
	printf("%d", chmod);
	return 0;
}
