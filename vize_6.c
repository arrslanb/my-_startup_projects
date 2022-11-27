#include<stdio.h>
int main(){
	
int el,kabin;

printf("El bagaj agirli:");
scanf("%d",&el);
printf("Kabin bagaj agirligi:");
scanf("%d",kabin);

if(kabin<15.0){
	
	kabin = 0;
}
else{
	kabin=(kabin-15)*5;
}
if(el<8.0){

el = 0;
	
}	
else{
	
el = (el-8)*4;
}	
	
	
printf("toplam odemeniz gereken tutar: %d tl ",el+kabin);	
	
	
return 0;
}
