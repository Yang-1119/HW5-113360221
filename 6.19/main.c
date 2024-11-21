#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ROLLS 36000
#define SIDES 6

int main() {
    int results[13] = {0};
    double theoretical[13] = {0};
    double actual[13] = {0};
    int dice1, dice2, sum;

    srand(time(NULL));

    for (int i = 1; i <= SIDES; i++) {
        for (int j = 1; j <= SIDES; j++) {
            theoretical[i + j] += 1.0 / (SIDES * SIDES);
        }
    }

    for (int i = 1; i <= ROLLS; i++) {
        dice1 = rand() % SIDES + 1;
        sum = dice1 + dice2;
        results[sum]++;
    }

    for (int i = 2; i <= 12; i++) {
        actual[i] = (double)results[i] / ROLLS;
    }

    printf("點數和\t出現次數\t理論機率\t實際比例\t差異\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t\t%.4f\t\t%.4f\t\t%.4f\n", i, results[i], theoretical[i], actual[i], fabs(theoretical[i] - actual[i]));
    }

    return 0;
}
