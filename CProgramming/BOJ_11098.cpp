#include <stdio.h>
/*
* 문제 : 11098 첼시를 도와줘
* n개의 테스트 케이스가 주어짐, 테스트 케이스마다 p개의 선수 정보 입력
* 선수 정보 : 가격'공백'이름
* 각 테스트 케이스마다 가장 비싼 선수의 이름을 출력한다.
*/

/*
함수명 : 동사 
변수명 : 명사  

*/
struct Person
{
	int price;
	char name[30];
}player[100];

int main() {
	int testNum = 0;
	int playerNum = 0;

	scanf("%d", &testNum);
	
	while (testNum--) {
		int maxPlayer = 0;
		int maxPrice = 0;

		scanf("%d", &playerNum);
		
		for (int i = 0; i < playerNum; i++) {
			scanf("%d %s", &player[i].price, &player[i].name);
			if (player[i].price > maxPrice) {
				maxPlayer = i;
				maxPrice = player[i].price;
			}
		}

		printf("%s\n", player[maxPlayer].name);
	}
	return 0;
}