// Write a menu driven program to implement following operations on the Doubled 
// Ended Queue using an Array  
// • Insert at front end, Insert at rear end  
// • Delete from front end, Delete from rear end  
// • Display all elements of the queue 
 
#include <stdio.h> 
#define SIZE 100 
 
int queue[SIZE]; 
int front = -1, rear = -1; 
 
// Insert at rear end 
void insertRear(int value) { 
    if (rear >= SIZE - 1) { 
        printf("Queue Overflow!\n"); 
        return; 
    } 
    if (front == -1) {  
        front = 0; 
    }  
    else { 
        rear++; 
    } 
    queue[rear] = value; 
    printf("Inserted %d at rear.\n", value); 
} 
 
// Insert at front end 
void insertFront(int value) { 
    if (front == 0) { 
        printf("Queue Overflow!\n"); 
        return; 
    } 
    if (front == -1) { // empty queue 
        front = rear = 0; 
    }  
    else { 
        front--; 
    }  
    queue[front] = value; 
    printf("Inserted %d at front.\n", value); 
}

// Delete from front 
void deleteFront() { 
    if (front == -1) { 
        printf("Queue Underflow!\n"); 
        return; 
    } 
    printf("Deleted %d from front.\n", queue[front]); 
    if (front == rear) { 
        front = rear = -1; 
    }  
    else { 
        front++; 
    } 
} 
// Delete from rear 
void deleteRear() { 
    if (rear == -1) { 
        printf("Queue Underflow!\n"); 
        return; 
    } 
    printf("Deleted %d from rear.\n", queue[rear]); 
    if (front == rear) { 
        front = rear = -1; 
    }  
    else { 
        rear--; 
    } 
} 
 
// Display queue 
void display() { 
    if (front == -1) { 
        printf("Queue Underflow!\n"); 
        return; 
    } 
    printf("Queue elements: "); 
    int i; 
    for (i = front; i <= rear; i++) { 
        printf("%d ", queue[i]); 
    } 
    printf("\n"); 
}

int main() { 
    int choice, value; 
 
    while (1) { 
        printf("\n--- Dqueue Menu ---\n"); 
        printf("1. Insert at Front\n"); 
        printf("2. Insert at Rear\n"); 
        printf("3. Delete from Front\n"); 
        printf("4. Delete from Rear\n"); 
        printf("5. Display\n"); 
        printf("6. Exit\n"); 
        printf("Enter choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
        case 1: 
            printf("Enter value to insert at front: "); 
            scanf("%d", &value); 
            insertFront(value); 
            break; 
        case 2: 
            printf("Enter value to insert at rear: "); 
            scanf("%d", &value); 
            insertRear(value); 
            break; 
        case 3: 
            deleteFront(); 
            break; 
        case 4: 
            deleteRear(); 
            break; 
        case 5: 
            display(); 
            break; 
        case 6: 
            printf("Exiting program.\n"); 
            return 0; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } 
    return 0; 
} 
