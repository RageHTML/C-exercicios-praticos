#include <stdio.h>

struct Circulo {
    double raio;
    double diametro;
    double circuferencia;
};

int main()
{
    struct Circulo c;
    double pi = 3.14159;
    
    printf("Digite o valor do Raio: ");
    scanf("%lf",&c.raio);
    
    c.diametro = 2 * c.raio;
    c.circuferencia = 2 * pi * c.raio;
    
    printf("O valor da Circuferencia: ");
    printf("%.2f\n",c.circuferencia);
    
    return 0;
}