#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LEN 3
int main()
{
	int i, j, x = 0, y = 0, temp1 = 0, temp2 = 0;
	int hakbun[LEN];
	int score[LEN];
	char grade[LEN], temp3 = 0;
	for (i = 0; i < LEN; i++) {
		printf("학번입력 : ");
		scanf("%d", &hakbun[i]);
		printf("성적입력 : ");
		scanf("%d", &score[i]);
		switch ((int)(score[i] / 10)) {
		case 10: grade[i] = 'A';
			break;
		case 9: grade[i] = 'A';
			break;
		case 8: grade[i] = 'B';
				break;
		case 7: grade[i] = 'C';
			break;
		case 6: grade[i] = 'D';
			break;
		default: grade[i] = 'F';
		}
	}
	printf("\n====================");
	printf("\n학번 점수 학점");
	printf("\n====================");
	for (i = 0; i < LEN; i++)
		printf("\n %d\t %d\t %c", hakbun[i], score[i], grade[i]);
	
	for (i = 0; i < LEN; i++) {
		for (j = 0; j < LEN; j++) {
			if (score[j] < score[j + 1]) {
				x = j;
				y = j + 1;

				temp1 = score[y];
				score[y] = score[x];
				score[x] = temp1;

				temp2 = hakbun[y];
				hakbun[y] = hakbun[x];
				hakbun[x] = temp2;

				temp3 = grade[y];
				grade[y] = grade[x];
				grade[x] = temp3;
			}
		}
	}

	system("pause");
}