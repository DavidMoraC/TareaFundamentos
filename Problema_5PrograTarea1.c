#include <stdio.h>

main (){
	
	float r,A,P;
	
	printf("\tCalculadora de area y perimetro de una cricunferencia.\n");
	printf("Por favor, escriba el radio de la circunferencia en centimetros:");
	
	scanf("%f",&r);
	
	printf("\n\tTomaremos a pi como: 3.1416");
	
	A=(3.1416*(r*r));
	P=((2*3.1416)*r);
	
	printf("\n\nEl valor del area es: %.4f cm",A);
	
	printf("\n\nEl valor del perimetro es: %.4f cm",P);
	
	
	printf("\n\nFin del programa\nMora Castro David 1SV2");
	
}
