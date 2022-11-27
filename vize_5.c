#include<stdio.h>
int main(){
	
int i ;
int toplam = 0 ;

for(i=1;i<=81;i++){
	
if(i%4==1){
	toplam = toplam + i;
}
	
	
}
printf("%d",toplam);
		
	return 0 ;
}
