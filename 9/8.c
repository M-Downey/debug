#include <stdio.h>
int f(int m, int n)
{
	if(m == n || n== 0){
		return 1;
	}	
	else{
		return f(m-1, n) + f(m-1, n-1);
	}	
}

int main() 
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int x;
    int y;
    for(x = 0; x <= n / 2; x++){
        for(y = 0; y <= n / 3; y++){
            if(x * 2 + y * 3 == n){
                i += f(x + y, y);
            }
        }
    }
    printf("%d", i);
    return 0;
}
