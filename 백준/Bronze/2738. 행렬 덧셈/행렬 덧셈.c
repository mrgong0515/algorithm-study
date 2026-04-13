#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M); // 행렬의 크기 N, M 입력
    
    int A[100][100];
    int B[100][100];
    
    // 행렬 A 입력 받기
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    
    // 행렬 B 입력 받기
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    
    // 행렬 A와 B 더하고 출력하기
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n"); // 한 행 끝나면 줄바꿈
    }
    
    return 0;
}