#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int steps = 0;

    while (y > x) {
        if (y % 2 == 0) {
            y = y / 2;
        }
        else {
            y = y + 1;
        }
        steps++;
    }

    steps += x - y;

    return steps;
}

int main() {
    int x, y;

    printf("Enter the value x: ");
    scanf("%d", &x);

    printf("Enter the value y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);

    printf("Minimum number of steps: %d\n", result);

    return 0;
}