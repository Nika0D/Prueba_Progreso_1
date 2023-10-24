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
        //escaneamos el valor "num" y llamamos a la funcion "numero_m"
        printf("ingrese un numero");
        scanf("%d", &num);
        int numero_m(num);
        //la funcion "numero_m" compara los numero y estrae el valor mayor.
        mayor=numero_m(num);
        // se preguntra al usuario si desea continuar para salir del "while"
        printf("Si desea continuar escriba 1 sino escriba otro valor");
        scanf("%d", &continuar);
    }
    //imprime el resultado mayor.
    printf("El numero mayor es: %d\n", mayor);
    return 0;
}
int numero_m(num){
    /*define la bariable "res" inicializandola en 0 para posteriormente compararla 
    con el numero y sacar el mayor numero ingresado.*/
    int res = 0;
    if (num >= res)
    {
        res=num; 
    }
    return res;
}