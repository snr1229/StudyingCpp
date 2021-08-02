/*
* * Dynamic Programming 연습문제
* BOJ $1463 1로만들기
* 정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.
X가 3으로 나누어 떨어지면, 3으로 나눈다.
X가 2로 나누어 떨어지면, 2로 나눈다.
1을 뺀다.
연산을 사용하는 최솟값 구하기
*/

#include <stdio.h>

int memo[1000002] = { '\0' };

int calculate(int num) {
	if (num == 1) return 0;
	if (memo[num] > 0) return memo[num];
	memo[1] = 1;
	memo[num] = calculate(num - 1) + 1;
	if (num % 2 == 0 && memo[num] > calculate(num / 2) + 1)
		memo[num] = calculate(num / 2) + 1;
	if (num % 3 == 0 && memo[num] > calculate(num / 3) + 1)
		memo[num] = calculate(num / 3) + 1;
	return memo[num];
}

int main() {
	int n = 0;
	scanf_s("%d", &n);
	printf("%d\n", calculate(n));
	return 0;
}
