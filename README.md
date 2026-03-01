# Sistema-de-calificacion-de-programadores
IMPORTANTE: SUGIERO QUE LO CORRAN EN ONLINE GBD PARA MAYOR FACILIDAD.

Calcular la matriz C multiplicando las matrices A y B, y con esto determinar la productividad total de cada desarrollador para cada fase de los proyectos, permitiendo realizar una asignación óptima de recursos.

Plantamiento de la solicion: 


El algoritmo deberia  realizar la multiplicación matemática de dos matrices de 3x3. Primero, se deben inicializar y llenar las dos matrices de entrada: la matriz A (que contiene los puntos por hora de los desarrolladores) y la matriz B (que contiene las horas necesarias por fase). Luego, se inicializa una matriz C (productividad total) de 3x3 con todos sus valores en cero.

Para calcular los valores de C, se recorrerán las filas de la matriz A (que representan a cada desarrollador) y las columnas de la matriz B (que representan las fases). Por cada cruce entre un desarrollador y una fase, se multiplicará la productividad de ese desarrollador en cada proyecto por las horas de ese proyecto en la fase correspondiente, y se sumarán esos resultados parciales. Esto se logra en programación utilizando tres ciclos iterativos (bucles) anidados. Finalmente, se mostrará en pantalla la matriz C resultante.

¿Cuál es la solución propuesta?
La solución es implementar el algoritmo clásico de multiplicación de matrices utilizando tres bucles iterativos anidados (generalmente for). El bucle exterior recorrerá las filas de la matriz A (desarrolladores), el bucle intermedio recorrerá las columnas de la matriz B (fases), y el bucle interno recorrerá los proyectos para realizar la suma de los productos parciales: C[i][k] = C[i][k] + (A[i][j] * B[j][k]).

¿Cómo se divide el problema?
El problema se divide en tres subproblemas lógicos y secuenciales:

Entrada de datos: Leer o inicializar las matrices A (3x3) y B (3x3).
Procesamiento (Cálculo): Realizar la operación de multiplicación de matrices para generar la matriz C.
Salida de datos: Recorrer la matriz C para imprimir los resultados y mostrar la productividad de cada desarrollador por fase.

¿Qué información debería devolver cada subproblema?

Subproblema 1 (Entrada): Debería devolver dos estructuras de datos bidimensionales (matrices de 3x3) llenas con los valores numéricos correspondientes a productividad y horas.

Subproblema 2 (Procesamiento): Debería devolver una nueva matriz de 3x3 (la matriz C) con los cálculos numéricos finalizados.

Subproblema 3 (Salida): No devuelve información al sistema, sino que "devuelve" al usuario (imprime en pantalla) los datos calculados de forma legible.

¿Cómo se combinan los resultados?
Los resultados se combinan dentro del paso de procesamiento mediante acumulación. Para calcular la posición específica de un desarrollador en una fase (por ejemplo, el elemento C[0][0], se toma la primera fila de la matriz A y la primera columna de la matriz B. Se multiplican los elementos correspondientes uno a uno y el resultado de cada multiplicación se suma (se combina) en una variable acumuladora que define el valor final de esa celda en la matriz C.


