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
    double left = -20.0;
    double right = 20.0;
    double mid = 0.0;
    double func_left, func_right, func_mid;
    
    do {
        func_left = func(p, q, a);
        func_right = func(p, q, b);
        mid = (left + right) / 2.0;
        func_mid = func(p, q, x);
        
        if (func_left * func_mid >= 0) {
            left = mid;
        } 
	else{
            right = mid;
        }
    } while (fabs(func_mid) > EPSILON);
    
    return mid;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
