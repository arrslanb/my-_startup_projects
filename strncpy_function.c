#include<stdio.h>
#include<string.h>
int main(){
	
char nereden [100] = "BATUHAN ARSLAN 21 YAS";
char nereye [52]= "";

strncpy(nereye,nereden,3);// �c�nc� parametre kac harf(boslukta dahil) alaca��n� g�sterir...

printf("%s",nereye);
	
	return 0 ;
}
