#include <stdio.h>
/*
* ���� : 11098 ÿ�ø� ������
* n���� �׽�Ʈ ���̽��� �־���, �׽�Ʈ ���̽����� p���� ���� ���� �Է�
* ���� ���� : ����'����'�̸�
* �� �׽�Ʈ ���̽����� ���� ��� ������ �̸��� ����Ѵ�.
*/

/*
�Լ��� : ���� 
������ : ���  

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