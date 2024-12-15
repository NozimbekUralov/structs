#include <stdio.h>

typedef struct {
    char model[32];
    char brand[32];
    int price;
    int year;
} Car;

Car cars[] = {
    {"Model S", "Tesla", 79999, 2022},
    {"Civic", "Honda", 24000, 2023},
    {"Camry", "Toyota", 27000, 2023},
    {"Mustang", "Ford", 55000, 2022},
    {"911", "Porsche", 120000, 2021},
    {"Aventador", "Lamborghini", 393695, 2023},
    {"Corolla", "Toyota", 20000, 2021},
    {"Phantom", "Rolls Royce", 450000, 2023},
    {"Altima", "Nissan", 25000, 2022},
    {"CX-5", "Mazda", 28000, 2023},
};

int len = sizeof(cars) / sizeof(Car);

int main(){
    int max_price = cars[0].price;

    for (int i = 1; i < len; i++) {
        if (cars[i].price > max_price) max_price = cars[i].price;
    }

    printf("Eng qimmat mashina:\n");
    printf("%-9s| %-11s| %-7s| %-5s\n", "Model", "Brand", "Price", "Year");
    printf("---------------------------------------\n");
    for (int i = 0; i < len; i++) {
        if (cars[i].price == max_price)
            printf("%-9s| %-11s| %-7d| %-5d\n", cars[i].model, cars[i].brand, cars[i].price, cars[i].year);
    }
    return 0;
}