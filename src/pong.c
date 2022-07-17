#include <stdio.h>

void printTable(int leftR, int rightR, int ball) {
     for (int height = 0; height < 25; height++)  {  // height - высота поля
         for (int width = 0; width < 80; width++) {   // width - ширина поля
         if (height == 0 || height == 24) {
             printf("-");
         } else if (((height == leftR || height == leftR+1 || height == leftR - 1) && width == 0) ||
         ((height == rightR ||height == rightR+1 || height == rightR-1) && width == 79)) {
         printf("|");
         } else  if (height == 12 && width == ball) {
             printf("o");
             } else {
             printf(" ");
         }
         }
         printf("\n");
     }
    }
    int playerOneTurn(char key, int currentPosition) {
        if (key == 'a') {
            if (currentPosition > 2) {
                currentPosition--;
            }
            } else if (key == 'z') {
            if (currentPosition < 22) {
                currentPosition++;
            }
    }
        return currentPosition;
}
int playerTwoTurn(char key, int currentPosition) {
        if (key == 'k') {
            if (currentPosition > 2) {
                currentPosition--;
            }
            } else if (key == 'm') {
            if (currentPosition < 22) {
                currentPosition++;
            }
    }
        return currentPosition;
}

int main() {
    int leftR = 12;
    int rightR = 12;
    int ball = 1;
    int prevBall;
    int playerOneScore = 0;
    int playerTwoScore = 0;

    while (playerOneScore <= 21 || playerTwoScore <= 21) {
        if (playerOneScore == 21) {
            printf("Player 1 win! Congratulations!");
            break;
        } else if (playerTwoScore == 21) {
            printf("Player 2 win! Congratulations!");
            break;
        }

       char key;
        key = getchar();
        if (key == 'a' || key == 'z') {
        leftR = playerOneTurn(key, leftR);
        if (ball == 1 && (leftR == 11 || leftR == 12 || leftR ==13)) {
        prevBall = ball;
        ball++;
        printTable(leftR, rightR, ball);
    } else if (ball == 78 && (rightR == 11 || rightR == 12 || rightR ==13)) {
        prevBall = ball;
        ball--;
        printTable(leftR, rightR, ball);
    } else if (ball == 1 && (leftR != 11 && leftR != 12 && leftR != 13)) {
        playerTwoScore++;
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        ball = 1;
        prevBall = 0;
        leftR = 12;
        rightR = 12;
    } else if (ball == 78 && (rightR != 11 && rightR != 12 && rightR != 13)) {
        playerOneScore++;
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        ball = 78;
        prevBall = 0;
        leftR = 12;
        rightR = 12;
    } else if (ball > 1 && ball < 78) {
        if (prevBall < ball) {
                prevBall = ball;
                ball++;
                printTable(leftR, rightR, ball);
            } else if (prevBall > ball) {
                prevBall = ball;
                ball--;
                printTable(leftR, rightR, ball);
    }
    } else {
        printf("Ball motion mistake!\n");
    }
    } else if (key == 'k' || key == 'm') {
        rightR = playerTwoTurn(key, rightR); {
    if (ball == 1 && (leftR == 11 || leftR == 12 || leftR ==13)) {
        prevBall = ball;
        ball++;
        printTable(leftR, rightR, ball);
    } else if (ball == 78 && (rightR == 11 || rightR == 12 || rightR ==13)) {
        prevBall = ball;
        ball--;
        printTable(leftR, rightR, ball);
    } else if (ball == 1 && (leftR != 11 && leftR != 12 && leftR != 13)) {
        playerTwoScore++;
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        ball = 1;
        prevBall = 0;
        leftR = 12;
        rightR = 12;
    } else if (ball == 78 && (rightR != 11 && rightR != 12 && rightR != 13)) {
        playerOneScore++;
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        ball = 78;
        prevBall = 0;
        leftR = 12;
        rightR = 12;
    } else if (ball > 1 && ball < 78) {
        if (prevBall < ball) {
                prevBall = ball;
                ball++;
                printTable(leftR, rightR, ball);
            } else if (prevBall > ball) {
                prevBall = ball;
                ball--;
                printTable(leftR, rightR, ball);
    }
    } else {
        printf("Ball motion mistake!\n");
    }
}
} else if (key == ' ') {
    if (ball == 1 && (leftR == 11 || leftR == 12 || leftR ==13)) {
        prevBall = ball;
        ball++;
        printTable(leftR, rightR, ball);
    } else if (ball == 78 && (rightR == 11 || rightR == 12 || rightR ==13)) {
        prevBall = ball;
        ball--;
        printTable(leftR, rightR, ball);
    } else if (ball == 1 && (leftR != 11 && leftR != 12 && leftR != 13)) {
        playerTwoScore++;
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        ball = 1;
        prevBall = 0;
        leftR = 12;
        rightR = 12;
    } else if (ball == 78 && (rightR != 11 && rightR != 12 && rightR != 13)) {
        playerOneScore++;
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        ball = 78;
        prevBall = 0;
        leftR = 12;
        rightR = 12;
    } else if (ball > 1 && ball < 78) {
        if (prevBall < ball) {
                prevBall = ball;
                ball++;
                printTable(leftR, rightR, ball);
            } else if (prevBall > ball) {
                prevBall = ball;
                ball--;
                printTable(leftR, rightR, ball);
    }
    } else {
        printf("Ball motion mistake!\n");
    }
} else if (key == 'q') {
        printf("Player 1: %d\nPlayer 2: %d\n", playerOneScore, playerTwoScore);
        break;
}
}
    }

