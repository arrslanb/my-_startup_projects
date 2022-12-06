#include<stdio.h>
#define PI 3.14
int main(){
	
int yaricap;
printf("cemberin yaricapini giriniz:");
scanf("%d",&yaricap);

float cevre = 2 * PI * yaricap;
float alan = PI * yaricap * yaricap;

printf("cevre=%f\n",cevre);
printf("alan=%.2f",alan);	
		
	return 0;
}
