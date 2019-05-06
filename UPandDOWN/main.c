//
//  main.c
//  UPandDOWN
//
//  Created by 곽현민 on 07/05/2019.
//  Copyright © 2019 Tronix. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void type1(int com);

int main(int argc, const char * argv[]) {
    puts("UP AND DOWN 게임!");
    puts("1부터 100까지의 숫자를 맞추세요!");

    srand((unsigned int)time(NULL));
    int com = rand() % 100 + 1;
    type1(com);
    
    return 0;
}

void type1(int com) {
    int user, count = 0;
    puts("===============================================================================");
    puts("컴퓨터가 생각하는 숫자를 맞출 때까지 1부터 100까지의 숫자를 입력해 보세요!");
    printf("게임을 시작하려면 엔터키를 누르세요.");
    getchar();
    puts("-------------------------------------------------------------------------------");
    
    while (1) {
        count++;
        printf("%d번째 시도: ", count);
        scanf("%d", &user);
        
        if (com > user) {
            puts("UP!");
        } else if (com < user) {
            puts("DOWN!");
        } else {
            break;
        }
    }
    
    puts("===============================================================================");
    printf("컴퓨터가 생각한 숫자: %d\n", com);
    printf("%d번만에 맞추었습니다!\n", count);
}
