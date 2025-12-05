/**name: Rayyan A Kadiwal
Div:F 
Branch:Mechanical
Roll No: 20
UIN NO:251M023**/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }


    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
