#include <stdio.h>

main() {
    int num, temp, r, sum;

    printf("\nArmstrong numbers from 1 to 1000:");

    for (num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }
}

