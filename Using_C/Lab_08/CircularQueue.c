
#include <stdio.h> 
#define SIZE 5   
 
int queue[SIZE]; 
int front = -1, rear = -1; 
 
// Function to insert an element into the circular queue 
int insert(int value) { 
    if ((rear + 1) % SIZE == front) { 
        printf("Queue Overflow.\n"); 
        return 0; 
    } 
 
    if (front == -1) { 
        front = rear = 0; 
    } else { 
        rear = (rear + 1) % SIZE; 
    } 
 
    queue[rear] = value; 
    printf("Inserted: %d\n",value); 
    return 1; 
}

// Function to delete an element from the circular queue 
int delete() { 
    if (front == -1) { 
        printf("Queue Underflow.\n"); 
        return 0; 
    }  
    else { 
        int y = queue[front]; 
        printf("Deleted: %d\n",y); 
        if (front == rear) { 
            // Only one element was in the queue 
            front = rear = -1; 
            return y; 
        }  
        if(front==SIZE-1){ 
            front = 0; 
        } 
        else{ 
            front+=1; 
        } 
        return y; 
    } 
} 
 
// Function to display all elements in the circular queue 
void display() { 
    if (front == -1) { 
        printf("Queue Underflow.\n"); 
    }  
    printf("Queue elements: "); 
    int i = front; 
    while (1) { 
        printf("%d", queue[i]); 
        if (i == rear) 
            break; 
        i = (i + 1) % SIZE; 
    } 
}

// Main function with menu 
int main() { 
 
    int choice, value; 
     
    while (1) { 
        printf("\n--- Circular Queue Operations ---\n"); 
        printf("1. Insert\n"); 
        printf("2. Delete\n"); 
        printf("3. Display\n"); 
        printf("4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
         
        switch (choice) { 
            case 1: 
                printf("Enter value to insert: "); 
                scanf("%d", &value); 
                insert(value); 
                break; 
            case 2: 
                delete(); 
                break; 
            case 3: 
                display(); 
                break; 
            case 4: 
                printf("Exiting program.\n"); 
                return 0; 
            default: 
                printf("Invalid choice! Try again.\n"); 
        } 
    } 
    return 0; 
} 
 
 