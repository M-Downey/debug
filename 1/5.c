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
	double left;
    double right;
    double mid;
    right = 20;
    left = -20;
	mid = (left + right)/ 2;
    while(fabs(f(p,q,mid)) >= EPSILON){
        if((f(p,q,right) * f(p,q,mid)) < 0) {
			left = mid;
			mid = (left + right)/2;
        }
        if((f(p,q,left) * f(p,q,mid)) < 0) {
			right = mid;
			mid = (left + right)/2;
        }
    }
    return mid;
        
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
