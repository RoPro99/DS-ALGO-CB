#include<vector>
using namespace std;

template<typename T>
class TreeNode {
public:
	T data;
	vector<TreeNode<T>*> children;//to store children//if parent is int then child also

	//Create a constructor for data
	TreeNode(int data) {
		this->data = data;
	}

};