//
//  main.c
//  math
//
//  Created by 二渡和輝 on 2020/01/10.
//  Copyright © 2020 二渡和輝. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int theNumberOfCorrectAnswers = 0;
time_t startTime, endTime;
long Time = 0;
int score = 0;

int additionLevel1(){
    startTime = time(NULL);
    for(int i = 1; i < 11; i++){
        srand((unsigned int)time(NULL));
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        printf("%02d: %d + %d = ", i, a, b);
        int answer;
        scanf("%d", &answer);
        if(answer == a + b){
            printf("◯\n");
            theNumberOfCorrectAnswers += 1;
        }else{
            printf("× %d\n", a + b);
        }
    }
    endTime = time(NULL);
    Time = endTime - startTime;
    printf("time: %ld\n", Time);
    printf("The Number Of Correct Answers Is %d\n", theNumberOfCorrectAnswers);
    score = ((int)Time - 103 ) * -1 * theNumberOfCorrectAnswers;
    return score;
}

int additionLevel2(){
    startTime = time(NULL);
    for(int i = 1; i < 11; i++){
        srand((unsigned int)time(NULL));
        int a = rand() % 99 + 1;
        int b = rand() % 9 + 1;
        printf("%02d: %d + %d = ", i, a, b);
        int answer;
        scanf("%d", &answer);
        if(answer == a + b){
            printf("◯\n");
            theNumberOfCorrectAnswers += 1;
        }else{
            printf("× %d\n", a + b);
        }
    }
    endTime = time(NULL);
    Time = endTime - startTime;
    printf("time: %ld\n", Time);
    printf("The Number Of Correct Answers Is %d\n", theNumberOfCorrectAnswers);
    score = ((int)Time - 125 ) * -1 * theNumberOfCorrectAnswers;
    return score;
}

int additionLevel3(){
    startTime = time(NULL);
    for(int i = 1; i < 11; i++){
        srand((unsigned int)time(NULL));
        int a = rand() % 99 + 1;
        int b = rand() % 99 + 1;
        printf("%02d: %d + %d = ", i, a, b);
        int answer;
        scanf("%d", &answer);
        if(answer == a + b){
            printf("◯\n");
            theNumberOfCorrectAnswers += 1;
        }else{
            printf("× %d\n", a + b);
        }
    }
    endTime = time(NULL);
    Time = endTime - startTime;
    printf("time: %ld\n", Time);
    printf("The Number Of Correct Answers Is %d\n", theNumberOfCorrectAnswers);
    score = ((int)Time - 125 ) * -1 * theNumberOfCorrectAnswers;
    return score;
}

int multiplicationLevel1(){
    startTime = time(NULL);
    for(int i = 1; i < 11; i++){
        srand((unsigned int)time(NULL));
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        printf("%02d: %d × %d = ", i, a, b);
        int answer;
        scanf("%d", &answer);
        if(answer == a * b){
            printf("◯\n");
            theNumberOfCorrectAnswers += 1;
        }else{
            printf("× %d\n", a * b);
        }
    }
    endTime = time(NULL);
    Time = endTime - startTime;
    printf("time: %ld\n", Time);
    printf("The Number Of Correct Answers Is %d\n", theNumberOfCorrectAnswers);
    score = ((int)Time - 105 ) * -1 * theNumberOfCorrectAnswers;
    return score;
}

int multiplicationLevel2(){
    startTime = time(NULL);
    for(int i = 1; i < 11; i++){
        srand((unsigned int)time(NULL));
        int a = rand() % 99 + 1;
        int b = rand() % 9 + 1;
        printf("%02d: %d × %d = ", i, a, b);
        int answer;
        scanf("%d", &answer);
        if(answer == a * b){
            printf("◯\n");
            theNumberOfCorrectAnswers += 1;
        }else{
            printf("× %d\n", a * b);
        }
    }
    endTime = time(NULL);
    Time = endTime - startTime;
    printf("time: %ld\n", Time);
    printf("The Number Of Correct Answers Is %d\n", theNumberOfCorrectAnswers);
    score = ((int)Time - 130 ) * -1 * theNumberOfCorrectAnswers;
    return score;
}

int multiplicationLevel3(){
    startTime = time(NULL);
    for(int i = 1; i < 11; i++){
        srand((unsigned int)time(NULL));
        int a = rand() % 99 + 1;
        int b = rand() % 99 + 1;
        printf("%02d: %d × %d = ", i, a, b);
        int answer;
        scanf("%d", &answer);
        if(answer == a * b){
            printf("◯\n");
            theNumberOfCorrectAnswers += 1;
        }else{
            printf("× %d\n", a * b);
        }
    }
    endTime = time(NULL);
    Time = endTime - startTime;
    printf("time: %ld\n", Time);
    printf("The Number Of Correct Answers Is %d\n", theNumberOfCorrectAnswers);
    score = ((int)Time - 155 ) * -1 * theNumberOfCorrectAnswers;
    return score;
}

void checkScore(int score){
    printf("Your Score: %d   ", score);
    if(score >= 900){
        printf("Excelent!!!\n");
    }else if(700 <= score && score < 900){
        printf("Good Job!!\n");
    }else if(450 <= score && score < 700){
        printf("Nice!\n");
    }else{
        printf("You Bad\n");
    }
}

int main(){
    int retry = 1;
    while(retry == 1){
        printf("Select Mode\nAddition: 1   Multiplication: 2\n");
        int selectedType, selectedLevel;
        printf("Chose Mode 1~2: ");
        scanf("%d", &selectedType);
        if(selectedType == 1){
            printf("\nSelect Level\nLevel 1: 0 + 0\nLevel 2: 00 + 0\nLevel 3: 00 + 00\n");
        }else{
            printf("\nSelect Level\nLevel 1: 0 × 0\nLevel 2: 00 × 0\nLevel 3: 00 × 00\n");
        }
        printf("Chose Level 1~3: ");
        scanf("%d", &selectedLevel);
        printf("\n");
        if(selectedType == 2){
            selectedLevel += 2;
        }
        int selectedMode = selectedType + selectedLevel;
        printf("Start With EnterKey");
        getchar();
        getchar();
        
        if(selectedMode == 2){
            additionLevel1();
        }else if(selectedMode == 3){
            additionLevel2();
        }else if(selectedMode == 4){
            additionLevel3();
        }else if(selectedMode == 5){
            multiplicationLevel1();
        }else if(selectedMode == 6){
            multiplicationLevel2();
        }else if(selectedMode == 7){
            multiplicationLevel3();
        }
        
        checkScore(score);
        theNumberOfCorrectAnswers = 0;
        
        printf("Retry?: 1\nFinish: 0\n");
        scanf("%d", &retry);
    }
    printf("Thankyou!\n");
    return 0;
}
