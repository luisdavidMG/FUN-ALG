#include <stdio.h>
int main() {
    int numeros[] = {50, 60, 60, 45, 70};
    int longitud = sizeof numeros / sizeof numeros[0];
    int sumatoria1 = 0;//almacenar valor
    int sumatoria2 = 0;
    for (int x = 0; x < longitud; x=x+2) {
        int team1 = numeros[x];
        // Sumar el número cada vez que el for funcione
        sumatoria1 = sumatoria1 + team1;
    }
    printf("La sumatoria del equipo 1: %d \n", sumatoria1);

    for (int x = 1; x < longitud; x=x+2) {
        int team2 = numeros[x];
        sumatoria2 = sumatoria2 + team2;
    }
    printf("La sumatoria del equipo 2: %d \n", sumatoria2);
    return 0;
}
