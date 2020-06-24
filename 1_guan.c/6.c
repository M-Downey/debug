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
    
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) 
{
    double left = -20;
    double right = 20;
    double mid=( left + right ) / 2;
    
    while(fabs(func(p,q,mid)) > EPSILON){
    	
        if(func(p,q,mid) * func(p,q,left) <= 0){
            right = mid;
        }
        else{
			if(func(p,q,mid) * func(p,q,right) < 0){
                left = mid;
            }
        }
        
        mid=( left + right ) / 2;
    }
    return mid;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
