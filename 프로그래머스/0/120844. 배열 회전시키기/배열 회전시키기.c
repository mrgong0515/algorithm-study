#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

int* solution(int numbers[], size_t numbers_len, const char* direction) {
    int* answer = (int*)malloc(sizeof(int) * numbers_len);
    
    if (strcmp(direction, "right") == 0) {
        for (int i = 0; i < numbers_len; i++) {
            answer[(i + 1) % numbers_len] = numbers[i];
        }
    } else {
        for (int i = 0; i < numbers_len; i++) {
            answer[(i - 1 + numbers_len) % numbers_len] = numbers[i];
        }
    }
    
    return answer;
}