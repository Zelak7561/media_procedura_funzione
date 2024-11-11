#include <stdio.h>

void mediaProcedura(int *a , float *mediaP);
float mediaFunzione(int *a);

int main(void) {
    int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float mediaP , mediaF;

    mediaProcedura(a, &mediaP);
    mediaF = mediaFunzione(a);

    printf("Media con procedura : [%2.2f]\n" , mediaP);
    printf("Media con funzione : [%2.2f]\n" , mediaF);

    return 0;
}

void mediaProcedura(int *a ,float *mediaP) {
    int sum = 0;
    for(int i = 0 ; i < 10 ; i++) {
        sum += a[i];
        *mediaP = (float)sum/10;
    }
}

float mediaFunzione(int *a) {
    int sum = 0;
    for(int i = 0 ; i < 10 ; i++) {
        sum += a[i];
    }
    return (float)sum/10;
}


