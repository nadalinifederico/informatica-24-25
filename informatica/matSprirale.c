#include <stdio.h>
#define N 4

void riempiMat(int mat[][N]){
    int num=1;
    int top=0, bottom= N-1;
    int sinistra=0, destra=N-1;

    while (num<=N*N) {
        // da sinistra a destra
        for (int i=sinistra; i<=destra; i++) {
            mat[top][i]=num++;
        }
        top++;

        // dall'alto verso il basso
        for (int i=top; i<=bottom; i++) {
            mat[i][destra]=num++;
        }
        destra--;

        // da destra a sinistra
        if (top<=bottom) {
            for (int i=destra; i>=sinistra; i--) {
                mat[bottom][i]=num++;
            }
            bottom--; 
        }

        // dal basso verso l'alto
        if (sinistra<=destra) {
            for (int i=bottom; i>=top; i--) {
                mat[i][sinistra]=num++;
            }
            sinistra++;
        }
    }
}

void stampaMat(int mat[][N]){
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int _mat[N][N];
    riempiMat(_mat);
    printf("La matrice a spirale è:\n");
    stampaMat(_mat);
    return 0;
}