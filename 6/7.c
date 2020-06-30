#include <stdio.h>
void add(char);
void del(char);
int rwx = 0;

int main() 
{
    char temp;
    scanf("%c", &temp);
    if (temp == 'x') {
    	rwx ^= (1 << 0);
    }
    else if (temp == 'w') {
        rwx ^= (1 << 1);
        scanf("%c", &temp);
        if (temp == 'x'){
            rwx ^= (1 << 0);
	} 
    }
    else if (temp == 'r') {
        rwx ^= (1 << 2);
        do{
            scanf("%c", &temp);
            if (temp == 'w') {
        	rwx ^= (1 << 1);
	    }
            if (temp == 'x') {
        	rwx ^= (1 << 0);
	    }
	        }while(temp != '\n');
    }

    while (scanf("%c", &temp) != EOF) {
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
        }
        else if (temp == '-') {
            scanf("%c", &temp);
            del(temp);
        }
    }

    printf("%d", rwx);
    return 0;
}

void add(char input) 
{
    if (input == 'r' && rwx / 4 != 1) {
    	rwx ^= (1 << 2);
    }
    else if (input == 'w' && (rwx / 2 % 2 != 1)) {
        rwx ^= (1 << 1);	
    }
    else if (input == 'x' && rwx % 2 != 1) {
        rwx ^= (1 << 0);
    }
}

void del(char input)
{
    if (input == 'r' && rwx / 4 == 1) {
    	rwx ^= (1 << 2);
    }
    else if (input == 'w' && (rwx / 2 % 2 == 1)) {
    	rwx ^= (1 << 1);
    }
    else if (input == 'x' && rwx % 2 == 1) {
    	rwx ^= (1 << 0);
    }
}
