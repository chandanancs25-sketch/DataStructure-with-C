#include <stdio.h>
#include <stdlib.h>

#define n 2

int queue[n];
int front = -1, rear = -1;

// Add element to the queue
void enqueue(int value) {
    if (rear == n - 1) {
        printf("Queue is full!\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = value;
    } else {
        rear++;
        queue[rear] = value;
    }
}

// Remove element from the queue
void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty!\n");
    } else if (front == rear) {
        printf("Deleted element = %d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("Deleted element = %d\n", queue[front]);
        front++;
    }
}

// Display all elements
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Peek at the front element
void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element = %d\n", queue[front]);
    }
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n----- Queue Menu -----\n");
        printf("1. Enqueue, 2. Dequeue, 3.Display ,4. Peek , 5. Exit");

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
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
