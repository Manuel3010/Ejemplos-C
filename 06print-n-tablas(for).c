//Print n tablas de multiplicar
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,m;
	printf("Tabla de multiplicar que desea:");
	scanf("%d",&n);
	 for(i=1;i<=10;i++){
	 	m=n*i;
	 	printf("%d x %d = %d\n",n,i,m);
	 }
	 getch();	
}
