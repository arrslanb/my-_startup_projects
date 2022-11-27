#include<stdio.h>

int fibo(int a,int b, int c){
int i;
a = 1;
b = 1;

printf("%d\n%d\n",a,b);
for(i=1;i<=20;i++){
	
	c=a+b;
	a=b;
	b=c;

	printf("%d\n",c);


}

return c ;	
}
int main (){
	
int a,b,c;

fibo(a,b,c);
	
		
	return 0 ;
}
