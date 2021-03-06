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
	double left = 20.0,right = -20.0;
    double mid;
    while(1){
        mid = (left + right) / 2;
        if(fabs(func(p,q,mid))< EPSILON){
            return mid;
        }else if(func(p,q,left) * func(p,q,mid) < 0){
            right = mid;
        }else{
            left = mid;
        }
    }
}

double f(int p, int q, double x) {
    return p * x + q;
}
