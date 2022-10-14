// Персональный шаблон
#include <iostream>
// Линейный поиск первого вхождения элемента Value  в массив arr , поиск начинается с позиции begin(по уцмолчанию 0)
template <typename T>
int search_index(T arr[], const int lenght, T value, int begin=0) {
	for (int i = begin; i < lenght; i++)
		if (arr[i] == value)
			return i;
	return -1; 
}
// линейный поиск последнего числа Value в массив arr
template <typename T>
int search_Last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
// линейный поиск последнего числа Value в массив arr поиск начинается с позиции begin
template <typename T>
int search_Last_index(T arr[], const int length, T value,int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//Вывод под слова с позиции символа sym
void subword(char arr[], const int length, char sym) {
	int index = search_index(arr, length, sym);
	if (index == -1)
		std::cout << "ERROR\n";
	else {
		for (int i = index; i < length; i++)
			std::cout << arr[i];
		std::cout << '\n';
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int size = 10;
	int arr[]{ 6,4,1,7,-6,100,0,1,11,9 };
	//функция search_index
	std::cout << "Позиция числа 7 в массиве = " << search_index(arr, size, 7) << '\n';
	std::cout << "Первая позиция числа 1 в массиве = " << search_index(arr, size, 1) << '\n';
	if(search_index(arr, size, 100)==-1)
		std::cout << "Числа 100 нет в массиве " << '\n';
	else
		std::cout<<"Позиция числа 100 в массиве = " << search_index(arr, size, 100) << '\n';
	std::cout << "Первая позиция числа 1, начиная с позиции 4, в массиве = " << search_index(arr, size, 1, 4) << '\n';
	
	//функция search_last_index
	std::cout << "позиция числа 7 в массиве = "<<search_Last_index(arr,size,7) << '\n';
	std::cout << "Последняя позиция числа 7 в массиве = " << search_Last_index(arr, size, 1) << '\n';
	std::cout << "Первая позиция числа 1, начиная с числа 4, в массиве = " << search_Last_index(arr, size, 1, 4) << '\n';
	
	//подслово
	std::cout << "Начальное слово:\n";
	const int letters = 8;
	char word[letters]{ 'f','u','n','c','t','i','o','n' };
	for (int i = 0; i < letters; i++)
		std::cout << word[i];
	std::cout << "\nПодслово\n";
	subword(word, letters, 'a');

	return 0;

}