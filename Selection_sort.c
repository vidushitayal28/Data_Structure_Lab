#include <stdio.h>

int main() {
    int a[10], n, i, j, temp, smallest_idx;

    printf("Enter no of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        smallest_idx = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[smallest_idx]) {
                smallest_idx = j;
            }
        }

        
        temp = a[i];
        a[i] = a[smallest_idx];
        a[smallest_idx] = temp;
    }

    printf("Sorted array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
