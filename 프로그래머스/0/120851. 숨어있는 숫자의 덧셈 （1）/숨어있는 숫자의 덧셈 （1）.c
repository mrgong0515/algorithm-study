#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

int solution(const char* my_string) {
    int answer = 0;
    int len = strlen(my_string);

    for (int i = 0; i < len; i++) 
    {
        if (my_string[i] >= '0' && my_string[i] <= '9')
        {
            answer += (my_string[i] - '0');
        }
    }

    return answer;
}