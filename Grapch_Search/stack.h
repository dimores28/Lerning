#pragma once
template<typename T>
class Stack
{
public:
	Stack(int size);
	~Stack();
	bool isEmty();
	void Puch_Back(T  _t);
	T Pop_Back();
	int size();
	unsigned int End();
private:

	T* arr;
	unsigned int iter;
	int _size;

};

