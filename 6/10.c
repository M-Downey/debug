#include <stdio.h>
int main()
{
    char pms[3];
    char change_pms[100][2];
    int i;
    int j;
    
    int a;
    a = 0; 
    int b;
    b = 0;
    int c;
    c = 0;
    
    int num = 0;
    scanf("%s", pms);
    while (scanf("%s", change_pms[num]) != EOF) {
    	num++;
    }

    for (j = 0; j < 3; j++) {
        if (pms[j] == 'r') {
            a = 1;
        } 
		else if (pms[j] == 'w') {
            b = 1;
        } 
		else if (pms[j] == 'x'){
            c = 1;
        }
    }
   
    for (i = 0; i < num; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') {
                a = 1;   
            } 
			else if (change_pms[i][j + 1] == 'w') {
                b = 1;
            } 
			else if(change_pms[i][j + 1] == 'x'){
                c = 1;
            }
        } 
		else {
            if (change_pms[i][j + 1] == 'r') {
                a = 0;   
            } 
			else if (change_pms[i][j + 1] == 'w') {
                b = 0;
            } 
			else if(change_pms[i][j + 1] == 'x'){
                c = 0;
            }
        }
    }
    printf("%d", a * 4 + b * 2 + c);
    return 0;
}
