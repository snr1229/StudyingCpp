/*boj_11021
�׽�Ʈ ���̽� ���� T, �Է� a, b ��½� "Case #x:"���
*/
#include <iostream>
using namespace std;

int boj_11021() {
	int t = 0;
	int a = 0, b = 0;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << "Case #" << t << ": " << a + b;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	boj_11021();
	return 0;
}