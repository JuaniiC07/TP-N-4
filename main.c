#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/// Prototipado

int cargar_arreglo(int arreglo[], int dimension);
int cargarArregloInt (int arreglo[], int dimension);
void mostrarArregloInt (int arreglo[], int validos);
int sumaElementosArreglo (int arreglo[], int validos);
Pila pasarArregloPila (int arreglo[],int validos, Pila destino);
int cargarArregloFloat (float arreglo[], int dimension);
float sumaElementosArregloFloat (float arreglo[], int validos);
int cargarArregloChar (char A[], int dimension);
int buscarChar (char A[], int validos, char datoBuscado);
void insertarEnOrden(char A[], int *validos, char dato);
char maximoCaracter(char A[], int validos);
int esCapicua(char A[], int validos);
void invertir_arreglo(int *arreglo, int dimension);
void ordenamiento_seleccion(int *arreglo, int dimension);
void ordenamiento_insercion(int *arreglo, int dimension);
void intercalar_arreglos_ordenados(char *arreglo1, char *arreglo2, int tam_arreglo1, int tam_arreglo2, char *arreglo3);








int main()
{
    srand(time(NULL));
    Pila destino;
    inicpila(&destino);
    int dimension = 0;
    int arreglo[100];
    float arregloF[100];
    char A[5];
    char B[5];
    int cargar_elementos;
    int validos;
    int validos2;
    int suma = 0;
    float sumaF;
    char datoBuscado;
    int flag;
    char letra;
    char max;
    int arreglo1;
    int arreglo2;
    char arreglo3[10];
    char arreglo12[5] = {'a', 'c', 'e', 'g', 'i'};
    char arreglo22[5] = {'b', 'd', 'f', 'h', 'j'};
    int tam_arreglo1;
    int tam_arreglo2;
    int option;
    do
    {
        int invalid = 0;
        printf("\n Elija una opcion para ejecutar \n");
        printf("\n ------------------------------------------------ \n");
        printf("\n 1- Ingrese elementos para agregarlos a un array \n");
        printf("\n 2- Ingrese elementos para agregarlos a un array y luego mostrarlos en pantalla \n");
        printf("\n 3- Ingrese elementos para agregarlos a un array y luego realiza la suma de los elementos \n");
        printf("\n 4- Ingrese elementos para agregarlos a una pila, para luego almacenarlos en un array \n");
        printf("\n 5- Ingrese elementos para agregarlos a un array que sea float y luego realiza la suma de los elementos \n");
        printf("\n 6- Ingrese caracteres para agregarlos a un array, luego ingrese un caracter para ver si se encuentra o no en el array\n");
        printf("\n 7- Ingrese elementos para agregarlos a un array \n");
        printf("\n 8- Ingrese elementos para agregarlos a un array \n");
        printf("\n 9- Ingrese elementos para agregarlos a un array \n");
        printf("\n 10- Ingrese elementos para agregarlos a un array \n");
        printf("\n 11- Ingrese elementos para agregarlos a un array \n");
        printf("\n 12- Ingrese elementos para agregarlos a un array \n");
        printf("\n 13- Ingrese elementos para agregarlos a un array \n");
        printf("\n ------------------------------------------------ \n\n");

        scanf("%i", &option);
        switch(option)
        {
        case 1:
            validos2 = cargar_arreglo(arreglo, 100);
            mostrarArregloInt(arreglo, validos);
            break;
        case 2:
            validos = cargarArregloInt(arreglo, 100);
            mostrarArregloInt(arreglo, validos);
            break;
        case 3:
            validos = cargarArregloInt(arreglo, 100);
            mostrarArregloInt(arreglo, validos);
            suma = sumaElementosArreglo(arreglo, validos);
            printf("\n La suma es %d\n", suma);
            break;
        case 4:
            validos = cargarArregloInt(arreglo, 100);
            destino = pasarArregloPila(arreglo, validos, destino);
            mostrar(&destino);
            break;
        case 5:
            validos = cargarArregloFloat(arregloF, 100);
            sumaF = sumaElementosArregloFloat(arregloF, validos);
            printf("\n La suma es %g\n", sumaF);
            break;
        case 6:
            validos = cargarArregloChar(A, 5);
            printf("Ingrese una letra para verificar si se encuentra en el array:");
            scanf(" %c", &letra);
            flag = buscarChar(A, validos, letra);
            if (flag==1){
                printf("La letra se encuentra en el array");
            }else {
                printf("La letra no se encuentra en el array");
            }
            break;
        case 7:
            validos = cargarArregloChar(A, 5);
            printf("Ingrese un caracter a insertar en el arreglo: ");
            scanf(" %c", &letra);
            insertarEnOrden(A, &validos, letra);
            printf("El arreglo actualizado es: ");
            for (int i = 0; i < validos; i++) {
                printf("%c ", A[i]);
            }
            printf("\n");
            break;
        case 8:
            validos = cargarArregloChar(A, 5);
            max = maximoCaracter(A, validos);
            printf("El maximo caracter es: %c\n", max);
            break;
        case 9:
            validos = cargarArregloChar(A, 5);

            flag = esCapicua(A, validos);

            if (flag) {
                printf("El arreglo es capicua.\n");
            } else {
            printf("El arreglo no es capicua.\n");
            }
            break;
        case 10:
            validos = cargarArregloInt(arreglo, 10);
            mostrarArregloInt(arreglo, validos);
            invertir_arreglo(arreglo, validos);
            mostrarArregloInt(arreglo, validos);
            break;
        case 11:
            printf("Primero decide si quieres ordenar los elementos por metodo de insercion(1) o seleccion(2):");
            scanf("%i", &cargar_elementos);
            validos = cargarArregloInt(arreglo, 100);
            if(cargar_elementos==2) {
                mostrarArregloInt(arreglo, validos);
                ordenamiento_seleccion(arreglo, validos);
                mostrarArregloInt(arreglo, validos);
            }else {
                mostrarArregloInt(arreglo, validos);
                ordenamiento_insercion(arreglo, validos);
                mostrarArregloInt(arreglo, validos);
            }
            break;
        case 12:

     tam_arreglo1 = 5;
     tam_arreglo2 = 5;

    char arreglo3[tam_arreglo1 + tam_arreglo2];

    intercalar_arreglos_ordenados(arreglo1, arreglo2, tam_arreglo1, tam_arreglo2, arreglo3);

    printf("Arreglo intercalado y ordenado: ");
    for (int i = 0; i < tam_arreglo1 + tam_arreglo2; i++){
        printf("%c ", arreglo3[i]);
    }
            break;
        case 13:
            break;
        default:
            printf("\n\nLa tecla que presionanste no es valida. Por favor, intenta de nuevo\n\n");
            invalid = 1;
            break;
        }
        if(invalid == 0)
        {
            printf("\n Quieres seguir ejecutando? Presiona 0 para salir.\n");
        }
    }
    while(option != 0);
    return 0;
}

/// Funciones

// Funcion 1

int cargar_arreglo(int arreglo[], int dimension)
{
    int validos;
    printf("Ingrese los elementos del arreglo:\n");
    for (validos = 0; validos < dimension; i++)
    {
        scanf("%d", &arreglo[i]);
    }
    return validos;
}

// Funcion 2

int cargarArregloInt (int arreglo[], int dimension)
{
    char letra='s';
    int validos=0;

    while ((letra=='s') && (validos<dimension))
    {
        printf("ingrese un Nro entero ");
        fflush(stdin);
        scanf("%d", &arreglo[validos]);
        validos++;
        printf("desea ingresar mas elementos a la lista? (s/n) ");
        fflush(stdin);
        scanf("%c", &letra);
    }

    return validos;
}

void mostrarArregloInt (int arreglo[], int validos)
{
    int i=0;
    printf("\n Contenido del arreglo: ");
    for (i=0; i<validos; i++)
    {
        printf("[ %d ]", arreglo[i]);
    }
}

// Funcion 3

int sumaElementosArreglo (int arreglo[], int validos)
{
    int i=0;
    int suma = 0;
    for (i=0; i<validos; i++)
    {
        suma = suma + arreglo[i];
    }
    return suma;
}

// Funcion 4
Pila pasarArregloPila (int arreglo[],int validos, Pila destino) {
    int i=0;
    for (i=0; i<validos; i++) {
        apilar(&destino, arreglo[i]);
    }
    return destino;
}

// Funcion 5

int cargarArregloFloat (float arreglo[], int dimension) {
    char letra='s';
    int validos=0;

    while ((letra=='s') && (validos<dimension))
    {
        printf("ingrese un Nro entero ");
        scanf("%f", &arreglo[validos]);
        validos++;
        printf("desea ingresar mas elementos a la lista? (s/n) ");
        fflush(stdin);
        scanf("%c", &letra);
    }
    return validos;
}

float sumaElementosArregloFloat(float arreglo[], int validos)
{
    int i=0;
    float suma = 0;
    for (i=0; i<validos; i++)
    {
        suma = suma + arreglo[i];
    }
    return suma;
}

// Funcion 6

int cargarArregloChar (char A[], int dimension) {
    int validos = 0;
    char c;
    printf("Ingrese los caracteres del arreglo:\n");

    while (validos < dimension) {
        printf("Ingrese el caracter #%d: ", validos+1);
        fflush(stdin);
        scanf("%c", &c);

        if (c == '\n') {
            break;
        }

        A[validos] = c;
        validos++;
    }
    return validos;
}


int buscarChar (char A[], int validos, char datoBuscado)
{
    int i = 0;
    int flag = 0;

    while(i<validos && flag==0)
    {
        if (datoBuscado == A[i])
        {
            flag=1;
        }
        else
        {
            i++;
        }
    }
    return flag;
}

// Funcion 7

void insertarEnOrden(char A[], int *validos, char dato) {
    int i = 0, j = 0;
    while (i < *validos && A[i] < dato) {
        i++;
    }
    for (j = *validos; j > i; j--) {
        A[j] = A[j-1];
    }
    A[i] = dato;
    (*validos)++;
}

// Funcion 8

char maximoCaracter(char A[], int validos) {
    char max = A[0];
    for (int i = 1; i < validos; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

// Funcion 9

int esCapicua(char A[], int validos) {
    int i, j;
    int flag = 1;

    for (i = 0, j = validos - 1; i < j; i++, j--) {
        if (A[i] != A[j]) {
            flag = 0;
            break;
        }
    }

    return flag;
}

// Funcion 10

void invertir_arreglo(int *arreglo, int dimension) {
    int i, temp;
    for (i = 0; i < dimension / 2; i++) {
        temp = arreglo[i];
        arreglo[i] = arreglo[dimension - 1 - i];
        arreglo[dimension - 1 - i] = temp;
    }
}

// Funcion 11

//Ordenamiento por seleccion

void ordenamiento_seleccion(int *arreglo, int dimension) {
    int i, j, min, temp;
    for (i = 0; i < dimension - 1; i++) {
        min = i;
        for (j = i + 1; j < dimension; j++) {
            if (arreglo[j] < arreglo[min]) {
                min = j;
            }
        }
        temp = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = temp;
    }
}

//Ordenamiento por insercion

void ordenamiento_insercion(int *arreglo, int dimension) {
    int i, j, temp;
    for (i = 1; i < dimension; i++) {
        j = i;
        while (j > 0 && arreglo[j - 1] > arreglo[j]) {
            temp = arreglo[j];
            arreglo[j] = arreglo[j - 1];
            arreglo[j - 1] = temp;
            j--;
        }
    }
}

// Funcion 12

void intercalar_arreglos_ordenados(char *arreglo1, char *arreglo2, int tam_arreglo1, int tam_arreglo2, char *arreglo3){
    int i = 0, j = 0, k = 0;

    // Iterar mientras haya elementos en ambos arreglos
    while (i < tam_arreglo1 && j < tam_arreglo2){
        // Si el elemento del primer arreglo es menor o igual al elemento del segundo arreglo
        // se agrega al tercer arreglo y se incrementa el índice i
        if (arreglo1[i] <= arreglo2[j]){
            arreglo3[k] = arreglo1[i];
            i++;
        }
        // En caso contrario se agrega el elemento del segundo arreglo al tercer arreglo y se incrementa el índice j
        else {
            arreglo3[k] = arreglo2[j];
            j++;
        }
        k++; // Se incrementa el índice k del tercer arreglo
    }

    // Si quedan elementos en el arreglo1 se agregan al tercer arreglo
    while (i < tam_arreglo1){
        arreglo3[k] = arreglo1[i];
        i++;
        k++;
    }

    // Si quedan elementos en el arreglo2 se agregan al tercer arreglo
    while (j < tam_arreglo2){
        arreglo3[k] = arreglo2[j];
        j++;
        k++;
    }
}

// Funcion 13
