#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct sungjuk
{
	//학번, 성적(국,수,영), 총합, 평균, 성적 선언
	int hakbun;
	int score[3];
	int sum;
	double avg;
	int temp;
	char grade[3][2];
}sung[100];

int main()
{
	//파일 열기
	FILE *fp;
	fp = fopen("d:/rankfile.txt", "w+");
	//인원 확인
	int i, j, x, y, LEN;
	printf("총 몇명이죠? (100명까지 가능) ");
	scanf("%d", &LEN);
	printf("인원 확인 완료.");
	
	for (i = 0; i < LEN; i++)
	{
		//학번 입력
		printf("\n학번을 입력하세요.");
		scanf("%d", &sung[i].hakbun);
		//국어, 수학, 영어 입력
		printf("국어 성적 : ");
		scanf("%d", &sung[i].score[0]);
		printf("수학 성적 : ");
		scanf("%d", &sung[i].score[1]);
		printf("영어 성적 : ");
		scanf("%d", &sung[i].score[2]);
		//계산
		sung[i].sum = sung[i].score[0] + sung[i].score[1] + sung[i].score[2];
		sung[i].avg = sung[i].sum / 3;
		
	}
	//정렬
	for (i = 0; i < LEN; i++)
	{
		for (j = 0; j < LEN; j++)
		{
			if (sung[j].avg < sung[j + 1].avg)
			{
				x = j;
				y = j + 1;

				sung[0].temp = sung[y].hakbun;
				sung[y].hakbun = sung[x].hakbun;
				sung[x].hakbun = sung[0].temp;

				sung[1].temp = sung[y].score[0];
				sung[y].score[0] = sung[x].score[0];
				sung[x].score[0] = sung[1].temp;

				sung[2].temp = sung[y].score[1];
				sung[y].score[1] = sung[x].score[1];
				sung[x].score[1] = sung[2].temp;

				sung[3].temp = sung[y].score[2];
				sung[y].score[2] = sung[x].score[2];
				sung[x].score[2] = sung[3].temp;

				sung[4].temp = sung[y].sum;
				sung[y].sum = sung[x].sum;
				sung[x].sum = sung[4].temp;

				sung[5].temp = sung[y].avg;
				sung[y].avg = sung[x].avg;
				sung[x].avg = sung[5].temp;

			}
		}
	}

	//등급 분류
	int a = 0.3 * LEN, b = 0.7 * LEN;
	for (i = 0; i < LEN; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i + 1 < a)
			{
				if (sung[i].score[j] >= 60)
				{
					sung[i].grade[j][2] =  'A';
				}
				else
				{
					sung[i].grade[j][2] = 'F';
				}
			}
			else if (i + 1 < b)
			{
				if (sung[i].score[j] >= 60)
				{
					sung[i].grade[j][2] = 'B';
				}
				else
				{
					sung[i].grade[j][2] = 'F';
				}
			}
			else if (sung[i].score[j] >= 70)
			{
				sung[i].grade[j][2] = 'C';
			}
			else if (sung[i].score[j] >= 60)
			{
				sung[i].grade[j][2] = 'D';
			}
			else
			{
				sung[i].grade[j][2] = 'F';
			}
		}
	}

	//입력한 값 출력
	printf("\n==================================================");
	printf("\n  학번     국어     수학     영어     합계 평균");
	printf("\n==================================================");
	fprintf(fp, "\n==================================================");
	fprintf(fp, "\n  학번     국어     수학     영어     합계 평균");
	fprintf(fp, "\n==================================================");
	for (i = 0; i < LEN; i++)
	{
		printf("\n%d\t %5d(%c) %5d(%c) %5d(%c) %5d %.2f\t", sung[i].hakbun, sung[i].score[0], sung[i].grade[0][2], sung[i].score[1], sung[i].grade[1][2], sung[i].score[2], sung[i].grade[2][2], sung[i].sum, sung[i].avg);
		fprintf(fp, "\n%d\t %5d(%c) %5d(%c) %5d(%c) %5d %.2f\t", sung[i].hakbun, sung[i].score[0], sung[i].grade[0][2], sung[i].score[1], sung[i].grade[1][2], sung[i].score[2], sung[i].grade[2][2], sung[i].sum, sung[i].avg);
	}
	//파일 닫기
	fclose(fp);
	system("pause");
}