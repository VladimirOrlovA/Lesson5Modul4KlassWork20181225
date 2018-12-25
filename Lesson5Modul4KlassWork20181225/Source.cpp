#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson5Modul4KlassWork20181225

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a = 0, i, s, sum=0;

	for (s = 1; s <= 2; s++)
	{

		sum = 0;

		for (i = 1; i <= 4; i++)
		{
			a = 1 + rand() % 4;
			sum = a + sum;

			printf("%d оценка : %d \n", i, a);

		}
		printf(" Сумма оценок %d студента : %d \n\n", s, sum);
	}

}



void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a = 0, sum = 0, i, k;
	

	for (k = 1; k <= 2; k++)
	{

		sum = 0;

		for (i = 1; i <= 20; i++)
		{
			a = 14 + rand() % 5;
			sum = a + sum;

			printf("%d ученик возраст : %d \n", i, a);

		}

		sum = sum / i;

		printf("\n Средний возраст учеников в %d классе  : %d \n\n", k, sum);
	}
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int month, day;
	float osadki, sum=0;


	for (month = 1; month <= 2; month++)
	{

		day = 0;

		for (day = 1; day <= 31; day++)
		{
			osadki = 0;
			osadki = float(10 + rand() % 60)/ (5 + rand() % 10);
			sum = osadki + sum;

			printf("%d кол-во осадков : %.3f \n", day, sum);

		}

		sum = sum / day;

		printf("\n Среднее кол-во осадков в %d месяце : %.3f \n\n", month, sum);
	}
	
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a = 0, sum = 0, i, k;


	for (k = 1; k <= 2; k++)
	{

		sum = 0;

		for (i = 1; i <= 15; i++)
		{
			a = 14 + rand() % 10;
			sum = a + sum;

			printf("%d ученик рост : %d \n", i, a);

		}

		sum = sum / i;

		printf("\n Средний рост учеников в %d классе  : %d \n\n", k, sum);
	}
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int g, p , sg, sumsg, sump, field, district, sumdistrict=0;


	for (district = 1; district <= 5; district++)
	{
		
		sg = 0;
		sumsg = 0;
				
		printf("\n Район № %d \n", district);
		
		for (field = 1; field <= 4; field++)
		{
			g = 100 + rand() % 10;
			p = 14 + rand() % 10;
			sg = g * p;
			sumsg = sg + sumsg;
			
			printf("c %d поля собрано пшеницы : %d \n", field, sg);
		}
		
		printf("\n Собрано пшеницы в районе : %d \n", sumsg);
		
		sumdistrict = sumdistrict + sumsg;
			
	}

	printf("\n В области собрано пшеницы %d, средняя урожайность в области %d \n\n", sumdistrict, sumdistrict / district);
}


void Task6()
{
	
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	

}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nÂ ðàçðàáîòêå.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nÂ ðàçðàáîòêå.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (9) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");
}