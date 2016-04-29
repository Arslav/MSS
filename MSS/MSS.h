#pragma once
#include <iostream>
using namespace std;
double Average(double *measures, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++); {
		sum += measures[i];
	}
	return (sum/n);
}