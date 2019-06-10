#include <stdio.h>
#include <stdlib.h>

int main(void) { 
    float A[3][4]; 
    int i, j, k; 
    float Buffer; 
    float x1 = 0, x2 = 0, x3 = 0;

    for ( i = 0; i < 3; i++) { 
        for ( j = 0; j < 4; j++) { 
            printf ("Enter A[%d][%d] = ", i+1, j+1); 
            scanf ("%f", &A[i][j]);
        } 
    } 
    Buffer = A[0][0];

    for ( j = 0; j < 4; j++) { 
        A[0][j]/= Buffer; 
    } 
    Buffer = 0; 
    Buffer =(-1)*A[1][0];

    for ( j = 0; j < 4; j++) { 
        A[0][j]*= Buffer; 
        A[1][j] = A[0][j] + A[1][j]; 
        A[0][j]/= Buffer;
    } 
    Buffer = 0; 
    Buffer =(-1)*A[2][0];

    for ( j = 0; j < 4; j++) { 
        A[0][j]*= Buffer; 
        A[2][j] = A[0][j] + A[2][j]; 
        A[0][j]/= Buffer;
    } 
    Buffer = 0; 
    Buffer = A[1][1];

    for ( j = 0; j < 4; j++) { 
        A[1][j]/= Buffer; 
    }
    Buffer = 0; 
    Buffer = A[2][1]*(-1);

    for ( j = 0; j < 4; j++) { 
        A[1][j]*= Buffer; 
        A[2][j] = A[1][j] + A[2][j]; 
        A[1][j]/= Buffer;
    } 
    Buffer = 0; 
    Buffer = A[2][2];

    for ( j = 0; j < 4; j++) { 
        A[2][j]/= Buffer; 
    } 
    Buffer = 0;

    x3 = A[2][3]; 
    x2 = A[1][3] + (-1)*A[1][2]*x3; 
    x1 = A[0][3] + (-1)*A[0][1]*x2 + (-1)*A[0][2]*x3;

    printf ("Answer:\n x1 = %.2f\nx2 = %.2f\nx3 = %.2f\n", x1, x2, x3);

    return 0;
}
