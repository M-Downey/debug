#include <stdio.h>
#include <string.h>
int main() 
{
    char in[500];
    char out[33];
    int k;
    int arr[32];
    int bits[32];
    int i;
    int j;
    
    scanf("%s", in);
    k = strlen(in);
    
    for (i = 0; i < 32; i++){
        arr[i] = 0;
    }
    
    for (i = 1; i <= k; i++){ 
        arr[i % 32] += in[i - 1];
    }
    
    for (j = 0; j < 32; j++){
        bits[j] = (arr[31 - j] ^ (arr[j] << 1));
    }
    
    for (j = 0; j < 32; j++){
        out[j] = (char)(bits[j] % 85 + 34);
    }
    out[32] = '\0';
    
    printf("%s", out);
        
    return 0;
}
