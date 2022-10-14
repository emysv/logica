//1- Faça um programa que calcule e mostre a area de um trapezio. Sabe-se que: A = ((base maior + base menor) * altura)/2.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, basemaior, basemenor, altura;
    printf("Digite o valor da base maior:\n");
    scanf("%f",&basemaior);
    printf("Digite o valor da base menor:\n");
    scanf("%f",&basemenor);
    printf("Digite o valor da altura:\n");
    scanf("%f",&altura);
	
	area = ((basemaior+basemenor)*altura)/2;
    
    printf("O valor da area do trapezio e: %f", area);
    return 0;
}
