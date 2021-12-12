/**
 * CSE 251 Project 1
 * By: wgzhao
 * 
 * Complete the following table:
 ∗
 ∗ a b n estimate
 ∗ −1 1 1883 1.178979838
 ∗ 0 10 2028 0.4898880704
 ∗ −1000 1000 18861 0.9997964188
 ∗ 10 15 1515 0.0168605990
 ∗ 0.1 0.2 138 0.0962118107
 */
#include<stdio.h>
#include<math.h>

#define PI 3.14159265
#define epsilon 1e-10
#define MAX_ITERATIONS 1e6

double sinc(double a, double b, int n)
{
    double delta = (b -a ) * 1.0 / n;
    double sum = 0;
    for(int i = 1; i <= n; i++)
    {
        double x = a + (i - 0.5) * delta;
        if (x == 0) {
            continue;
        }
        sum += (sin(PI * x) / (PI * x)) * delta;
    }
    return sum;
}

int main()
{
    double a = 0.1, b = 0.2;
    double pre_result = 0;
    double result = 1;
    int begin = 10;
    int curr_iter = 0;
    while (curr_iter < MAX_ITERATIONS)
    {
        pre_result = result;
        result = sinc(a, b, begin);
        printf("%d %.10f %.10f\n", begin, result, result-pre_result);
        if (fabs(result - pre_result) < epsilon)
        {
            break;
        }
        begin++;
    }
}