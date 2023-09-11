#include <iostream>

using namespace std;

/*
  Función para mostrar el contenido de un arreglo de enteros
*/
void show_array(int* A, int n){
    //Se abre un bracket para el arreglo
    cout << "[ ";
    //Se recorre el arreglo
    for(int i = 0; i < n; i++)
        //Se imprime la posición actual seguida de un espacio
        cout << A[i] << " ";
    //Se cierra el bracket del arreglo
    cout << "]\n";
}

/*
  Función para ordenar un arreglo de enteros utilizando el
  Método de la Burbuja
*/
void bubble_sort(int* A, int n){
    //Se preparan variables auxiliares
    int key, i;

    /* Recorrido Principal */
    //Se recorre el arreglo de izquierda a derecha desde la
    //primera posición y hasta la penúltima
    for(int j = 0; j < n; ++j)
        for(int i = 0; i < n-j-1; ++i)
            if(A[i] < A[i+1]){
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
}

int main(void){
    //Arreglo de prueba
    int size = 6, A[size] = {5,2,4,6,1,3};

    cout << "Arreglo antes de ordenar: ";
    show_array(A,size);

    //Se ejecuta el ordenamiento
    bubble_sort(A,size);
    
    cout << "Arreglo después de ordenar: ";
    show_array(A,size);

    return 0;
}
