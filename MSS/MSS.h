#pragma once
#include <math.h> 

/**
 * ������ ����������� ������� �������������� ������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: �������� ���������
 */
double Average(double *measures, int n) { 
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += measures[i];
	}
	return sum/n;
}

/**
 * ������ ����������� ������������������ ���������� ������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: �������� ���������
 */
double stdDeviation(double *measures, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (measures[i] - Average(measures, n))*(measures[i] - Average(measures, n));
	}
	return sqrt(sum / (n-1));
}

/**
 * ������ ����������� ������������������ ����������� ������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: �������� ���������
 */
double MeanSquareError(double *measures, int n) {
	return stdDeviation(measures, n)/sqrt(n);
}

/**
 * ������� ����������� �� ����������� ������ ����������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: ������������ �����
 */
void Sort(double *measures, int n) {
	double temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
			if (measures[j] > measures[j + 1]) {
                temp = measures[j];
				measures[j] = measures[j + 1];
				measures[j + 1] = temp;
			}
	}
}

/**
 * �������� ������� ������������ �������� �� i-�� ��������� ��������� �������� 
 * ���������:
 * +int i - ����������
 * +double q - ������� ����������
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: ������������ �����
 */
bool isFailByRomanovsky(int i, double q, double *measures, int n) {
	double beta = abs(Average(measures, n) - measures[i]) / stdDeviation(measures, n);
	//TODO: ����������� ��������� 
	return 0;
}