#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* s) {
    int count[26] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    char* answer = (char*)malloc(27);
    int idx = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] == 1) {
            answer[idx++] = i + 'a'; 
        }
    }
    
    
    answer[idx] = '\0';

    return answer;
}