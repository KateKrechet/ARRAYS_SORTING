#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 7;
	int arr[size];
	int a, b;
	cout << "������� ��������� ����� ��������� ��� ������� ��������� �����: "; cin >> a; cout << endl;
	cout << "������� �������� ����� ��������� ��� ������� ��������� �����: "; cin >> b; cout << endl;
	//������������ ������� �� ��������� ����� � �������� ���������
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a) + a;
	}

	//����� ������� �� �����
	cout << "����� ���������������� �������: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;

	//����������� ���������� - ��������� � ������� ��������

	int buffer = 0;
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				buffer = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buffer;
			}
			//cout << arr[i] << "\t";
		}
		//cout << endl;

	}

	//����� ������� �� �����
	cout << "������ ������������ � ������� ����������� ���������: " << endl;
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


}