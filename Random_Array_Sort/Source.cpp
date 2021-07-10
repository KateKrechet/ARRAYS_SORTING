#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 7;
	int arr[size];
	int a, b;
	cout << "¬ведите начальную точку диапазона дл€ массива случайных чисел: "; cin >> a; cout << endl;
	cout << "¬ведите конечную точку диапазона дл€ массива случайных чисел: "; cin >> b; cout << endl;
	//формирование массива из случайных чисел в заданном диапазоне
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a) + a;
	}

	//вывод массива на экран
	cout << "¬ывод сгенерированного массива: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;

	//пузырькова€ сортировка - сортирует в пор€дке убывани€

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

	//вывод массива на экран
	cout << "ћассив отсортирован в пор€дке возрастани€ элементов: " << endl;
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


}