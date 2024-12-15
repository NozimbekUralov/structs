#include <stdio.h>
#include <string.h>

typedef struct {
    char name[32];
    char description[64];
} Genre;

typedef struct {
    char name[32];
    float rating;
    int release_year;
    Genre genre;
} Movie;

Movie movies[5] = {
    {"Movie A", 8.5, 2022, {"Action", "Action-packed thriller"}},
    {"Movie B", 9.0, 2023, {"Action", "High-octane adventure"}},
    {"Movie C", 7.0, 2019, {"Thriller", "Suspenseful thriller"}},
    {"Movie D", 6.5, 2020, {"Drama", "Emotional drama"}},
    {"Movie E", 8.0, 2021, {"Comedy", "Laugh-out-loud comedy"}},
};

int len = sizeof(movies) / sizeof(Movie);

int main(){
    printf("Action janridagi kinolar:\n");
    printf("%-7s| %-7s| %-13s| %-6s| %-18s\n", "Name", "Rating", "Release year", "Genre", "Genre Description");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        if (strcmp(movies[i].genre.name, "Action") == 0) {
            printf("%-7s| %-7.1f| %-13d| %-6s| %s\n", movies[i].name, movies[i].rating, movies[i].release_year, movies[i].genre.name, movies[i].genre.description);
        }
    }
    return 0;
}