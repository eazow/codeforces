#include <stdio.h>
int main() {
    int n, m ,a;
    scanf("%d %d %d", &n, &m, &a);
    int x, y;
    x = n%a?(n/a+1):n/a;
    y = m%a?(m/a+1):m/a;
    printf("%.0lf", (double)x*y);
    return 0; 
}
