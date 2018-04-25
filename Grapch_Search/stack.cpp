#include "stack.h"

template<typename T>
Stack<T>::Stack(int size)
{
	_size = size;
	arr = new T[_size];
	iter = 0;
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] arr;
}

template<typename T>
bool Stack<T>::isEmty()
{
	return iter > 0;
}

template<typename T>
void Stack<T>::Puch_Back(T  _t)
{
	if (it < (_size - 1))
	{
		arr[iter] = _t;
		++iter;
	}
}

template<typename T>
T Stack<T>::Pop_Back()
{
	if (iter >= 0) {
		auto temp = arr[iter];
		--iter;
		return temp;
	}
	
}

template<typename T>
int Stack<T>::size()
{
	return size;
		
}

template<typename T>
unsigned int Stack<T>::End()
{
	return iter;
}



