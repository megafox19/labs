#include <stdio.h>
int main(){
double a,b;
printf("Введите a : ");
scanf("%lf", &a);
printf("Введите b : ");
scanf("%lf", &b);
printf("P =  %.1lf\n", 2*(a+b) );
printf("S =  %.1lf\n", a*b );
return 0;
}

