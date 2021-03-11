/*boj_10952
입출력, 테스트 케이스 갯수 X, 0 0을 입력받으면 종료!
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
