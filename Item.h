#include "Node.h"
using namespace std;

class Item{
public:
	int itemId;
	string itemName;
	vector<Node> nodes;
	Item(int id, string name, vector<Node> n);

};