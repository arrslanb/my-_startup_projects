#include<stdio.h>

//Ka� ay sonra boy 150yi kilo 30 u ge�ecek
int main(){
	
int boy = 100,kilo=20,i;	
	
for(i=0;boy<150||kilo<30;i++){
boy = boy + (boy*0.1); // her ay boy %10 art�yor..
kilo = kilo +(kilo*0.05); // her ay kilo %5 art�yor..

}

printf("%d ay sonra..",i);	

	
	return 0;
}
