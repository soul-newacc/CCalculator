#include <stdio.h>

// i didnt misspell rhe names of the operation, they are in spanish
// Suma = addition
// Resta = subtraction
// Multiplicacion = the same but changing the c for a t at the end
// Division = do i need to explain it


suma() {
    int i;
    float num[3];
    for (i=1;i < 3;i++) {
        printf("Insert digit N°%i", i);
        printf(" to add ");
        scanf("%f", &num[i]);
    }
    printf("\nThe result is %f", num[1]+num[2]);
}

resta() {
    int i;
    float num[3];
    for (i=1;i < 3;i++) {
        printf("Insert digit N°%i", i);
        printf(" to substract ");
        scanf("%f", &num[i]);
    }
    printf("\nThe result is %f", num[1]-num[2]);
}

multiplicacion() {
    int i;
    float num[3];
    for (i=1;i < 3;i++) {
        printf("Inser digit N°%i", i);
        printf(" to multiply ");
        scanf("%f", &num[i]);
    }
    printf("\nThe result is %f", num[1]*num[2]);
}

division() {
    int i;
    float num[3];
    for (i=1;i < 3;i++) {
        printf("Insert digit N°%i", i);
        printf(" to divide ");
        scanf("%f", &num[i]);
    }
    if (num[2] == 0) {
        printf("\nYou cant divide by 0 dumbass");
    }
    else {
        printf("\nThe result is %f", num[1]/num[2]);
    }
}


main() {
    printf("CCalculator! (double c cuz its made on c)");
    while (1) {
        int sel = 0;
        printf("\n\nWhat operation would you like to do?\n");
        printf("1: Addition \n2: Subtraction\n3: Multiplication\n4: Division\n5: Salir\n\n> ");
        scanf("%i", &sel);
        if (sel == 1) {
            suma();
        }
        if (sel == 2) {
            resta();
        }
        if (sel == 3) {
            multiplicacion();
        }
        if (sel == 4) {
            division();
        }
        if (sel == 5) {
            break;
        }
        else {
            printf("");
        }
    }
}
