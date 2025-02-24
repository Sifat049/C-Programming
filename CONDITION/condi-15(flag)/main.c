#include <stdio.h>
int main() {
    int X;
    int N = 3;
    int n1,n2,n3;
    int flag=0;
    printf("picks number: ");
    scanf("%d", &X);
    printf("picks number 1:");
    scanf("%d",&n1);
    if (n1 == X) {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    } else {
        N--;
        printf("Wrong, %d Chance(s) Left!\n", N);
    }
    if (flag!=1 && N > 0) {
            printf("picks number 2: ");
            scanf("%d",&n2);
        if (n2 == X) {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        } else {
            N--;
            printf("Wrong, %d Chance(s) Left!\n", N);
        }
    }
    if (flag!=1 && N > 0) {
        printf("picks number 3: ");
    scanf("%d",&n3);
        if (n3== X) {
            printf("Right, Player-2 wins!\n");
        } else {
            printf("Player-1 wins!\n");
        }
    }

    return 0;
}
