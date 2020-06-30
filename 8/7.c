#include <stdio.h>
#include <string.h>
int main() 
{
    int n;
    int i = 0, j = 0;
    scanf("%d", &n);
    char names[1005][105];
    char temp[105];
    getchar();
    while(scanf("%c", &names[i][j]) != EOF){
        if (names[i][j] == '\n') {
            names[i][j] = '\0';
            i++;
            j = 0;
            continue;
        }
        j++;
    }
    for (j = 0; j < n - 1; j++) {
        if (strlen(names[j]) >= strlen(names[j + 1])) {
            strcpy(temp, names[j]);
            strcpy(names[j], names[j + 1]);
            strcpy(names[j + 1], temp);               
        }            
    }   
    
    printf("%s\n", names[n - 1]);   
    return 0;
}
