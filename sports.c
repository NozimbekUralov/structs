#include <stdio.h>

typedef struct {
    char name[32];
    int capacity;
} Stadium;

typedef struct {
    char team_name[32];
    char coach[32];
    int players_count;
    int founded_year;
    Stadium stadium;
} Team;

Team teams[5] = {
    {"Team A", "Coach A", 11, 1950, {"Stadium A", 10000}},
    {"Team B", "Coach B", 12, 1951, {"Stadium B", 12000}},
    {"Team C", "Coach C", 13, 1952, {"Stadium C", 15000}},
    {"Team D", "Coach D", 14, 1953, {"Stadium D", 18000}},
    {"Team E", "Coach E", 15, 1954, {"Stadium E", 20000}}
};

int len = sizeof(teams) / sizeof(Team);

int main() {
    int oldest  = teams[0].founded_year;

    for (int i = 1; i < len; i++) {
        if (teams[i].founded_year < oldest) {
            oldest = teams[i].founded_year;
        }
    }

    printf("Eng eski jamoa:\n");
    printf("Team Name | Coach   | Players Count | Founded Year | Stadium Name\n");
    printf("------------------------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        if (teams[i].founded_year == oldest) {
            printf("%-10s| %-8s| %-14d| %-13d| %-10s\n",
                teams[i].team_name, teams[i].coach, teams[i].players_count, teams[i].founded_year, teams[i].stadium.name);
        }
    }
    return 0;
}