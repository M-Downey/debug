#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() 
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) 
{
    double left = -20;
    double right = 20;
    
    while(fabs(f(p, q, (left + right) / 2)) > EPSILON){ 
        if(f(p, q, (left + right) / 2) < 0){
        	left = (left + right) / 2;
	} 
        else{
        	right = (left + right) / 2;
	}
    }
	
    return (left + right) / 2;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
