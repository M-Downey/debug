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
	left = -20.0;
	right = 20.0;
	mid = (left + right) / 2;
	if (fabs(func(p, q, mid)) < EPSILON){
		return mid;
	} else if((func(p, q, mid) < 0 && func(p, q, left) > 0) || (func(p, q, mid) > 0 && func(p, q, left) < 0)){
		while (fabs(func(p, q, mid)) >= EPSILON){
			if((func(p, q, mid) < 0 && func(p, q, left) > 0) || (func(p, q, mid) > 0 && func(p, q, left) < 0)){
				right = mid;
				mid = (left + right) / 2;
			} else if ((func(p, q, mid) < 0 && func(p, q, right) > 0) || (func(p, q, mid) > 0 && func(p, q, right) < 0)){
				left = mid;
				mid = (left + right) / 2;
			}
		}
		return mid;
	} else if ((func(p, q, mid) < 0 && func(p, q, right) > 0) || (func(p, q, mid) > 0 && func(p, q, right) < 0)) {
		while (fabs(func(p, q, mid)) >= EPSILON){
			if((func(p, q, mid) < 0 && func(p, q, left) > 0) || (func(p, q, mid) > 0 && f(p, q, left) < 0)){
				right = mid;
				mid = (left + right) / 2;
			} else if ((func(p, q, mid) < 0 && func(p, q, right) > 0) || (func(p, q, mid) > 0 && func(p, q, right) < 0)){
				left = mid;
				mid = (left + right) / 2;
			}
		}
		return mid;
	}
	return 0;
}

double f(int p, int q, double x)
{
    return p * x + q;
}
