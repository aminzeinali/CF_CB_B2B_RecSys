#include "item.h"

class preferenceTree{
public:
	int userId;
	string userName;
	vector<Node> nodes;
	preferenceTree(int id, string uName, vector<Node> n);
};