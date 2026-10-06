#include <stdio.h>

int main() {
    int arr[20]; 
    int n = 8; 
    int largest, smallest;
    int search, found = 0;
    int insertNum, insertIndex;
    int deleteIndex;
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nComplete Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    largest = smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d", smallest);
    printf("\n\nEnter number to search: ");
    scanf("%d", &search);
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("%d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("%d not found in array\n", search);
    }
 printf("\nEnter number to insert and index (0-%d): ", n);
    scanf("%d %d", &insertNum, &insertIndex);

    if(insertIndex >= 0 && insertIndex <= n) {
        for(int i = n; i > insertIndex; i--) {
            arr[i] = arr[i-1];
        }
        arr[insertIndex] = insertNum;
        n++; 
        printf("After Insertion: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid Index!");
    }

   
    printf("\n\nEnter index to delete (0-%d): ", n-1);
    scanf("%d", &deleteIndex);

    if(deleteIndex >= 0 && deleteIndex < n) {
        for(int i = deleteIndex; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--; 
    } else {
        printf("Invalid Index!");
    }

    
    printf("\nFinal Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}