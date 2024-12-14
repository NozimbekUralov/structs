#include <stdio.h>

typedef struct {
    char name[32];
    char brand[32];
    int price;
    char ram[5];
    char color[16];
} Phone;

Phone phones[10] = {
    {"Galaxy S20", "Samsung", 800, "8GB", "Black"},
    {"iPhone 12", "Apple", 1000, "6GB", "White"},
    {"Pixel 6", "Google", 600, "8GB", "Blue"},
    {"Redmi Note 10", "Xiaomi", 200, "4GB", "Gray"},
    {"OnePlus 9", "OnePlus", 700, "12GB", "Black"},
    {"Galaxy A51", "Samsung", 400, "6GB", "White"},
    {"iPhone SE", "Apple", 500, "3GB", "Red"},
    {"Moto G Power", "Motorola", 300, "4GB", "Blue"},
    {"Nokia 8.3", "Nokia", 650, "8GB", "Green"},
    {"Xperia 5 II", "Sony", 900, "8GB", "Black"}
};

int main(){
    int len = sizeof(phones) / sizeof(Phone);
    printf("Narxi $500 dan yuqori telefonlar:\n");
    printf("%-13s| %-8s| %-5s| %-5s| %-6s\n", "Name", "Brand", "Price", "RAM", "Color");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        printf("%-13s| %-8s| %-5d| %-5s| %-6s\n", 
            phones[i].name, phones[i].brand, phones[i].price, phones[i].ram, phones[i].color);
    }
    return 0;
}