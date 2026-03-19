#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int emergency[], size_t emergency_len) {
    int* answer = (int*)malloc(sizeof(int) * emergency_len);

    for (int i = 0; i < emergency_len; i++) {
        int rank = 1;  

        for (int j = 0; j < emergency_len; j++) {
            if (emergency[j] > emergency[i]) {
                rank++; 
            }
        }

        answer[i] = rank;
    }

    return answer;
}