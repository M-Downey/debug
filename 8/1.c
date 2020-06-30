#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101];
    for (int i = 0; i < n; i++) {
        gets(names[i]);
    }

	strcpy(max, names[0]);
    for (int i = 1; i < n; i++) {
        if (strlen(names[i]) > strlen(max)) {
        	strcpy(max, names[i]);
		}
    }
    printf("%s\n", max);

    return 0;
}
