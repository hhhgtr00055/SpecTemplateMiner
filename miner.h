<<<<<<< HEAD
#define STATE_NODE 0
#define VIEW_NODE 1

class AndroidEvent{
	public:
	int type; //state or view
	string name;
	bool isTail;
	string description; // something used to connect back to real android event(useless now)
};

class RuleNode{
	public:
	string name;
	vector<RuleNode*> children;
};

class Label{
	public:
	int traceNum;
	int eventNum;
	Label(int tNum, int eNum){
		traceNum=tNum;
		eventNum=eNum;
	}
};
=======
#define STATE_NODE 0
#define VIEW_NODE 1

class AndroidEvent{
	public:
	int type; //state or view
	string name;
	bool isTail;
	string description; // something used to connect back to real android event(useless now)
};

class RuleNode{
	public:
	string name;
	vector<RuleNode*> children;
};

class Label{
	public:
	int traceNum;
	int eventNum;
	Label(int tNum, int eNum){
		traceNum=tNum;
		eventNum=eNum;
	}
};

>>>>>>> 0a6dc32dc9197c8acae25093ede56c941a4527cc
