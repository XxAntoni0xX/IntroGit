public class codjava {

 public static void main(String[] args) {
        long startTime = System.nanoTime(); // Captura el tiempo inicial en nanosegundos
        
        long suma = 0;
        for (long i = 1; i <= 10000000; i++) {
            suma += i;
        }
        
        long endTime = System.nanoTime(); // Captura el tiempo final en nanosegundos
        double duration = (endTime - startTime) / 1_000_000_000.0; // Calcula la duración en segundos
        
        System.out.println("La suma es: " + suma);
        System.out.println("Tiempo de ejecución: " + duration + " segundos");
    }
}

