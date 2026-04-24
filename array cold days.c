#include <stdio.h>

int main() {
    int temp[365];
    int i, cold = 0;

  
    for(i = 0; i < 365; i++) {
        scanf("%d", &temp[i]);
    }

   
    for(i = 0; i < 365; i++) {
        if(temp[i] <= 24) {
            cold++;
        }
    }

   
    float percentage = (cold / 365.0) * 100;

    printf("Cold days percentage = %.2f%%", percentage);

    return 0;
}