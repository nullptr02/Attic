#include <stdio.h>

int main()
{
    int array[100], numberOfElements, indexOf, i, swap;

    printf("Enter number of elements\n");
    scanf("%d", &numberOfElements);

    printf("Enter %d integers\n", numberOfElements);

    for (indexOf = 0; indexOf < numberOfElements; indexOf++) {

        scanf("%d", &array[indexOf]);

    }

    for (indexOf = 0 ; indexOf < ( numberOfElements - 1 ); indexOf++) {

        for (i = 0 ; i < numberOfElements - indexOf - 1; i++) {

            /* For decreasing order use < */
            if (array[i] > array[i + 1]) {
                swap       = array[i];
                array[i]   = array[i + 1];
                array[i + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (indexOf = 0 ; indexOf < numberOfElements ; indexOf++) {

        printf("%d\n", array[indexOf]);

    }

    return 0;
}