// Diamond

#include <stdio.h>

int main (){

    int i, j, k, n;
    scanf ("%d", &n);

    for (i=1; i<=n; i++){

        for (j=i; j<=n; j++){
            printf (" ");
        }

        for (k=1; k<=2*i-1 ; k++){ // 1<=(2*1-1=1),
            printf("*");
        }

        printf ("\n");
    }

    for (i=n-1; i>=1; i--){

        for (j=i; j<=n; j++){
            printf (" ");
        }

        for (k=1; k<=2*i-1 ; k++){ // 1<=(2*1-1=1),
            printf("*");
        }

        printf ("\n");
    }

}