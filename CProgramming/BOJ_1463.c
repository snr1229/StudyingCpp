/*
* * Dynamic Programming ��������
* BOJ $1463 1�θ����
* ���� X�� ����� �� �ִ� ������ ������ ���� �� ���� �̴�.
X�� 3���� ������ ��������, 3���� ������.
X�� 2�� ������ ��������, 2�� ������.
1�� ����.
������ ����ϴ� �ּڰ� ���ϱ�
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
