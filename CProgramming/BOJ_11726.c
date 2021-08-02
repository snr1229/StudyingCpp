/*
Dynamic Programming 연습문제
BOJ #11726 2Xn 타일링
2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 문제
*/
#include <stdio.h>
//Memoization할 배열
int memo[1001];
//타일 수 구하기
int getTile(int n) {
	if (memo[n] > 0)
		return memo[n];
	else {
		memo[n] = (getTile(n - 1) + getTile(n - 2)) %10007;
		return memo[n];
	}
}

int main() {
	int n = 0;
	scanf_s("%d", &n);
	memo[1] = 1;
	memo[2] = 2;
	printf("%d\n", getTile(n)%10007);
}
