#include <stdio.h>

int main() {
    int temp[365];
    int i, hot = 0;


    for(i = 0; i < 365; i++) {
        scanf("%d", &temp[i]);
    }

    
    for(i = 0; i < 365; i++) {
        if(temp[i] > 24) {
            hot++;
        }
    }

    printf("Total hot summer days = %d", hot);

    return 0;
}