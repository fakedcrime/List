#include "Zveno.h"
#include "Queue.h"
#include <iostream>
#include "Sort.h"
using namespace std;
int main() {
	Queue A;
	Queue B;
	A.Add(8);
	A.Add(11);
	A.Add(13);
	A.Add(9);
	A.Add(1);
	Queue C(A);
	while (C.IsEmpty() == 1) {
		cout << C.GetInfo() << " ";
	}
	cout << endl;
	while (A.IsEmpty() == 1) {
		cout << A.GetInfo() << " ";
	}
	cout << endl;
	B.Add(6);
	B.Add(9);
	B.Add(4);
	B.Add(1);
	B.Add(7);
	A = B;
	while (B.IsEmpty() == 1) {
		cout << B.GetInfo() << " ";
	}
	cout << endl;
	while (A.IsEmpty() == 1) {
		cout << A.GetInfo() << " ";
	}
	cout << endl;
}