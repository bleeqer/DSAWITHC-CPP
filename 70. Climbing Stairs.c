int climbStairs(int n) 
{
    int dp[46];  // 최대 n이 45이므로 크기 46의 배열 선언 (0은 사용하지 않음)
    dp[1] = 1;   // 한 계단을 오르는 방법은 한 가지
    dp[2] = 2;   // 두 계단을 오르는 방법은 두 가지 (1+1 또는 2)

    // 동적 프로그래밍을 사용하여 3부터 45까지의 계단 오르는 방법 계산
    for (int i = 3; i <= 45; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];  // 현재 계단을 오르는 방법 = 이전 두 계단의 방법의 합
    }
    
    return dp[n];  // n번째 계단을 오르는 방법의 수 반환
}
