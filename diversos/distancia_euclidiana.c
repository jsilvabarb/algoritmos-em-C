/*Leia os quatro valores correspondentes aos eixos x e y de dois
pontos do plano, p1 (x1, y1) e p2 (x2, y2) e calcule a distância
euclideana entre eles, mostrando quatro casas decimais após a 
vírgula.

O arquivo de entrada contém duas linhas de dados. O primeiro 
contém dois valores duplos: x1 y1 e o segundo também contém dois
valores duplos com um dígito após a vírgula decimal: x2 y2.*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    // Declarando variáveis
    float pX, pY, qX, qY;
    float distanciaEuclideana;
    
    scanf("%f %f %f %f", &pX, &pY, &qX, &qY);
    
    distanciaEuclideana = sqrt((pow((pX - qX), 2) + pow((pY - qY), 2))); 
    
    printf("Distância Euclideana: %.4f", distanciaEuclideana);  

     return 0;
}