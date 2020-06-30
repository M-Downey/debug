#include <stdio.h>
#include <string.h>

int main() 
{
    int i = 0;
    int counter = 0;
	char temp[100005][4];
    char name[4];
    int s[3] = {0};
    while (scanf("%s", name) != EOF) {
        strcpy(temp[i], name);
        i++;
    }
    
    for (int j = 0; j < 3; j++) {
        if ((temp[0][j] == 'w')) {
            counter += 2;
            s[1] = 1;
    	} else if ((temp[0][j] == 'r')) {
            counter += 4;
            s[0] = 1;
    	} else if ((temp[0][j] == 'x')) {
            counter += 1;
            s[2] = 1;
    	}
    }
    
    for(int a = 1; a < 100005; a++) {
        if ((temp[a][0] == '+' && temp[a][1] == 'r' && s[0] == 0)) {
            counter += 4;
            s[0] = 1;
        } else if((temp[a][0] == '+' && temp[a][1] == 'w' && s[1] == 0)) {
            counter += 2;
            s[1] = 1;
        } else if((temp[a][0] == '+' && temp[a][1] == 'x' && s[2] ==0)) {
            counter += 1;
            s[2] = 1;
        } else if((temp[a][0] == '-' && temp[a][1] == 'r' && s[0] == 1)) {
            counter -= 4;
            s[0] = 0;
        } else if((temp[a][0] == '-' && temp[a][1] == 'w' && s[1] == 1)) {
            counter -= 2;
            s[1] = 0;
        } else if((temp[a][0] == '-' && temp[a][1] == 'x' && s[2] == 1)) {
            counter -= 1;
            s[2] = 0;
        }
    }
    printf("%d", counter);
    
	return 0;
}
