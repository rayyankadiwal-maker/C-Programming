/**name: Rayyan A Kadiwal
Div:F 
Branch:Mechanical
Roll No: 20
UIN NO:251M023**/
#include <stdio.h>

int main() {
    int r, c, i, j;
    int A[10][10], B[10][10], Sum[10][10];

    printf("Enter the number of rows and columns of matrices: ");
    scanf("%d %d", &r, &c);


    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("\nSum of the two matrices is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


    
    