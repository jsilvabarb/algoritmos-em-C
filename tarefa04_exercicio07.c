/*Escreva um programa que leia a altura h e o raio r de uma latade óleo e imprima o seu volume( V = 3.14 * h * r^2)*/#include <stdio.h>#include <stdlib.h>#include <math.h>int main() {   float h, r;   double volume;       scanf("%f %f", &h, &r);        //Calculando valor do volume da lata    volume = (double) (3.14 * h * pow(r,2));       printf("%f", volume);    return 0;}