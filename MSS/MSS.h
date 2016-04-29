#pragma once
#include <math.h> 

namespace MSS {

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
		return sum / n;
	}

	/**
	 * ������ ����������� ������������������ ���������� ������� ���������
	 * ���������:
	 * +double measures - ������ ���������
	 * +int n - ���-�� ���������
	 * �����: �������� ���������
	 */
	double StdDeviation(double *measures, int n) {
		double sum = 0;
		for (int i = 0; i < n; i++) {
			sum += pow(measures[i] - Average(measures, n), 2);
		}
		return sqrt(sum / (n - 1));
	}

	/**
	 * ������ ����������� ������������������ ����������� ������� ���������
	 * ���������:
	 * +double measures - ������ ���������
	 * +int n - ���-�� ���������
	 * �����: �������� ���������
	 */
	double MeanSquareError(double *measures, int n) {
		return StdDeviation(measures, n) / sqrt(n);
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
	bool IsFailByRomanovsky(int i, double q, double *measures, int n) {
		double beta = abs(Average(measures, n) - measures[i]) / StdDeviation(measures, n);
		//TODO: ����������� ��������� 
		return 0;
	}

	/**
	  * �������� ������� ��� ����������� ������� ��������������� ����������� ��������� ����
	  * ���������:
	  * +double q - ������� ����������
	  * +double measures - ������ ���������
	  * +int n - ���-�� ���������
	  * �����: ������������ �����
	  */
	bool IsSystematicError(double q, double *measures, int n) {
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += pow(measures[i + 1] - measures[i], 2);
		}
		double V = (sum / (2 * (n - 1))) / pow(StdDeviation(measures, n), 2);
		//TODO: ����������� ��������� 
		return 0;
	}
}