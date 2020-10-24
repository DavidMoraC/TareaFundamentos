#include<stdio.h>

int main (){
	//Declaracion e inicializacion de a y b
	float a=456.98, b=231.4;
	printf("El valor \"a\": %.2f\n",a);
	printf("El valor \"b\": %.2f\n",b);
	printf("Sumaremos estos dos valores\n");
	
	printf("Por favor presione ENTER para continuar\n");
	
	getchar();
	
	//suma
	float suma_ab = a + b;
	printf("La suma de a+b es:%.2f\n\n\n",suma_ab);
	printf("Fin del programa\nMora Castro David 1SV2");
	
	
}
