//factorial de un numero
#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,m=1;
	printf("Ingrese numero para n!:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		m=m*i;
	
	}
	printf("El factorial del numero es: %d !",m);
	getch();
}
