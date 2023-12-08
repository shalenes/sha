#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void clearScreen() {
    system("clear");
}

void move(char (*arr)[25], int *X, int *Y) {
    arr[*Y][*X] = ' ';
    int move = rand() % 4;
    if (move == 0 && *Y > 1) {
        (*Y)--;
    } else if (move == 1 && *Y < 23) {
        (*Y)++;
    } else if (move == 2 && *X > 1) {
        (*X)--;
    } else if (move == 3 && *X < 23) {
        (*X)++;
    }
    arr[*Y][*X] = 'p';
}

void printMap(char (*arr)[25]) {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 25; j++) {
            if (arr[i][j] == 'w') {
                printf("🟩 ");
            } else if (arr[i][j] == 'p') {
                printf("🤓 ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    srand(time(NULL));

    while (1) {
        double kg = 10.0;
        double aff = 0;
        char map[25][25];

        for (int i = 0; i < 25; i++) {
            for (int j = 0; j < 25; j++) {
                if (i == 0 || i == 24 || j == 0 || j == 24) {
                    map[i][j] = 'w';
                } else {
                    map[i][j] = ' ';
                }
            }
        }

        int X = 12, Y = 12;
        map[Y][X] = 'p';

        int die = 1;
        while (kg < 100.0) {
            aff += 5.0;
            int ddong = rand() % 10; //똥 살 확률 설정
            int sick = rand() % 10;  //병에 걸릴 확률 설정

            while (sick < 1) {  // 10퍼센트 확률로 병에 걸리는 반복문
                int reco = rand() % 10000 + 1; // 병에서 회복되는 확률 설정
                int over = rand() % 100;   // 병에 걸렸을때 사망하는 확률 설정
                aff += 5.0;   // 병에 걸려도 애정도는 증가함
                
                if (reco < 10 * aff) { 
                    aff *= 0.9;
                    break;
                }
                if (over < 3) {
                    die = 2;
                    break;
                }
            }
            kg += 0.3;
            if (ddong < 5) {
                kg -= 0.2;
            }

            if (die == 2) {
                printf("사망했습니다. 게임을 다시 시작합니다.\n");
                sleep(1); 
                break;
            }

            usleep(30000);
            move(map, &X, &Y);
            clearScreen();
            printMap(map);
            printf("몸무게: %.2fkg 애정도: %.1f    \n", kg, aff);
        }
    if(kg >= 100){
        break;
    }
    }
    return 0;
}

