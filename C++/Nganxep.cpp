#include<bits/stdc++.h>
using namespace std;

/* ngan x?p: last in first out
push them
pop lay
*/

typedef SIZE 100;
typedef struct{
	in top;
	int nodes[SIZE];
}Stack;

typedef struct{
	int top;
	int *nodes;
}Stack;

void push(Stack *stack, int node){
	int *tmpNodes = new int[Stack -> top + 2];
	stack -> top++;
	for (int i = 0; i < stack-> top; i++)
	tmpNode[i] = stack -> nodes[i];
	tmpNodes[stack->top] = node;
	delete[]stack->nodes;
	stack->nodes = tmpNodes;
	return;
}

int pop(Stack *stack){
	if(stack->top<0){
		return 0;
	}
	int result = stack->nodes[stack->top];
	int *tmpNodes = new int[stack->top];
	for (int i = 0; i < stack->top; i++{
		tmpNodes[i] = stack->nodes[i];
		stack->top--;
		delete[]stack->nodes;
		stack->nodes = tmpNodes;
		return result;
}

int main (){
	
}