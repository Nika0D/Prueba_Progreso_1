#include <stdio.h>
/*Escriba un programa que reciba como datos de entrada n números 
enteros y regrese como dato de salida el mayor de estos números. 
Debe utilizar el concepto de función.*/
int main()
{
    int num, mayor;
    int continuar=1;
    while (continuar==1)
    {
        printf("ingrese un numero");
        scanf("%d", &num);
        int numero_m(num);
        mayor=numero_m(num);
        printf("Si desea continuar escriba 1 sino escriba otro valor");
        scanf("%d", &continuar);
    }
    printf("El numero mayor es: %d\n", mayor);
    return 0;
}
int numero_m(num){
    int res = 0;
    if (num >= res)
    {
        res=num; 
    }
    return res;
}