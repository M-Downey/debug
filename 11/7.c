#include <stdio.h>
#include <string.h>
int main() 
{
    char str[500];
	int fs[32], arr[32], bits[32];
    int i;
    memset(arr, 0, sizeof(arr));
    scanf("%s", str);
    for (i = 1; i <= strlen(str); i++)
    {
        arr[i % 32] += str[i - 1];
    }
    for (i = 0; i < 32; i++)
    {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i] = bits[i] % 85 + 34;
    }
    for (i = 0; i < 32; i++)
    {
        printf("%c", fs[i]);
    }
    return 0;
}
