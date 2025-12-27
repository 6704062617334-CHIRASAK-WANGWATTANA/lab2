
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    double A = ((3.0 * (a / 5.0)) + (1.0 / b));
    double B = ((3.0 * a) +  (5.0 * b)) / (2.0 + c);
    double C = (2.0 / 7) * (pow(4,3 + c) - (5.0 * d));
    double D = sqrt((2 + (8.0 * b)) / a);
    double E = cbrt((b * b) - (4.0 * d));

    printf("%lf\n", A);
    printf("%lf\n", B);
    printf("%lf\n", C);
    printf("%lf\n", D);
    printf("%lf\n", E);

    return 0;
}
