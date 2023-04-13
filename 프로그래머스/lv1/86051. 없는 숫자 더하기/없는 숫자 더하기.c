#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int cnt[10] = {0, };
    /*for(int i = 0; i < 10; i++){
        cnt[i] = 0;
    }*/
    for(int i = 0; i < numbers_len; i++){
        cnt[numbers[i]]++;
    }
    for(int i = 0; i < 10; i++){
        if(cnt[i] == 0){
            answer += i;
        }
    }
    return answer;
}