#pragma once
#include <string>
#include "Queue.h"
using namespace std;
void sort(string* arr, int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < arr[i].length()) {
			max = arr[i].length();
		}
	}
	for (int i = 0; i < n; i++) {
		while (arr[i].length() < max) {
			arr[i] = "0" + arr[i];
		}
	}
	Queue b[10];
	for (int i = (max - 1); i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			int m = arr[j][i];
			int k = m - 48;
			int d = stoi(arr[j]);
			b[k].Add(d);
		}
		int l = 0;
		for (int k = 0; k < 10; k++) {
			while (b[k].IsEmpty() == 1) {
				int v = b[k].GetInfo();
				arr[l++] = to_string(v);
			}
		}
		for (int f = 0; f < l; f++) {
			while (arr[f].length() < max) {
				arr[f] = "0" + arr[f];
			}
		}
	}
}