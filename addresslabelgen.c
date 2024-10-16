#include <stdio.h>
#include <string.h>

#define MAX 1 // Number of address labels to generate

// Structure definition for an address
struct Address {
    char name[50];
    char street[100];
    char city[50];
    char state[50];
    char zip[10];
};

// Function to print address label
void printLabel(struct Address addr) {
    printf("\n--- Address Label ---\n");
    printf("Name: %s\n", addr.name);
    printf("Street: %s\n", addr.street);
    printf("City: %s\n", addr.city);
    printf("State: %s\n", addr.state);
    printf("ZIP Code: %s\n", addr.zip);
    printf("----------------------\n");
}

int main() {
    struct Address labels[MAX]; // Array of Address structures
    int i;

    // Input addresses
    for(i = 0; i < MAX; i++) {
        printf("Enter details for address label %d\n", i+1);
        printf("Enter Name: ");
        fgets(labels[i].name, sizeof(labels[i].name), stdin);
        labels[i].name[strcspn(labels[i].name, "\n")] = 0; // Remove newline character
        
        printf("Enter Street: ");
        fgets(labels[i].street, sizeof(labels[i].street), stdin);
        labels[i].street[strcspn(labels[i].street, "\n")] = 0;
        
        printf("Enter City: ");
        fgets(labels[i].city, sizeof(labels[i].city), stdin);
        labels[i].city[strcspn(labels[i].city, "\n")] = 0;
        
        printf("Enter State: ");
        fgets(labels[i].state, sizeof(labels[i].state), stdin);
        labels[i].state[strcspn(labels[i].state, "\n")] = 0;
        
        printf("Enter ZIP Code: ");
        fgets(labels[i].zip, sizeof(labels[i].zip), stdin);
        labels[i].zip[strcspn(labels[i].zip, "\n")] = 0;

        printf("\n");
    }

    // Print all address labels
    for(i = 0; i < MAX; i++) {
        printLabel(labels[i]);
    }

    return 0;
}
 
