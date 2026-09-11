#include <stdio.h>

int VariableGlobal1;
double VariableGlobal2;
float VariableGlobal3;
int main () {
VariableGlobal1 = 45;
VariableGlobal2 = 6.28;
VariableGlobal3 = 3.1415;
printf("la variable global 1 es : %d\n", VariableGlobal1);
printf("la variable global 2 es : %.10f\n", VariableGlobal2);
printf("la variable global 3 es : %.3f\n", VariableGlobal3);
printf("ingresa un valor ");
scanf ("%d", &VariableGlobal1);
printf("ingresa un valor ");
scanf ("%lf", &VariableGlobal2);
printf("ingresa un valor ");
scanf ("%f", &VariableGlobal3);
printf("la variable global 1 es : %d\n", VariableGlobal1);
printf("la variable global 2 es : %.10f\n", VariableGlobal2);
printf("la variable global 3 es : %.3f\n", VariableGlobal3);
return 0;

}

