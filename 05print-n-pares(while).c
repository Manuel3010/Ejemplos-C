//Imprimir n numeros pares
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=1,in=1;
	printf("ingrese cuantos numeros pares desea:");
	scanf("%d",&n);
	printf("los numeros Pares son:\n");
	while(i<=n){		
		if (in%2==0){			
			printf(" %d ",in);
			i++;
		}
		in++;
	}
	getch();
}
