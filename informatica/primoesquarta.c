/*Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.*/
#include <stdio.h>

#define N 3 
void stampaMatrice(int matrice[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}
void scambiaDiagonali(int matrice[N][N]) {
    for (int i=0; i<N; i++) {
        int temp=matrice[i][i];
        matrice[i][i]=matrice[i][N-1-i];
        matrice[i][N-1-i]=temp;
    }
}
int main() {
    int matrice[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrice prima:\n");
    stampaMatrice(matrice);

    scambiaDiagonali(matrice);

    printf("Matrice dopo:\n");
    stampaMatrice(matrice);

    return 0;
}