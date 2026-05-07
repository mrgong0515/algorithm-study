#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    // a와 b 중에 더 작은 변 찾기
    int a = sides[0];
    int b = sides[1];
    
    int min = (a < b) ? a : b; // a가 b 보다 작다 참 : a, 거짓 : b
    
    // 구하는 공식 : (2 * 작은 변) - 1
    int answer = (2 * min) - 1;
    
    return answer;
}