#include<stdio.h> 

int main(int argc, char const *argv[])
{
    int p, n;

    printf ("Introduza o valor que pretende triplicar: ");
    scanf("%d" , &n);
    p = n * 3;
    
    printf ("O triplo de %d é %d.", n, p);

    return 0;
}
