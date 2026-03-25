#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int num_list[], size_t num_list_len, int n) {

    int rows = num_list_len / n;
    
    int** answer = (int**)malloc(sizeof(int*) * rows);
    
    for (int i = 0; i < rows; i++) {
        answer[i] = (int*)malloc(sizeof(int) * n);
        
        for (int j = 0; j < n; j++) {
            answer[i][j] = num_list[i * n + j];
        }
    }
    
    return answer;
}