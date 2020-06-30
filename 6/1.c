#include <stdio.h>
#include <string.h>

int main() {
    char string[4];
    scanf("%s", string);
    int current = 0;
    int s[3] = {0}; 
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'r') {
            current += 2 * 2;
            s[0] = 1;
        } else if (string[i] == 'w') {
            current += 2;
            s[1] = 1;
        } else if (string[i] == 'x') {
            current += 1;
            s[2] = 1;
        }
    }

    char reqrmt[3];
    int req = 0;
    while (scanf("%s", reqrmt) != EOF) {
        if (reqrmt[1] == 'r') {
            req = 2 * 2;
            if (reqrmt[0] == '+' && s[0] == 0) {
            	current += req;
            	s[0] = 1;
			}
			if (reqrmt[0] == '-' && s[0] == 1) {
				current -= req;
				s[0] = 0;
			}
        } else if (reqrmt[1] == 'w') {
            req = 2;
            if (reqrmt[0] == '+' && s[1] == 0) {
            	current += req;
            	s[1] = 1;
			}
			if (reqrmt[0] == '-' && s[1] == 1) {
				current -= req;
				s[1] = 0;
			}
        } else {
            req = 1;
            if (reqrmt[0] == '+' && s[2] == 0) {
            	current += req;
            	s[2] = 1;
			}
			if (reqrmt[0] == '-' && s[2] == 1) {
				current -= req;
				s[2] = 0;
			}
        }
    }
    
    printf("%d", current);
    return 0;
}
