#pragma once
#include <string>
#include "Queue.h"
using namespace std;
void sort(int n, string *a) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < a[i].length()) {
			max = a[i].length();
		}
	}
		for (int i = 0; i < n; i++) {
			while (a[i].length() < max) {
				a[i] = "0" + a[i];
			}
				Queue b[10];
				for (int i = max - 1; i >= 0; i--) {
					for (int j = 0; j < n; j++) {
						int s;
						s = atoi(a[j].c_str());
						b[a[j][i]].Add(s);
					}
				}
					n = 0;
					for (int j = 0; j < 10; j++) {
						while (b[j].IsEmpty() == 1) {
							a[n++] = b[j].GetInfo();
						}
					}
				}
			}