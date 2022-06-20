#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LEN 10
int main()
{
	int i, j, x = 0, y = 0, temp1 = 0, temp2 = 0;
	int a=0, b=0, c=0, d=0, f=0;
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
			a += 1;
			break;
		case 9: grade[i] = 'A';
			a += 1;
			break;
		case 8: grade[i] = 'B';
			b += 1;
			break;
		case 7: grade[i] = 'C';
			c += 1;
			break;
		case 6: grade[i] = 'D';
			d += 1;
			break;
		default: grade[i] = 'F';
			f += 1;
		}
	}
	printf("\n====================");
	printf("\n학번    점수    학점");
	printf("\n====================");
	for (i = 0; i < LEN; i++)
		printf("\n %d\t %d\t %c", hakbun[i], score[i], grade[i]);

	for (i = 0; i < LEN; i++) {
		for (j = 0; j < LEN-1; j++) {
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
	printf("\n==================\n");
	printf("\n  성적순으로 출력   ");
	printf("\n==================");
	for (i = 0; i < 10; i++)
		printf("\n %d\t %d\t %c", hakbun[i], score[i], grade[i]);

	printf("\n=======통계=======\n");
	printf("A등급 : %d%%\n", a * 10);
	printf("B등급 : %d%%\n", b * 10);
	printf("C등급 : %d%%\n", c * 10);
	printf("D등급 : %d%%\n", d * 10);
	printf("F등급 : %d%%\n", f * 10);
	printf("최상위 그룹 3명 :\n");
	for (i = 0; i < 3; i++)
		printf("%d\t %d\t \n", hakbun[i], score[i]);

	system("pause");
}