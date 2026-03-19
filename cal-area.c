#include <stdio.h>

struct Retangulo {
    double base;
    double altura;
    double area;
};

int main() {
 struct Retangulo r;
 
 r.base = 10.0;
 r.altura = 10.0;
 r.area = r.base * r.altura; 
 
 printf("Area: %.2f",r.area);
 return 0;
}