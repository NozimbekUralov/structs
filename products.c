#include <stdio.h>

typedef struct {
    char name[32];
    char category[32];
    float price;
    int quantity;
} Grocery;

Grocery groceries[10] = {
    {"Milk", "Dairy", 2.5, 20},
    {"Cheese", "Dairy", 5.0, 10},
    {"Yogurt", "Dairy", 1.5, 50},
    {"Bread", "Bakery", 1.2, 100},
    {"Butter", "Dairy", 3.0, 15},
    {"Eggs", "Dairy", 2.0, 30},
    {"Apple", "Fruit", 1.5, 40},
    {"Orange Juice", "Beverage", 3.5, 25},
    {"Chicken", "Meat", 7.5, 10},
    {"Ice Cream", "Dairy", 4.5, 12}
};

int len = sizeof(groceries) / sizeof(Grocery);

int main(){
    printf("Sut mahsulotlari:\n");
    printf("%-12s| %-9s| %-6s| %-9s\n", "Name", "Category", "Price", "Quantity");
    printf("-----------------------------------------\n");
    for (int i = 0; i < len; i++) {
        printf("%-12s| %-9s| %-6.2f| %-9d\n", groceries[i].name, groceries[i].category, groceries[i].price, groceries[i].quantity);
    }
    return 0;
}