/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 27/10/24
TO MANAGE SPORTS TEAM  */
#include<stdio.h>
#include<conio.h>
#include <string.h>

// Defining the Coach structure
struct Coach {
    char name[50];  // Name of the coach
    int age;        // Age of the coach
    int experience; // Experience in years
};

// Defining the Team structure, which contains a Coach structure
struct Team {
    char teamName[50];   // Name of the team
    char sportType[50];  // Type of sport (e.g., Basketball, Football)
    struct Coach coach;  // Coach information (nested structure)
};
// Function to add a team and coach
void addTeam(struct Team *team) {
    printf("\nEnter team name: ");
    fgets(team->teamName, sizeof(team->teamName), stdin);
    team->teamName[strcspn(team->teamName, "\n")] = '\0'; // Removing newline character

    printf("Enter sport type (e.g., Basketball, Football): ");
    fgets(team->sportType, sizeof(team->sportType), stdin);
    team->sportType[strcspn(team->sportType, "\n")] = '\0'; // Removing newline character

    printf("Enter coach's name: ");
    fgets(team->coach.name, sizeof(team->coach.name), stdin);
    team->coach.name[strcspn(team->coach.name, "\n")] = '\0'; // Removing newline character

    printf("Enter coach's age: ");
    scanf("%d", &team->coach.age);

    printf("Enter coach's experience in years: ");
    scanf("%d", &team->coach.experience);

    getchar(); // To clear the buffer left by scanf
}

// Function to display a team's information
void displayTeam(struct Team team) {
    printf("\nTeam Name: %s", team.teamName);
    printf("\nSport Type: %s", team.sportType);
    printf("\nCoach Name: %s", team.coach.name);
    printf("\nCoach Age: %d", team.coach.age);
    printf("\nCoach Experience: %d years\n", team.coach.experience);
}
// Function to search for a team by name
int searchTeam(struct Team teams[], int numTeams, const char *teamName) {
    for (int i = 0; i < numTeams; i++) {
        if (strcmp(teams[i].teamName, teamName) == 0) {
            displayTeam(teams[i]);
            return 1; // Team found
        }
    }
    return 0; // Team not found
}

int main() {
    struct Team teams[10]; // Array to store up to 10 teams
    int numTeams = 0; // Counter for the number of teams added
    int choice;
    char searchName[50];

    while (1) {
        printf("\nSports Team Management System\n");
        printf("1. Add a Team\n");
        printf("2. Search for a Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To clear the buffer left by scanf

        switch (choice) {
            case 1:
                if (numTeams < 10) {
                    addTeam(&teams[numTeams]);
                    numTeams++;
                } else {
                    printf("Max number of teams reached!\n");
                }
                break;
            case 2:
                printf("Enter the team name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0'; // Removing newline character

                if (!searchTeam(teams, numTeams, searchName)) {
                    printf("Team not found!\n");
                }
                break;
            case 3:
                if (numTeams == 0) {
                 printf("No teams available.\n");
                } else {
                    for (int i = 0; i < numTeams; i++) {
                        displayTeam(teams[i]);
                    }
                }
                break;
            case 4:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    printf("\n24CE053_Vaibhavi");
    return 0;
}
