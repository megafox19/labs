#include <stdio.h>
#define Pi 3.14
int main(){
double d;
printf ("Введите Диаметр : ");
scanf("%lf", &d);
printf("L = %.5lf\n", Pi*d);
return 0;
}
