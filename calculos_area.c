#include <stdio.h>

int main()
{
int op;1,2,3,4;
float area,base,altura;
printf("C�lculo da �rea:\n\n");
printf("1-�rea do quadrado:\n");
printf("2-�rea do ret�ngulo:\n");
printf("3-�rea do tri�ngulo:\n");
printf("4-�rea do trap�zio:\n");
printf ("Escolha sua op��o entre 1,2,3 ou 4:");
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
printf("Insira a base do ret�ngulo:");
scanf("%f",&base);
printf("Insira a altura do ret�ngulo:");
scanf("%f",&altura);
area = base*altura;
printf("Area do ret�ngulo �: = %f",area);
}
else
{
if (op==3)
{
printf("Insira a base do tri�ngulo:");
scanf("%f",&base);
printf("Insira a altura do tri�ngulo:");
scanf("%f",&altura);
area = (base*altura)/2;
printf("Area do tri�ngulo �: = %f",area); 
}
else
{
if (op==4)
{
printf("Insira a base do trap�zio:");
scanf("%f",&base);
printf("Insira a altura do trap�zio:");
scanf("%f",&altura);
area = ((base+base)*altura)/2;
printf("Area do tri�ngulo �: = %f",area); 
}
}
}
} return 0; 
 }