#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int group_number = 79;
int variant_number = 16;
const int NAME_NUMBER = 5;

void check_sqrt(int group);

int main(void) {
    // Встановлюємо кириличну кодову сторінку Windows-1251 для консолі
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // === Завдання 2 ===
    printf("=== Завдання 2 ===\n");
    printf("Мій номер за журналом %d (парний). Його Sin = %f\n\n", 
           variant_number, sin(variant_number));

    // === Завдання 3 ===
    printf("=== Завдання 3 ===\n");
    char name[] = "Артем";
    printf("Група: %d, Варіант: %d, Ім'я: %s\n", group_number, variant_number, name);

    double product = variant_number * 3.14;
    int converted_product = (int)product;

    printf("Результат добутку (double): %f, Результат конвертації (int): %d\n\n", 
           product, converted_product);

    // === Завдання 4 ===
    printf("=== Завдання 4 ===\n");
    int start_counter = variant_number + NAME_NUMBER;
    int sum = 0;

    for (int i = start_counter - 1; i >= 1; i--) {
        sum += i;
    }

    printf("Константа NAME_NUMBER = %d\n", NAME_NUMBER);
    printf("Початковий лічильник (16 + 5) = %d\n", start_counter);
    printf("Підсумкова сума чисел, що передують %d: %d\n\n", start_counter, sum);

    // === Завдання 5 ===
    printf("=== Завдання 5 ===\n");
    check_sqrt(group_number);
    printf("\n");

    // === Завдання 6 ===
    printf("=== Завдання 6 ===\n");
    int input_group;
    printf("Введіть номер групи: ");
    scanf("%d", &input_group);

    switch (input_group) {
        case 75: case 76: case 77: case 78: case 79: case 80:
            printf("Група %d навчається на IV курсі.\n", input_group);
            break;
        case 81: case 82: case 83: case 84: case 85: case 86:
            printf("Група %d навчається на III курсі.\n", input_group);
            break;
        case 87: case 88: case 89: case 90: case 91:
            printf("Група %d навчається на II курсі.\n", input_group);
            break;
        case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99:
            printf("Група %d навчається на I курсі.\n", input_group);
            break;
        default:
            printf("Групу %d не знайдено у списку коледжу.\n", input_group);
            break;
    }

    return 0;
}

void check_sqrt(int group) {
    double sqrt_val = sqrt(group);
    int name_len = 5;

    double sum_val = sqrt_val + (double)name_len;
    double prod_val = sqrt_val * (double)name_len;

    printf("Корінь з номера групи (%d): %f\n", group, sqrt_val);
    printf("Довжина імені: %d\n", name_len);

    if (sqrt_val > (double)name_len) {
        printf("Результат (більше): %fs\n", sum_val);
    } else if (sqrt_val < (double)name_len) {
        printf("Результат (менше): %fn\n", prod_val);
    } else {
        printf("Значення рівні: Сума = %f, Добуток = %f\n", sum_val, prod_val);
    }
}