/*boj_11021
테스트 케이스 개수 T, 입력 a, b 출력시 "Case #x:"출력
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