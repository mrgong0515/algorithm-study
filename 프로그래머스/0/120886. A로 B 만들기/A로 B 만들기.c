#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer[26] = {0}; // 알파벳 소문자 갯수 저장 배열
    
    int len = strlen(before);
    
    for(int i = 0; i < len; i++){
        answer[before[i] - 'a']++; // before 각 문자 갯수 plus
    }
    
    for(int i = 0; i < len; i++){
        answer[after[i] - 'a']--; // after의 각 문자 갯수 minus
    }
    
    for(int i = 0; i < 26; i++){
        if(answer[i] != 0){
            return 0;
        }
    }
    
    return 1;
}