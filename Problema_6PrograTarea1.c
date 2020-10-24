#include<stdio.h>

float main(){
	printf("\tHagamos una division.\n");
	 
	 float D,d1,c;
	
	printf("\nPor favor, introduzca el Dividendo: ");
	
	scanf("%f",&D);
	
	printf("\n\nPor favor, introduzca el divisor: ");
	
	scanf("%f",&d1);
	
	if (d1!=0){
		
		c=(D/d1);
		
		printf("\nComencemos\n");
		printf("\nEl resultado de la division de %f entre %f es: %f ",D,d1,c);
	}
	else {
		printf("\t\t ERROR\n\n");
		printf("Recuerda que no se puede dividir entre 0\n");
		printf("Vuelve a iniciar e introduce valores nuevos");
	}
	printf("\n\nFin del programa.\n\nMora Castro David 1SV2");
}
