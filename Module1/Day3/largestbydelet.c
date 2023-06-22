#include <stdio.h>

int main() {
    int number, digit, largest = 0, temp;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    for (int i = 0; i < 4; i++) {
        temp = number;
        int power = 1;
        int new_number = 0;
        
        for (int j = 0; j < 4; j++) {
            digit = temp % 10;
            temp = temp / 10;
            if (j != i) {
                new_number += digit * power;
                power *= 10;
            }
        }
        
        if (newNumber > largest) {
            largest = newNumber;
        }
    }

    printf("The largest number after deleting a single digit is: %d\n", largest);
    return 0;
}
