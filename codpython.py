import time

# Empezamos a medir el tiempo
inicio = time.time()

# Bucle para sumar números
suma = 0
for i in range(1, 10000001):
    suma += i

# Fin de la medición del tiempo
fin = time.time()

# Mostramos el resultado y el tiempo que tomó la operación
print("La suma total es:", suma)
print("Tiempo de ejecución:", fin - inicio, "segundos")

