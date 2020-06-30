#include <stdio.h>
#include <string.h>

int main() 
{
	char str[505];
    int arr[32];
    int bits[32];
    char result[32];
    
    scanf("%s", str);
	int i, j;  
    for(i = 0; i < 32; i++){
        arr[i] = 0;
    }
    int k = strlen(str);
    for(i = 1; i <= k; i++){
    	arr[i % 32] += str[i - 1];
	}
    int b;
    for (j = 0; j < 32; j++) {
        bits[j] = (arr[31 - j]) ^ (arr[j] << 1);
        b = (bits[j] % 85) + 34;
        result[j] = (char)b;
    }
    
    for (i = 0; i < 32; i++) {
        printf("%c", result[i]);
    }
    return 0;
}
