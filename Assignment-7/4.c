/**4. Write a program in C to dynamically allocate an array of type int. The size of the array is an user input.
Use the scanf function to take user inputs initializing the array. Then, print the elements of the array.
Reuse the same memory to store an array of char. Now, free the allocated memory from the heap. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 0, *array = NULL;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    array = (void *) calloc(size, sizeof(int));
//array = (void *) malloc(size * sizeof(int)); // An alternative of previous line
    printf("Enter the elements of the int-array (size is %d): ", size);
    for (int i = 0; i < size; i ++)
    {
        scanf("%d", array + i);

    }
    printf("The elements of the int-array: ");
    for (int i = 0; i < size; i ++)
    {
        printf("%d ", *(array + i));

    }

    char *c_array = (char *) array; // reusing the same memory
    printf(
        "\nEnter the elements of the char-array (size is %d): ",
        ((int) (size * sizeof(int)))
    );
    for (int i = 0; i < size * sizeof(int); i ++)
    {
        scanf("%c", &c_array[i]);

    }
    printf("The elements of the char-array: ");
    for (int i = 0; i < size * sizeof(int); i ++)
    {
        printf("%c ", c_array[i]);

    }
    printf("\nThe modified elements of the int-array: ");
    for (int i = 0; i < size; i ++)
    {
        printf("%d ", array[i]);
    }

    free(array);
    array = NULL; // handling dangling/ wild pointer
    c_array = NULL; // handling dangling/ wild pointer
}


