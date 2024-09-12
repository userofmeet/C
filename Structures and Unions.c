// Model a bookshop inventory program to maintain the inventory of books. The list includes details such as author, title, price, publisher, stock position etc. Whenever
// the customer wants a book, the shopkeeper inputs the title and the author’s name of
// the book and the system replies whether it is in the list or not. If it is in the list, then
// the system displays the book details and asks for the number of copies. If the
// requested copies are available, the total cost of the books is displayed. Use the
// concept of passing structures to functions.
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 50
#define MAX_AUTHOR 50
#define MAX_PUBLISHER 50

typedef struct {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float price;
    char publisher[MAX_PUBLISHER];
    int stock;
} Book;

void searchBook(Book books[], int numBooks, char *title, char *author) {
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].title, title) == 0 && strcmp(books[i].author, author) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            printf("Publisher: %s\n", books[i].publisher);
            printf("Stock: %d\n", books[i].stock);

            int requestedCopies;
            printf("Enter the number of copies you want: ");
            scanf("%d", &requestedCopies);

            if (requestedCopies <= books[i].stock) {
                printf("Total cost: %.2f\n", requestedCopies * books[i].price);
            } else {
                printf("Not enough stock available.\n");
            }
            return;
        }
    }
    printf("Book not found in the inventory.\n");
}

int main() {
    Book books[MAX_BOOKS];
    int numBooks;

    printf("Enter the number of books in the inventory: ");
    scanf("%d", &numBooks);
    getchar(); // to consume newline character

    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, MAX_TITLE, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // Remove newline character

        printf("Author: ");
        fgets(books[i].author, MAX_AUTHOR, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; // Remove newline character

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); // to consume newline character

        printf("Publisher: ");
        fgets(books[i].publisher, MAX_PUBLISHER, stdin);
        books[i].publisher[strcspn(books[i].publisher, "\n")] = '\0'; // Remove newline character

        printf("Stock: ");
        scanf("%d", &books[i].stock);
        getchar(); // to consume newline character
    }

    char searchTitle[MAX_TITLE], searchAuthor[MAX_AUTHOR];
    printf("Enter the title of the book to search: ");
    fgets(searchTitle, MAX_TITLE, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0'; // Remove newline character

    printf("Enter the author of the book to search: ");
    fgets(searchAuthor, MAX_AUTHOR, stdin);
    searchAuthor[strcspn(searchAuthor, "\n")] = '\0'; // Remove newline character

    searchBook(books, numBooks, searchTitle, searchAuthor);

    return 0;
}



// Define a structure called cricket that will describe the following information: Player
// name, team name, batting average. Using cricket, declare an array player with 50
// elements and write a program to read the information about all the 50 players. Also
// print a team-wise list containing names of players with their batting averages.
#include <stdio.h>
#define MAX_PLAYERS 50
#define MAX_NAME 50
#define MAX_TEAM 50

typedef struct {
    char playerName[MAX_NAME];
    char teamName[MAX_TEAM];
    float battingAverage;
} CricketPlayer;

int main() {
    CricketPlayer players[MAX_PLAYERS];
    int i;

    // Read information about players
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Player name: ");
        fgets(players[i].playerName, MAX_NAME, stdin);
        players[i].playerName[strcspn(players[i].playerName, "\n")] = '\0'; // Remove newline character

        printf("Team name: ");
        fgets(players[i].teamName, MAX_TEAM, stdin);
        players[i].teamName[strcspn(players[i].teamName, "\n")] = '\0'; // Remove newline character

        printf("Batting average: ");
        scanf("%f", &players[i].battingAverage);
        getchar(); // to consume newline character
    }

    // Print team-wise list
    printf("\nTeam-wise list of players:\n");
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("Player: %s, Team: %s, Batting Average: %.2f\n", players[i].playerName, players[i].teamName, players[i].battingAverage);
    }
    return 0;
}
