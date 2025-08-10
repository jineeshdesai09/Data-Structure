// Write a menu driven program to implement following operations on the Queue 
// using an Array  
// • ENQUEUE  
// • DEQUEUE  
// • DISPLAY 
 
#include <stdio.h> 
#define SIZE 5   
 
int queue[SIZE];  
int front = -1, rear = -1;

void enqueue(int value) { 
    if (rear >= SIZE-1) { 
        printf("Queue Overflow!\n"); 
    } 
    rear++; 
    queue[rear] = value; 
         
    printf("Enqueued: %d\n", value); 
         
    if (front == -1) 
        front = 0; 
         
} 
int dequeue() { 
    if (front == -1) { 
        printf("Queue Underflow!\n"); 
        return 0; 
    }  
    printf("Dequeued: %d\n", queue[front]); 
 
    if(front==rear){ 
         front=rear=0;  
    }     
    else{ 
         front++; 
    } 
    return queue[front]; 
} 
        
void display() { 
    if (front == -1) { 
        printf("Queue Underflow.\n"); 
    }  
    else { 
        printf("Queue elements: "); 
        int i; 
        for (i = front; i <= rear; i++) { 
            printf("%d ", queue[i]); 
        } 
        printf("\n"); 
    } 
} 
 
int main() { 
 
    int choice, value; 
     
    while (1) { 
        printf("\n--- Queue Operations ---\n"); 
        printf("1. ENQUEUE\n"); 
        printf("2. DEQUEUE\n"); 
        printf("3. DISPLAY\n"); 
        printf("4. EXIT\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice);  
 
        switch (choice) { 
            case 1: 
                printf("Enter value to enqueue: "); 
                scanf("%d", &value); 
                enqueue(value); 
                break; 
            case 2: 
                dequeue(); 
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