#include <stdio.h>
#include <time.h>

int main() {
    // Variables para medir el tiempo
    clock_t inicio, fin;
    double tiempo_usado;

    // Iniciar medición del tiempo
    inicio = clock();

    // Bucle para sumar números
    long long int suma = 0;
    for (long long int i = 1; i <= 10000000; i++) {
        suma += i;
    }

    // Finalizar medición del tiempo
    fin = clock();

    // Calcular el tiempo de ejecución
    tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    // Mostrar el resultado y el tiempo que tomó la operación
    printf("La suma total es: %lld\n", suma);
    printf("Tiempo de ejecución: %f segundos\n", tiempo_usado);

    return 0;
}

