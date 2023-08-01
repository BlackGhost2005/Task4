//#pragma once
//
//
//template<typename T>
//class CircleQueue {
//
//	int _capacity = 5;
//	T* _arr = new T[_capacity];
//	int _front = -1;
//	int _rear = -1;
//public:
//	bool isFull();
//
//	bool isEmpty();
//
//	T popFront();
//
//	T append(T newItem);
//
//	T peek();
//
//	template<typename T>
//	friend ostream& operator<<(ostream& out, CircleQueue<T>& queue);
//
//	~CircleQueue()
//	{
//		delete[] _arr;
//	}
//
//};
//
//template<typename T>
//bool CircleQueue<T>::isFull()
//{
//	if (_front == 0 && _rear == _capacity - 1) return true;
//	else if (_front == _rear + 1) return true;
//	return false;
//}
//
//template<typename T>
//bool CircleQueue<T>::isEmpty()
//{
//	return _front == -1;
//}
//
//template<typename T>
//T CircleQueue<T>::popFront()
//{
	//if (isEmpty())
	//	assert(!"Queue is empty");

	//int element = _arr[_front];
	//if (_front == _rear)
	//{
	//	_front = -1;
	//	_rear = -1;
	//}
	//else
	//	_front = (_front + 1) % _capacity;
	//return element;
//}
//
//template<typename T>
//T CircleQueue<T>::append(T newItem)
//{
	//if (isFull())
	//{
	//	assert(!("Queue is full"));

	//}

	//if (_front == -1)_front = 0;

	//_rear = (_rear + 1) % _capacity;
	//_arr[_rear] = newItem;
	//return newItem;
//}
//
//template<typename T>
//T CircleQueue<T>::peek()
//{
//	if (isEmpty())
//		assert(!"Queue is empty");
//
//	return _arr[_front];
//}
//
//template<typename T>
//ostream& operator<<(ostream& out, CircleQueue<T>& queue)
//{
//	int i;
//	for (i = queue._front; i != queue._rear; i = (i + 1) % queue._capacity)
//	{
//		cout << queue._arr[i];
//	}
//	cout << queue._arr[i];
//
//
//	return out;
//}