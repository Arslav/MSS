#pragma once
#include <math.h> 

/**
 * Фунция вычисляющая среднее арифметическое массива измерений
 * Параметры:
 * +double measures - массив измерений
 * +int n - кол-во измерений
 * Автор: Сидоркин Владислав
 */
double Average(double *measures, int n) { 
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += measures[i];
	}
	return (sum/n);
}

/**
 * Фунция вычисляющая среднеквадратичное отклонение массива измерений
 * Параметры:
 * +double measures - массив измерений
 * +int n - кол-во измерений
 * Автор: Сидоркин Владислав
 */
double stdDeviation(double *measures, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (measures[i] - Average(measures, n))*(measures[i] - Average(measures, n));
	}
	return (sqrt(sum / (n-1)));
}

/**
 * Фунция вычисляющая среднеквадратичную погрешность массива измерений
 * Параметры:
 * +double measures - массив измерений
 * +int n - кол-во измерений
 * Автор: Сидоркин Владислав
 */
double MeanSquareError(double *measures, int n) {
	return (stdDeviation(measures, n)/sqrt(n));
}

/**
* Функция сортирующая по возрастанию массив результатов измерений
* Параметры:
* +double measures - массив измерений
* +int n - кол-во измерений
* Автор: Нигаматьянов Рафис
*/
void Sort(double *measures, int n) {
	double temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
			if (measures[j] > measures[j + 1]){
                temp = measures[j];
				measures[j] = measures[j + 1];
				measures[j + 1] = temp;
			}
	}
}