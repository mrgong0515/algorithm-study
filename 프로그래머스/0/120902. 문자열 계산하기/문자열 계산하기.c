#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strtok, strcpy 사용을 위해 추가

int solution(const char* my_string) {
    char* copy = (char*)malloc(strlen(my_string) + 1);
    strcpy(copy, my_string);
    
    char* token = strtok(copy, " ");
    int answer = atoi(token);

    while (1) {
        char* op = strtok(NULL, " "); // 연산자 읽기
        if (op == NULL) break;        // 더 이상 읽을 게 없으면 종료

        char* next_num_str = strtok(NULL, " "); // 다음 숫자 읽기
        int next_num = atoi(next_num_str);

        if (strcmp(op, "+") == 0) {
            answer += next_num;
        } else if (strcmp(op, "-") == 0) {
            answer -= next_num;
        }
    }

    free(copy); // 할당한 메모리 해제
    return answer;
}
