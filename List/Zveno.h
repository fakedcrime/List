#pragma once
class Zveno {
private:
	int info;
	Zveno* Next;
public:
	Zveno(int _S = 0) {
		info = _S;
		Next = nullptr;
	}
	Zveno(const Zveno& tmp) {
		info = tmp.info;
		Next = tmp.Next;
	}
	Zveno operator=(Zveno tmp) {
		info = tmp.info;
		Next = nullptr;
	}
	~Zveno() {}
	int GetInfo() {
		return info;
	}
	void SetInfo(int _info) {
		info = _info;
	}
	Zveno* GetNext() {
		return Next;
	}
	void SetNext(Zveno* _Next) {
		Next = _Next;
	}
};