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
    double left, right, mid;
    left = -20;
    right = 20;
    mid = ( left + right ) / 2;
    
    while(fabs( func(p, q, mid) ) > EPSILON){
        if(func(p,q,left) * func(p,q,mid)<=0){
            right = mid;
        }
        else{
            left = mid;
        }
        mid = (left + right) / 2;
    }
    
    return mid;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
