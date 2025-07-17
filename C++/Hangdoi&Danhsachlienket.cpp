/*hang doi
first in first out
front - rear
*/

#include<bits/stdc++.h>
#include<queue>
using namespace std;

typedef SIZE 100;
typedef struct{
	int front, rear;
	int nodes[SIZE];
}Queue;

typedef struct{
	int front, rear;
	int *nodes;
}Queue;

struct simple{
	struct simple *next;
};
typedef struct simple SimpleNode;

typedef struct{
	int nodeNumber;
	SimpleNode *front, &rear;
}SimpleHeader;

int main (){
	
}