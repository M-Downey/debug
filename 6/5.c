#include <stdio.h>
#include <string.h>

int main() 
{
    char input[4];
    int initial = 1;
    int counter = 0;
    int i, j;
    scanf("%s", input);
    char operation[3];
    int s[3] = {0}; 
     
    if (input[0] == 'r' && input[1] == 'w' && input[2] == 'x') {
        counter = 7;
        s[0] = 1;
        s[1] = 1;
        s[2] = 1;
    } else if (input[0] == 'r' && input[1] == 'w') {
        counter = 6;
        s[0] = 1;
        s[1] = 1;
    } else if (input[0] == 'r' && input[1] == 'x') {
        counter = 5;
        s[0] = 1;
        s[2] = 1;
    } else if (input[0] == 'w' && input[1] == 'x') {
        counter = 3;
        s[1] = 1;
        s[2] = 1;
    } else if (input[0] == 'r') {
        counter = 4;
        s[0] = 1;
    } else if (input[0] == 'w') {
        counter = 2; 
        s[1] = 1;
    } else {
        counter = 1;
        s[2] = 1;
    }
    
    while (scanf("%s", operation) != EOF) {
        if (operation[0] == '+' && operation[1] == 'r' && s[0] == 0) {
            counter += 4;
            s[0] = 1;
        } else if (operation[0] == '+' && operation[1] == 'w' && s[1] == 0) {
            counter += 2;
            s[1] = 1;
        } else if (operation[0] == '+' && operation[1] == 'x' && s[2] == 0) {
            counter += 1; 
			s[2] = 1;  
        } else if (operation[0] == '-' && operation[1] == 'r' && s[0] == 1) {
            counter -= 4;
            s[0] = 0;
        } else if (operation[0] == '-' && operation[1] == 'w' && s[1] == 1) {
            counter -= 2;
            s[1] = 0;
        } else if (operation[0] == '-' && operation[1] == 'x' && s[2] == 1) {
            counter -= 1;
            s[2] = 0;
        }
    }
    
    printf("%d", counter);
      
    return 0;
}
