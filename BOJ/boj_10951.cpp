/*BOJ_10951
입출력, 테스트 케이스 갯수 정해져있지 X, A와 B 입력받고 A+B 출력
*/
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a = 0, b = 0;
	while (cin >> a >> b) {
		cout << a + b << '\n';
	}
	return 0;

}