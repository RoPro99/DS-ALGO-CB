#include<bits/stdc++.h>
class stackusingArray {
	int *data;
	int nextindex;
	int capacity;
public:
	stackusingArray(int totalSize) {
		data = new int(totalSize);
		nextindex = 0;
		capacity = totalSize;
	}
	//return the number of element present in the class
	int size() {
		return nextindex;
	}
	bool isEmpty() {
		if (nextindex == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	//insert element
	void push(int element) {
		if (nextindex  == capacity) {
			std::cout << "Stack Is Full" << std::endl;
			return;
		}
		data[nextindex] = element;
		nextindex++;
	}
	//delete element
	int pop() {
		if (isEmpty()) {
			std::cout << "Stack Is Empty" << std::endl;
			return INT_MIN;
		}
		nextindex--;
		return data[nextindex];
	}
	int top() {
		if (isEmpty()) {
			std::cout << "Stack Is Empty" << std::endl;
			return INT_MIN;
		}
		return data[nextindex - 1];
	}
};