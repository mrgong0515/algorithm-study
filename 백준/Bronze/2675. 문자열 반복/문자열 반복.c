#include <stdio.h>
#include <string.h>

int main() {
    int T, R; // 테스트 케이스 개수, 반복 횟수 선언
    char S[21]; // 문자열 선언 (1~20)

    // 테스트 케이스 개수 입력
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        // 반복 횟수(R)와 문자열(S) 입력
        scanf("%d %s", &R, S);
        
        int length = strlen(S); // 문자열 문자 수 선언

        // 문자열의 각 문자를 하나씩 선택
        for (int j = 0; j < length; j++) {
            
            // 선택한 문자를 R번 출력
            for (int k = 0; k < R; k++) {
                printf("%c", S[j]);
            }
        }
        
        // 한 케이스가 끝나면 줄바꿈
        printf("\n");
    }

    return 0;
}