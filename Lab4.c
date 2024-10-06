//Директивы
#include<stdio.h>
#include<math.h>
#include<locale.h>
//Объявление функции
float speed(float, float);

int main()
{
	//Локализация
	setlocale(LC_CTYPE, "RUS");
	//Объявление переменных
	float X, L;
	//Ввод данных пользователем
	puts("Введите длительность удержжания воды в миллисекундах");
	scanf("%f", &X);
	puts("Введите длинну шага в сантиметрах");
	scanf("%f", &L);
	//Вызов функции
	float s = speed(X, L);
	//Результат 
	printf("Минимальная скорость передвижения человека по воде как по суше: %.3f см/мс\n", s);
	system("pause");
}
float speed(float X, float L)
{
	float s = X / L;
	return s;
}