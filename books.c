#include <stdio.h>

typedef struct {
    char name[32];
    int birth_year;
} Author;

typedef struct {
    char title[32];
    float price;
    int publish_year;
    Author auther;
} Book;

Book books[10] = {
    {"Book A", 25.0, 2021, {"Alex Black", 1990}},
    {"Book B", 30.0, 2023, {"Mary White", 1985}},
    {"Book C", 15.0, 1997, {"John Green", 1975}},
    {"Book D", 20.0, 1880, {"Mary White", 1985}},
    {"Book E", 35.0, 1994, {"Mary White", 1985}},
    {"Book F", 40.0, 1995, {"Alex Black", 1990}},
    {"Book G", 10.0, 1790, {"Mary White", 1985}},
    {"Book H", 50.0, 1890, {"Alex Black", 1990}},
    {"Book I", 45.0, 1990, {"Mary White", 1985}},
    {"Book J", 60.0, 1890, {"John Green", 1975}}
};

int len = sizeof(books) / sizeof(Book);

int main(){
    printf("XXI asr kitoblari:\n");
    printf("%-7s| %-6s| %-13s| %-12s| %s\n", "Title", "Price", "Published In", "Author Name", "Author Birth Year");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        if(books[i].publish_year >= 2000)
            printf("%-7s| %-6.2f| %-13d| %-12s| %d\n", books[i].title, books[i].price, books[i].publish_year, books[i].auther.name, books[i].auther.birth_year);
    }
    return 0;
}