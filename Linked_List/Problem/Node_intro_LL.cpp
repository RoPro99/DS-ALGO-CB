#include <cstddef>
class Node {
public:
	int data;
	Node *next;


	//constructor
	Node(int data) {
		this -> data = data;
		next = NULL;


	}
};