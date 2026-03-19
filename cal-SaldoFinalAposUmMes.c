#include <stdio.h>

struct Conta  {
    double saldoInicial;
    double taxaJurosMensal;
    double saldoFinalAposUmMes;
};

int main() {
    struct Conta c;
    c.saldoInicial = 1.000;
    c.taxaJurosMensal = 0.5;
    c.saldoFinalAposUmMes = c.saldoInicial * c.taxaJurosMensal;
    printf("Saldo Final Apos um Mes: ");
    printf("%.2f\n",c.saldoFinalAposUmMes);
    
    return 0;
};