#include <stdio.h>

int CURRENT_YEAR = 2024;

typedef struct{
    char card_holder_name[32];
    char card_number[20];
    int expiry_year;
    int cvv;
}Card;

Card cards[5] = {
    {"John Doe", "1234 5678 9012 3456", 2029, 123},
    {"Jane Smith", "2345 6789 0123 4567", 2029, 456},
    {"Ali Karimov", "3456 7890 1234 5678", 2025, 789},
    {"Sara Lee", "4567 8901 2345 6789", 2030, 234},
    {"Tom Brown", "5678 9012 3456 7890", 2023, 345}
};

int len = sizeof(cards) / sizeof(Card);

int main(){
    printf("Amal qilyotgan kartalar:\n");
    printf("%-12s| %-20s| %-7s| %-4s\n", "Holder Name", "Card Number", "Expires", "CVV");
    printf("------------------------------------------------\n");
    for(int i=0; i<len; i++){
        if(cards[i].expiry_year > CURRENT_YEAR){
            printf("%-12s| %-20s| %-7d| %-4d\n", 
                cards[i].card_holder_name, cards[i].card_number, cards[i].expiry_year, cards[i].cvv);
        }
    }
    return 0;
}