/** Задание 1 Вариант 11
* Во всех заданиях требуется вывести «истина»,
* если приведенное выражение для предложенных
* исходных данных является истинным,
* или «ложь», если выражение ложное.
* Истина если каждое из чисел положительное
*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int number1, number2, number3;
//    cout << "Введите первое число: ";
//    cin >> number1;
//    cout << "Введите второе число: ";
//    cin >> number2;
//    cout << "Введите третье число: ";
//    cin >> number3;
//    if ((number1 > 0) && (number2 > 0) && (number3 > 0)) {
//        cout << "истина" << endl;
//    }
//    else {
//        cout << "ложь" << endl;
//    }
//}


/** Задание 2 Вариант 11
* Ввод трёх чисел.
* Найти сумму двух наименьших из них.
*/
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	double number1, number2, number3;
//	cout << "Введите три числа: " << endl;
//	cin >> number1;
//	cin >> number2;
//	cin >> number3;
//	double sum_two;
//	if ((number1 > number2) && (number1 > number3)) {
//		sum_two = number2 + number3;
//		cout << "Сумма двух наименьших чисел: " << sum_two;
//	}
//	else if ((number2 > number1) && (number2 > number3)) {
//		sum_two = number1 + number3;
//		cout << "Сумма двух наименьших чисел: " << sum_two;
//	}
//	else {
//		sum_two = number1 + number2;
//		cout << "Сумма двух наименьших чисел: " << sum_two;
//	}
//}


/** Задание 3 Вариант 11
* Вычислить значение функции y = f(x).
*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	const double A = 2.4, B = 1.3;
//	double x, y;
//	cout << "Введите х: ";
//	cin >> x;
//	if (x < -2) {
//		y = pow((A * x + 1), 4);
//		cout << "Значение функции = " << y;
//	}
//	else if (-2 <= x <= 5) {
//		y = 1 / (2 * pow(x, 2) + B * log10(x));
//		cout << "Значение функции = " << y;
//	}
//	else {
//		y = A * cos(pow((B + x), 2));
//		cout << "Значение функции = " << y;
//	}
//}


/** Задание 4 Вариант 11
* С помощью оператора switch. Вывести «отлично» для числа 5, «хорошо» для 4,
* «средне» для 3 и «хуже среднего» для значений от 0 до 2 включительно.
*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	int grade;
//	cout << "Введите свою оценку: ";
//	cin >> grade;
//	switch (grade) {
//	case 5:
//		cout << "отлично";
//		break;
//	case 4:
//		cout << "хорошо";
//		break;
//	case 3:
//		cout << "средне";
//		break;
//	case 2:
//	case 1:
//	case 0:
//		cout << "хуже среднего";
//		break;
//	}
//}
