#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

int a,b,c,x;

printf("ikinci derecen polinomun turevini alma:\n\n");
printf("ax^2+bx+c seklindeki polinomun katsayilarini asagida sirasiyla giriniz.\n");
printf("a sayisi:\n");
scanf("%d",&a);
printf("b sayisi.\n");
scanf("%d",&b);
printf("c sayisi:\n");
scanf("%d",&c);

printf("uretmis oldugunuz polinom soyledir: %dx^2+%dx+%d",a,b,c);

printf("\nturev sonucunuz= %dx+%d",(a*2),b);

return 0;
}
