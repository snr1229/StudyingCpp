/*boj_10952
�����, �׽�Ʈ ���̽� ���� X, 0 0�� �Է¹����� ����!
*/
#include <iostream>
using namespace std;

int boj_10952() {
	int a = 0, b = 0;
	while (1) {
		cin >> a >> b;
		if ((a == 0) & (b == 0)) {
			break;
		}
		cout << a + b << '\n';
	}
	return 0;
}
