/*Miranda Contreras Naomi Alexa 
clase 2 ejercicio 2*/
#include <stdio.h> 
#include <math.h>
void main ()
{
  int num1, num2, res;
printf("Escribe el primer numero: \n");
scanf("%d", &num1);
printf("Escribe el segundo numero: \n");
scanf("%d", &num2);
if (num1 % num2 == 0)
{
  printf("El número es divisible \n");
}
else
{
  printf("El número no es divisible \n");
}
}
