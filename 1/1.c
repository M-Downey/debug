#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() 
{
	int p;
	int q;
    scanf("%d %d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) 
{
    double left = -20;
    double right = 20;
    double xp;
    xp = (left + right) / 2;
    double value = func(p, q , xp);				
    while(fabs(value) >= EPSILON){
        if((value * func(p, q , left)) > 0)
        {
   		    left = xp;
            xp = (left + right) / 2;
            value = func(p, q , xp);
            //printf("%.4f\n", xp);
        }else
        {
            right = xp;
            xp = (left + right) / 2;
            value = func(p, q , xp);
            //printf("%.4f\n", xp);
        }
    }
    return xp;
}

double f(int p, int q, double x) {
    return p * x + q;
}
