#include <stdio.h>

int main() {
    int x, y, z, m;

    // Prompt user for input
    printf("Enter three scores (minimum 40 each): ");
    scanf("%d %d %d", &x, &y, &z);  // Read three scores

    // Check if each score is at least 40
    if (x < 40 || y < 40 || z < 40) {
        printf("Each score must be at least 40. Please enter valid scores.\n");
    } else {
        m = x + y + z;  // Calculate the total score

        // Check if the total score is greater than 150
        if (m > 150) {
            printf("The student is passed.\n");
        } else {
            printf("The student is failed.\n");
        }
    }

    return 0;
}