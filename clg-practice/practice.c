// Array representation of Stacks

// #include <stdio.h>

// #define MAX 5

// int arr[MAX];
// int top = -1;

// void add(int value) {
//     if (top == MAX - 1) {
//         printf("Array is full! Cannot add %d\n", value);
//     } else {
//         top++;
//         arr[top] = value;
//         printf("Added %d to the array.\n", value);
//     }
// }

// int removeElement() {
//     if (top == -1) {
//         printf("Array is empty! Cannot remove.\n");
//         return -1;
//     } else {
//         int value = arr[top];
//         top--;
//         return value;
//     }
// }

// int see() {
//     if (top == -1) {
//         printf("Array is empty! Nothing to see.\n");
//         return -1;
//     } else {
//         return arr[top];
//     }
// }

// int main() {
//     add(10);
//     add(20);
//     add(30);

//     printf("Top element is: %d\n", see());
//     printf("Removed element is: %d\n", removeElement());
//     printf("Removed element is: %d\n", removeElement());
//     printf("Top element is: %d\n", see());

//     return 0;
// }








// ------------------------------------------------------------------------------------------------

// Link List representation of Stacks

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* top = NULL;

// void addToStack(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory is full! Cannot add %d.\n", value);
//         return;
//     }
//     newNode->data = value;
//     newNode->next = top;
//     top = newNode;
//     printf("Added %d to the stack.\n", value);
// }

// int removeFromStack() {
//     if (top == NULL) {
//         printf("Stack is empty! Nothing to remove.\n");
//         return -1;
//     }
//     int value = top->data;
//     struct Node* temp = top;
//     top = top->next;
//     free(temp);
//     return value;
// }

// int topOfStack() {
//     if (top == NULL) {
//         printf("Stack is empty! Nothing on top.\n");
//         return -1;
//     }
//     return top->data;
// }

// int main() {
//     addToStack(10);
//     addToStack(20);
//     addToStack(30);

//     printf("Top element: %d\n", topOfStack());
//     printf("Removed element: %d\n", removeFromStack());
//     printf("Removed element: %d\n", removeFromStack());
//     printf("Top element: %d\n", topOfStack());

//     return 0;
// }


//-------------------------------------------------------------------------------------------------

// Link List representation of queue

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* next = NULL;
// struct Node* back = NULL;

// void addToQueue(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory is full! Cannot add %d.\n", value);
//         return;
//     }
//     newNode->data = value;
//     newNode->next = NULL;
//     if (back == NULL) {
//         next = back = newNode;
//     } else {
//         back->next = newNode;
//         back = newNode;
//     }
//     printf("Added %d to the queue.\n", value);
// }

// int removeFromQueue() {
//     if (next == NULL) {
//         printf("Queue is empty! Nothing to remove.\n");
//         return -1;
//     }
//     int value = next->data;
//     struct Node* temp = next;
//     next = next->next;
//     if (next == NULL) {
//         back = NULL;
//     }
//     free(temp);
//     return value;
// }

// int nextOfQueue() {
//     if (next == NULL) {
//         printf("Queue is empty! Nothing at the next.\n");
//         return -1;
//     }
//     return next->data;
// }

// int main() {
//     addToQueue(10);
//     addToQueue(20);
//     addToQueue(30);

//     printf("next element: %d\n", nextOfQueue());
//     printf("Removed element: %d\n", removeFromQueue());
//     printf("Removed element: %d\n", removeFromQueue());
//     printf("next element: %d\n", nextOfQueue());

//     return 0;
// }


//-------------------------------------------------------------------------------------------------

// Quick Sort

// #include <stdio.h>

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pivot = arr[high];
//         int i = low - 1;
//         for (int j = low; j < high; j++) {
//             if (arr[j] < pivot) {
//                 i++;
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//         int temp = arr[i + 1];
//         arr[i + 1] = arr[high];
//         arr[high] = temp;

//         int pi = i + 1;

//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int arr[] = {10, 15, 1, 2, 6, 112, 5, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------------------------

// Heap Sort

// #include <stdio.h>

// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] > arr[largest]) {
//         largest = left;
//     }

//     if (right < n && arr[right] > arr[largest]) {
//         largest = right;
//     }

//     if (largest != i) {
//         int temp = arr[i];
//         arr[i] = arr[largest];
//         arr[largest] = temp;

//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n) {
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     for (int i = n - 1; i >= 0; i--) {
//         int temp = arr[0];
//         arr[0] = arr[i];
//         arr[i] = temp;

//         heapify(arr, i, 0);
//     }
// }

// int main() {
//     int arr[] = {50, 40, 10, 60, 30, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     heapSort(arr, n);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// ---------------------------------------------------------------------------------------------

// selection sort

// #include <stdio.h>

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main() {
//     int arr[] = {50, 40, 10, 60, 30, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     selectionSort(arr, n);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// ----------------------------------------------------------------------------

// insertion sort

// #include <stdio.h>

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {50, 40, 10, 60, 30, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// ------------------------------------------------------------------------------------------------

// bubble sort

// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {50, 40, 10, 60, 30, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     bubbleSort(arr, n);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------

// merge sort

// #include <stdio.h>

// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++) {
//         L[i] = arr[left + i];
//     }
//     for (int j = 0; j < n2; j++) {
//         R[j] = arr[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = left;

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int arr[] = {50, 40, 10, 60, 30, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Heap sort

// #include <stdio.h>

// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] > arr[largest]) {
//         largest = left;
//     }

//     if (right < n && arr[right] > arr[largest]) {
//         largest = right;
//     }

//     if (largest != i) {
//         int temp = arr[i];
//         arr[i] = arr[largest];
//         arr[largest] = temp;

//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n) {
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     for (int i = n - 1; i >= 0; i--) {
//         int temp = arr[0];
//         arr[0] = arr[i];
//         arr[i] = temp;

//         heapify(arr, i, 0);
//     }
// }

// int main() {
//     int arr[] = {50, 40, 10, 60, 30, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     heapSort(arr, n);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// --------------------------------------------------------------------------------------------------

// radix sort

#include <stdio.h>

int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {
    int max = getMax(arr, n);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, n, exp);
    }
}

int main() {
    int arr[] = {50, 40, 10, 60, 30, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
