#include "tasks.h"

/*	Task 02. Palindrome Number (симметричное число или число-палиндром)
*
*	Дано четырехзначное число или меньше. Определите, является ли оно палиндромом.
*
*   Примечание
*   Отрицательное число физически не является палиндромом.
*   Не забудьте про "защиту от дурака": диапазон корректных значений должен быть от 0 до 9999
*
*	Формат входных данных [input]
*	Функция принимает любое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Функция возвращает соответствующее значение булевского типа.
*
*	[ input 1]: 2002
*	[output 1]: true
*
*	[ input 2]: 2008
*	[output 2]: false
*
*	[ input 3]: 2
*	[output 3]: true
*
*	[ input 4]: -8
*	[output 4]: false
*
*	[ input 5]: 55255
*	[output 5]: false
*/

bool task02(int number) {
	if (number > 9999 || number < 0)
	{
		return false;
	}
	bool flag;

	int digit1;
	int digit2;

	if (number < 10)
	{
		return true;
	}
	else if (number < 100) {
		digit1 = number % 10;
		digit2 = number / 10;
		flag = digit1 == digit2 ? true : false;
	}
	else if (number < 1000)
	{
		digit1 = number % 10;
		digit2 = number / 100;
		flag = digit1 == digit2 ? true : false;
	}
	else {
		digit1 = number % 10;
		digit2 = number / 1000;
		int flag2 = digit1 == digit2 ? 0 : 1;
		digit1 = (number / 10) % 10;
		digit2 = (number / 100) % 10;
		flag = flag2 == 1 ? false : digit1 == digit2 ? true : false;
	}




	return flag;
}