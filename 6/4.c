#include <stdio.h>
#include <string.h>

int main() 
{
    char before[4];
    scanf("%s", before);
    char calculate[100005][3];
    int i = 0;
    int count=0;
    int s[3] = {0};
    while (scanf("%s", calculate[i]) != EOF) {
        count++;
        i++;
    }
    
    int result = 0;
    for (i = 0; i < 3; i++) {
        if (before[i] == 'r') {
	    result += 4;
	    s[0] = 1;
	}
        if (before[i] == 'w') {
            result+=2;
            s[1] = 1;
        } 
        if (before[i] == 'x') {
            result+=1;
            s[2] = 1;
    	}
    }
    for (i = 0; i < count; i++){
    	if (calculate[i][0] == '+') {
            if (calculate[i][1] == 'r' && s[0] == 0) {
            	result += 4;
            	s[0] = 1;
        	}
            if (calculate[i][1] == 'w' && s[1] == 0) {
		result += 2;
		s[1] = 1;
            }
	    if (calculate[i][1] == 'x' && s[2] == 0) {
		result += 1;
		s[2] = 1;
	    }
        } else if (calculate[i][0] == '-') {
            if (calculate[i][1] == 'r' && s[0] == 1) {
            	result -= 4;
            	s[0] = 0;
            }
            if (calculate[i][1] == 'w' && s[1] == 1) {
            	result -= 2;
            	s[1] = 0;
            }
            if (calculate[i][1] == 'x' && s[2] == 1) {
            	result -= 1;
            	s[2] = 0;
            }
        }    
    }
    printf("%d", result);
    
    return 0;
}
