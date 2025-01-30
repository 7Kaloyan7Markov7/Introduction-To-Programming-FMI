#include <iostream>
//Да се напише функция на C++, която приема като параметър два едномерни сортирани целочислени масива с 
// елементи от тип int и връща като резултат трети масив (който съдържа всички елементи на двата масива и само тях), 
// който също е сортиран. Предполага се, че входните масиви са сортирани преди да се извика написаната от вас функция.

int* mergeArr(int* arr1, int* arr2,int size1,int size2)
{
	int* res = new int[size1 + size2];

	int index1 = 0;
	int index2 = 0;
	int index = 0;
	
	while (index2 < size2 && index1 < size1)
	{
		if (arr1[index1] < arr2[index2]) res[index++] = arr1[index1++];
		else res[index++] = arr2[index2++];
	}

	while (index1 < size1) res[index++] = arr1[index1++];
	while (index2 < size2) res[index++] = arr2[index2++];

	return res;
}

void fillArr(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
}

int main()
{
	int N, M = 0;
	std::cin >> N >> M;

	int* arr1 = new int[N];
	int* arr2 = new int[M];
	fillArr(arr1, N);
	fillArr(arr2, N);

	int* res = mergeArr(arr1, arr2, N, M);

	for (int i = 0; i < N + M; ++i)
	{
		std::cout << res[i] << " ";
	}


	delete[] arr2;
	delete[] arr1;
	delete[] res;
	return 0;
}
