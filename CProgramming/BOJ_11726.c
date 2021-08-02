/*
Dynamic Programming ��������
BOJ #11726 2Xn Ÿ�ϸ�
2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ����
*/
#include <stdio.h>
//Memoization�� �迭
int memo[1001];
//Ÿ�� �� ���ϱ�
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
