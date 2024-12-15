#include <stdio.h>
#include <string.h>

typedef struct {
    char name[32];
    char location[32];
} Company;

typedef struct {
    char name[32];
    float price;
    int quantity;
    Company company;
} Product;

Product products[10] = {
    {"Product 1", 50.0, 100, {"Company A", "USA"}},
    {"Product 2", 30.0, 200, {"Company B", "USA"}},
    {"Product 3", 40.0, 150, {"Company C", "USA"}}, 
    {"Product 4", 20.0, 300, {"Company D", "USA"}},
    {"Product 5", 60.0, 100, {"Company E", "USA"}},
    {"Product 6", 70.0, 50, {"Company F", "USA"}},
    {"Product 7", 80.0, 200, {"Company G", "USA"}},
    {"Product 8", 90.0, 150, {"Company H", "USA"}},
    {"Product 9", 100.0, 300, {"Company I", "USA"}},
    {"Product 10", 110.0, 100, {"Company J", "UZB"}}
};

int len = sizeof(products) / sizeof(Product);

int main(){
    printf("AQSHda Ishlab Chiqarilgan Mahsulotlar:\n");
    printf("%-12s| %-6s| %-9s| %-12s| %-8s\n", "Product Name", "Price", "Quantity", "Company Name", "Location");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        if(strcmp(products[i].company.location, "USA") == 0){
            printf("%-12s| %-6.2f| %-9d| %-12s| %-8s\n",
                products[i].name, products[i].price, products[i].quantity, products[i].company.name, products[i].company.location);
        }
    }

    return 0;
}