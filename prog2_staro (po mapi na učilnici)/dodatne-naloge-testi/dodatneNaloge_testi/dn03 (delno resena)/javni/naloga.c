#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

typedef struct {
    int x, y;
    int type;
} Item;

typedef struct {
    int x, y;
} Position;

int n, k;
Item items[MAX_SIZE];
int direction[2] = {0, 1}; // Initial direction is up (0, 1)
Position snake[MAX_SIZE * MAX_SIZE];
int snakeLength = 1;

// Function to check if a position is occupied by the snake
int isOccupied(int x, int y, int length) {
    for (int i = 0; i < length; i++) {
        if (snake[i].x == x && snake[i].y == y) {
            return 1;
        }
    }
    return 0;
}

// Function to get item type at a given position
int getItemType(int x, int y) {
    for (int i = 0; i < n; i++) {
        if (items[i].x == x && items[i].y == y) {
            return items[i].type;
        }
    }
    return 0;
}

// Function to turn left
void turnLeft() {
    int tmp = direction[0];
    direction[0] = -direction[1];
    direction[1] = tmp;
}

// Function to turn right
void turnRight() {
    int tmp = direction[0];
    direction[0] = direction[1];
    direction[1] = -tmp;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &items[i].x, &items[i].y, &items[i].type);
    }
    scanf("%d", &k);

    snake[0].x = 0;
    snake[0].y = 0;

    for (int step = 0; step < k; step++) {
        int newX = snake[0].x + direction[0];
        int newY = snake[0].y + direction[1];

        if (isOccupied(newX, newY, snakeLength)) {
            printf("0\n");
            return 0;
        }

        for (int i = snakeLength - 1; i > 0; i--) {
            snake[i] = snake[i - 1];
        }

        snake[0].x = newX;
        snake[0].y = newY;

        int itemType = getItemType(newX, newY);
        if (itemType == 1) {
            snakeLength++;
        } else if (itemType == 2) {
            turnLeft();
        } else if (itemType == 3) {
            turnRight();
        }
    }

    printf("%d %d %d\n", snakeLength, snake[0].x, snake[0].y);

    return 0;
}
