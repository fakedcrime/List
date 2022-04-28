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
	string arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	//C.AddToStr(arr);
	sort(arr, 10);
	//cout << C.ListToString() << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " " << endl;
	}
	cout << endl;
	B.Add(6);
	B.Add(9);
	B.Add(4);
	B.Add(1);
	B.Add(7);
	cout << B.ListToString() << endl;
	A = B;
	cout << A.ListToString() << endl;

}