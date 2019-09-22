#include <stdio.h>

int main()
{
int op;1,2,3,4;
float area,base,altura;
printf("Cálculo da área:\n\n");
printf("1-Área do quadrado:\n");
printf("2-Área do retângulo:\n");
printf("3-Área do triângulo:\n");
printf("4-Área do trapézio:\n");
printf ("Escolha sua opção entre 1,2,3 ou 4:");
scanf("%d", &op);

if(op==1)
{
printf("Insira o lado do quadrado");
scanf("%f",&base);
area = base*base;
printf("Area do quadrado = %f",area);
}
else
{
if(op==2)
{
printf("Insira a base do retângulo:");
scanf("%f",&base);
printf("Insira a altura do retângulo:");
scanf("%f",&altura);
area = base*altura;
printf("Area do retângulo é: = %f",area);
}
else
{
if (op==3)
{
printf("Insira a base do triângulo:");
scanf("%f",&base);
printf("Insira a altura do triângulo:");
scanf("%f",&altura);
area = (base*altura)/2;
printf("Area do triângulo é: = %f",area); 
}
else
{
if (op==4)
{
printf("Insira a base do trapézio:");
scanf("%f",&base);
printf("Insira a altura do trapézio:");
scanf("%f",&altura);
area = ((base+base)*altura)/2;
printf("Area do triângulo é: = %f",area); 
}
}
}
} return 0; 
 }