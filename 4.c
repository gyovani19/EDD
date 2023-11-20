#include <stdio.h>

int AnalisarSituacao() {
    float N1, N2, N3, N4;
    float MediaPon;
    
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    MediaPon = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4);
    if (MediaPon >= 9) {printf("aprovado com louvor");}
    else if (MediaPon >= 7) {printf("aprovado");}
    else if (MediaPon < 3) {printf("reprovado");}
    else if (MediaPon >= 3 && MediaPon <7) {printf("prova final");}
    //printf("%f", MediaPon);
    return 0;
}

int main(void) {
   
    AnalisarSituacao();
}