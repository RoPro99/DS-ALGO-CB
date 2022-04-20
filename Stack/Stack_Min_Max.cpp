#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//step 1 create a class of min and max with vector in it
class MinMaxStack {
///step 2 create a three stk with 1-stack 2-min_stk 3-max-stk
	vector<int> stack;
	vector<int> min_stack;
	vector<int> max_stack;
public:
	void push(int data) {
		int current_min = data;
		int current_max = data;

		if (min_stack.size()) {

			current_min = min(min_stack[min_stack.size() - 1], data);
			current_max = max(max_stack[max_stack.size() - 1], data);

		}
		min_stack.push_back(current_min);
		max_stack.push_back(current_max);
		stack.push_back(data);
	}
	int getMin() {
		return min_stack[min_stack.size() - 1];
	}
	int getMax() {
		return max_stack[max_stack.size() - 1];
	}
	int top() {
		return stack[stack.size() - 1];
	}
	bool empty() {
		return stack.size() == 0;
	}
	void pop() {
		min_stack.pop_back();
		max_stack.pop_back();
		stack.pop_back();
	}


};

int main() {
	MinMaxStack s;

	s.push(10);
	s.push(90);
	s.push(80);
	s.push(100);
	s.push(9);


	cout << s.getMax() << endl;//->100
	s.pop();//->9
	cout << s.getMin() << endl;//->10

	cout << s.top() << endl;//->100
	s.pop();//->100
	cout << s.getMax() << endl;//->90
	s.pop();//->90
	cout << s.getMin() << endl;//->10
	return 0;
}