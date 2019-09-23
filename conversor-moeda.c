/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ESCOLHAu;
float VREAL,VD,VE,VL,resultado;
printf ("Conversão valores\n\n");
printf("1- Conversão real para dólar:\n");
printf("2- Conversão dólar para real:\n");
printf("3- Conversão euro para real:\n");
printf("4- Conversão real para libra:\n");
printf("Escolha sua opção:\n");

scanf ("%d",&ESCOLHAu);
if (ESCOLHAu==1)
{
printf("Insira valor em real:");
scanf("%f", &VREAL);
printf("Insira valor da cotação:");
scanf("%f",&VD);
resultado=VREAL/VD;
printf("Resultado =%f", resultado);
} 
else
{
    if(ESCOLHAu==2)
    {
    printf ("Insira o valor em dólar:");
    scanf("%f",&VD);
    printf ("Insira o valor de cotação:");
    scanf("%f",&VREAL);
    resultado=VD/VREAL;
    printf("Resultado=%f", resultado);
    }
    else
    {
        if(ESCOLHAu==3)
        {
        printf("Insira o valor em euro:");
        scanf("%f",&VE);
        printf("Insira o valor de cotação:");
        scanf("%f",&VREAL);
        resultado=VE/VREAL;
        printf ("Resultado=%f", resultado);
        }
        else
        {
            if (ESCOLHAu==4)
            {
            printf ("Insira o valor em real");
            scanf ("%f", &VL);
            printf("Insira o valor de cotação:");
            scanf ("%f", &VREAL);
            resultado=VL/VREAL;
            printf("Resultado=%f", resultado);
            }
        }
    }
}

    return 0;
}
