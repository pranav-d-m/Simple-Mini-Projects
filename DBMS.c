#include <stdio.h> 
#include <stdlib.h> 
#define MAX_RECORDS 100 // Maximum number of records in the database 
#define NAME_LEN 50 
#define EMAIL_LEN 50 
// Structure to hold a record 
typedef struct
{ 
    int id; 
    char name[NAME_LEN]; 
    char email[EMAIL_LEN]; 
} Record; 
// Simulated "table" (array of records) 
Record table[MAX_RECORDS]; 
int record_count = 0; 
// Function prototypes 
void create_record(int id, char name[], char email[]); 
void read_record(int id); 
void update_record(int id, char name[], char email[]); 
void delete_record(int id); 
void show_records(); 
// Function to create a new record 
void create_record(int id, char name[], char email[]) 
{ 
    if (record_count >= MAX_RECORDS)
    { 
        printf("Database is full, cannot add more records.\n"); 
        return; 
    } 
    for (int i = 0; i < record_count; i++) 
    { 
        if (table[i].id == id)
        { 
            printf("Record with ID %d already exists.\n", id); 
            return; 
        } 
    } 
    table[record_count].id = id; 
    strncpy(table[record_count].name, name, NAME_LEN); 
    strncpy(table[record_count].email, email, EMAIL_LEN);
    record_count++; 
    printf("Record with ID %d created successfully.\n", id); 
} 
// Function to read a record by ID 
void read_record(int id) 
{ 
    for (int i = 0; i < record_count; i++) 
    { 
        if (table[i].id == id) { 
            printf("ID: %d\nName: %s\nEmail: %s\n", table[i].id, table[i].name, table[i].email); 
            return; 
        } 
    } 
    printf("Record with ID %d not found.\n", id); 
} 
// Function to update a record by ID 
void update_record(int id, char name[], char email[]) 
{ for (int i = 0; i < record_count; i++) { 
if (table[i].id == id) { 
strncpy(table[i].name, name, NAME_LEN); 
strncpy(table[i].email, email, EMAIL_LEN); 
printf("Record with ID %d updated successfully.\n", id); 
return; 
} 
} 
printf("Record with ID %d not found.\n", id); 
} 
// Function to delete a record by ID 
void delete_record(int id) { 
for (int i = 0; i < record_count; i++) 
{ if (table[i].id == id) { 
// Shift the remaining records to fill the gap 
for (int j = i; j < record_count - 1; j++) { 
table[j] = table[j + 1]; 
} 
record_count--; 
printf("Record with ID %d deleted successfully.\n", id); 
return; 
} 
} 
printf("Record with ID %d not found.\n", id); 
} 
// Function to show all records 
void show_records() 
{ 
    if (record_count == 0) 
    { 
        printf("No records found.\n");
        return; 
    }    
    printf("All Records:\n"); 
    for (int i = 0; i < record_count; i++) 
    { 
        printf("ID: %d | Name: %s | Email: %s\n", table[i].id, table[i].name, table[i].email); 
    } 
} 
// Main function to interact with the database 
int main() { 
int choice, id; 
char name[NAME_LEN], email[EMAIL_LEN]; 
while (1) { 
printf("\nDatabase Management System\n"); 
printf("1. Create Record\n"); 
printf("2. Read Record\n"); 
printf("3. Update Record\n"); 
printf("4. Delete Record\n"); 
printf("5. Show All Records\n");
printf("6. Exit\n"); 
printf("Enter your choice: "); 
scanf("%d", &choice); 
switch (choice) 
{ case 1: 
printf("Enter ID: "); 
scanf("%d", &id); 
printf("Enter Name: "); 
scanf("%s", name); 
printf("Enter Email: "); 
scanf("%s", email); 
create_record(id, name, email); 
break; 
case 2: 
printf("Enter ID: "); 
scanf("%d", &id); 
read_record(id); 
break; 
case 3: 
printf("Enter ID: "); 
scanf("%d", &id); 
printf("Enter new Name: "); 
scanf("%s", name); 
printf("Enter new Email: "); 
scanf("%s", email); 
update_record(id, name, email); 
break; 
case 4: 
printf("Enter ID: "); 
scanf("%d", &id); 
delete_record(id); 
break; 
case 5: 
show_records(); 
break; 
case 6: 
printf("Exiting...\n"); 
return 0; 
default: 
printf("Invalid choice. Please try again.\n"); 
} 
} 
return 0; 
}