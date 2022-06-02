#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//step 1 class
class heap {
//step 2 vector
	vector<int> v;
	bool minheap;
	bool compare(int a, int b) {
		if (minheap) {
			return a < b;//for minmheap
		}
		else {
			return a > b; //for maxheap
		}
	}
	void heapyfi(int idx) {
		int left = 2 * idx;
		int right = left + 1;

		int min_idx = idx;
		int last = v.size() - 1;
		if ( left <= last && compare(v[left], v[idx])) {
			min_idx = left;
		}
		if (right <= last && compare(v[right], v[min_idx])) {
			min_idx = right;
		}
		if (min_idx != idx) {
			swap(v[idx], v[min_idx]);
			heapyfi(min_idx);
		}
	}

public:
	heap(int default_size = 10, bool type = true) {
		v.reserve(default_size);
		v.push_back(-1);//block 0th index by -1
		minheap = type;
	}

	//step 3 insertion
	void push(int d) {
		v.push_back(d);
		int idx = v.size() - 1; //to access last element in array
		int parent = idx / 2;
		//keep pushing still root node or stop current ele greater then parent
		while (idx > 1 and compare(v[idx], v[parent])) {
			swap (v[idx], v[parent]);
			idx = parent;
			parent = parent / 2;
		}
	}
	int get() {
		return v[1];//top most element
	}
	void pop() {
		//step 1 swap 1 and last ele
		int idxlast = v.size() - 1;
		swap(v[1], v[idxlast]);
		//remove last node
		v.pop_back();
		heapyfi(1);//function call for compare
	}
	bool empty() {
		return v.size() == 1;
	}



};




int main() {
//get init size , type - min or max
	heap h;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		h.push(no);
	}
	//remove all the ele one by one
	while (!h.empty()) {
		cout << h.get() << " ";
		h.pop();
	}

	return 0;
}