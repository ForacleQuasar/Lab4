//���������
#include<stdio.h>
#include<math.h>
#include<locale.h>
//���������� �������
float speed(float, float);

int main()
{
	//�����������
	setlocale(LC_CTYPE, "RUS");
	//���������� ����������
	float X, L;
	//���� ������ �������������
	puts("������� ������������ ���������� ���� � �������������");
	scanf("%f", &X);
	puts("������� ������ ���� � �����������");
	scanf("%f", &L);
	//����� �������
	float s = speed(X, L);
	//��������� 
	printf("����������� �������� ������������ �������� �� ���� ��� �� ����: %.3f ��/��\n", s);
	system("pause");
}
float speed(float X, float L)
{
	float s = X / L;
	return s;
}