#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct sungjuk
{
	//�й�, ����(��,��,��), ����, ���, ���� ����
	int hakbun;
	int score[3];
	int sum;
	double avg;
	int temp;
	char grade[3][2];
}sung[100];

int main()
{
	//���� ����
	FILE *fp;
	fp = fopen("d:/rankfile.txt", "w+");
	//�ο� Ȯ��
	int i, j, x, y, LEN;
	printf("�� �������? (100����� ����) ");
	scanf("%d", &LEN);
	printf("�ο� Ȯ�� �Ϸ�.");
	
	for (i = 0; i < LEN; i++)
	{
		//�й� �Է�
		printf("\n�й��� �Է��ϼ���.");
		scanf("%d", &sung[i].hakbun);
		//����, ����, ���� �Է�
		printf("���� ���� : ");
		scanf("%d", &sung[i].score[0]);
		printf("���� ���� : ");
		scanf("%d", &sung[i].score[1]);
		printf("���� ���� : ");
		scanf("%d", &sung[i].score[2]);
		//���
		sung[i].sum = sung[i].score[0] + sung[i].score[1] + sung[i].score[2];
		sung[i].avg = sung[i].sum / 3;
		
	}
	//����
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

	//��� �з�
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

	//�Է��� �� ���
	printf("\n==================================================");
	printf("\n  �й�     ����     ����     ����     �հ� ���");
	printf("\n==================================================");
	fprintf(fp, "\n==================================================");
	fprintf(fp, "\n  �й�     ����     ����     ����     �հ� ���");
	fprintf(fp, "\n==================================================");
	for (i = 0; i < LEN; i++)
	{
		printf("\n%d\t %5d(%c) %5d(%c) %5d(%c) %5d %.2f\t", sung[i].hakbun, sung[i].score[0], sung[i].grade[0][2], sung[i].score[1], sung[i].grade[1][2], sung[i].score[2], sung[i].grade[2][2], sung[i].sum, sung[i].avg);
		fprintf(fp, "\n%d\t %5d(%c) %5d(%c) %5d(%c) %5d %.2f\t", sung[i].hakbun, sung[i].score[0], sung[i].grade[0][2], sung[i].score[1], sung[i].grade[1][2], sung[i].score[2], sung[i].grade[2][2], sung[i].sum, sung[i].avg);
	}
	//���� �ݱ�
	fclose(fp);
	system("pause");
}