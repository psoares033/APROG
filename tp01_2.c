/* 
2.  Pretende-se desenvolver um programa que recebendo um valor da velocidade em milhas por hora (mil/h) faça a sua conversão para quilómetros por hora (km/h). 

A relação de conversão ́e dada pela expressão: d(mil/h) = 1,609344 × d(km/h)

(a)  Escreva um algoritmo que estabeleça uma solução para este problema.
(b)  Execute a traçagem desse algoritmo, supondo que o valor inserido  ́e 90.
(c)  Implemente o algoritmo em linguagem C

ESTRUTUA DE DADOS 
    REAL: MILH , KMH
ALGORITMO
    LER (KMH)                                           KMH = 90
    MILH = 1.609344 * KMH                               MILH = 144.8
    ESCREVER (MILH)                                     SAIDA: 144.8
FIM

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float milh , kmh;

    printf("Introduza a velocidade que pretende converter para km/h: ");
    scanf ("%f", &kmh);
    milh = 1.609344 * kmh;
    printf("A velocidade é: %.1f km/h.", milh);

    return 0;
}
