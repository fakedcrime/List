#pragma once
#include "Zveno.h"
#include <string>
#include <cstddef>
class Queue {
private:
	Zveno* head;
public:
	Queue() {
		head = nullptr;
	}
	void Add(int inf) {
		//Zveno *first;
		Zveno* p = new Zveno(inf);
		if (head == nullptr) {
			head = p;

		}
		else {
			Zveno* current = head;
			while (current->GetNext() != nullptr) {
				current = current->GetNext();
			}
			current->SetNext(p);
		}
	}
	Queue(const Queue& tmp) {
		if (tmp.head != nullptr) {
			Zveno p(*(tmp.head));
			head = new Zveno(p);
			Zveno* Prev = head;
			Zveno* cur = tmp.head->GetNext();
			while (cur != nullptr) {
				Zveno* v(cur);
				 // починить
					//Prev->SetNext(v);
					Prev = Prev->GetNext();
					cur = cur->GetNext();
			}
		}
	}
	Queue& operator=(Queue tmp) {
		if (head != nullptr) {
			delete head;
		}
		if (tmp.head != nullptr) {
			head = new Zveno(*(tmp.head));
			Zveno* Prev = head;
			Zveno* cur = tmp.head->GetNext();
			//Zveno* v(cur);
			Prev->SetNext(cur);
			while (cur != nullptr) {
				Prev = Prev->GetNext();
				cur = cur->GetNext();

			}
		}
		return *this;
	}
	int GetInfo() {
		int p = 999;
		if (head != nullptr) {
			//Zveno* Cur = new Zveno(*(head));
			//Zveno* tmphead = new Zveno(*(head));
			//tmphead = head->GetNext();
			//head = tmphead;
			Zveno* Cur = head;
			head = head->GetNext();
			p = Cur->GetInfo();
		}
		return p;
	}
	int IsEmpty() {
		if (head == nullptr) {
			return 0;
		}
		else { return 1;
		}
	}
};