#include <stdio.h>
#include <math.h>
int main(){
	//variables
	float a,b,c,d1,x1,x2;
	
	printf("Vamos a encontrar la raiz de un polinomio de segundo orden mediante la formula general");
	//a
	printf("\nPor favor, introduzca el termino cuadratico:");
	
	scanf("%f",&a);
	//b
	printf("\nPor favor, introduzca el termino lineal:");
	scanf("%f",&b);
	//c
	printf("\nPor favor, introduzca el termino independiente:");
	scanf("%f",&c);
	
	if (a!=0){
		printf("Valores validos\n");
		
}
	else{
		printf("No podemos iniciar, tu valor cuadratico es: 0\n");
	}
	printf("Presione ENTER para continuar\n");
	getch();
	//dentro de la raiz d1
	
	d1=((b*b)-(4*(a*c)));
	if (d1<=0){
		printf ("Lo sentimos, el valor dentro de la raiz es <= 0.\nVerifica tus datos y vuelve a empezar.\n");
	}
	//x1 y x2 Raices
	else{
	
	x1=((-1*b)+(sqrt(d1)))/(2*a);
	x2=((-1*b)-(sqrt(d1)))/(2*a);
	
	printf("El valor de la raiz 1 o x1 es:%.4f\n",x1);
	printf("El valor de la raiz 2 o x2 es:%.4f\n",x2);
	
	
}
	printf("Fin del programa\nMora Castro David 1SV2");
}

