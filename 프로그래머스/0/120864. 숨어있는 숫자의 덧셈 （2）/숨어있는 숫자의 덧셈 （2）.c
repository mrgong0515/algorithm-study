#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h> // isdigit 함수를 쓰기 위해 사용

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int current_num = 0;
    
    for(int i = 0; my_string[i] != '\0'; i++){
        if(isdigit(my_string[i])){
            current_num = current_num * 10 + (my_string[i] - '0');
        }
        
        else{
            answer += current_num;
            current_num = 0;
        }
    }
    
    answer += current_num;
        
    return answer;
}