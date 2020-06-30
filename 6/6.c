#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    int r = 0;
    int w = 0;
    int x = 0;
    
    char input;
    
    while(scanf("%c", &input) != EOF){
    	if(input == '\n'){
        	continue;
		}
		
        if (input == 'r'){
            r = 1;
        }
		else if (input == 'w'){
            w = 1;
        }
		else if(input == 'x'){
            x = 1;      
        }
        else if (input == '+'){
        	scanf("%c", &input);
	        if (input == 'r'){
	            r = 1;
	        }
			else if (input == 'w'){
	            w = 1;
	        }
			else if(input == 'x'){
	            x = 1;      
	        }
        }
		else if (input == '-'){
			scanf("%c", &input);
	        if (input == 'r'){
	            r = 0;
	        }
			else if (input == 'w'){
	            w = 0;
	        }
			else if(input == 'x'){
	            x = 0;      
	        }
        }
    }
    
    int output = x * pow(2, 0) + w * pow(2, 1) + r * pow(2, 2);
    printf("%d", output);
    return 0;
}
