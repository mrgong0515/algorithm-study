#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    int i = strlen(bin1) - 1; 
    int j = strlen(bin2) - 1; 
    int carry = 0;
    
    char temp[15];
    int k = 0;
    
    while(i >= 0 || j >= 0 || carry > 0){
        int sum = carry;
        
        if (i >= 0) sum += (bin1[i--] - '0'); // bin1의 숫자 더하기
        if (j >= 0) sum += (bin2[j--] - '0'); // bin2의 숫자 더하기
        
        if(sum >= 2){
            carry = 1;
            sum = sum % 2;
        }
        
        else{
            carry = 0;
        }
        
        temp[k++] = sum + '0';
    }
    
    char* answer = (char*)malloc(k + 1);
    for(int m = 0; m < k; m++){
        answer[m] = temp[k - 1 - m];
    }
    
    answer[k] = '\0';
    
    return answer;
}