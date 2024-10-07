#include<string>

struct BSTNode
{
	int data;
	BSTNode* right;
	BSTNode* left;
};


class tree
{
public:

	tree();
	~tree();
	bool isEmpty();
	void search(int value);
	int MinValue();
	int MaxValue();
	void printbyqueue();
	void Delete(int value);
	void insert(int value);
	void print();

private:
	BSTNode* root;
	int length;

};
