#include <stdio.h>
int top = -1;
int maxsize = 10;
int stack[10];
int isempty();
int isfull();
int pop();
int push();
int peek();
int main(){
	push(4);
	push(10);
	push(20);
	printf("Elements At top of stack %d",peek());
	while(!=is empty())
		int input = pop ();
		printf("Popped element is %d",input);
	}
	printf("Stack full %s",isfull()?"true":"false");
	printf("Stack is Empty %s",isempty()?"true":"false");
	return 0;
	
}
int isempty(){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(){
	if (top == maxsize){
		return 1;
	}
	else {
		return 0;
	}
}
int peek(){
	return stack[top];
}
int push(int input){
	if(!=isfull()){
		top = top +1;
		stack[top]= input;
	}
	else{
		printf("Stack is full, data cannot be inserted");
	}
}
int pop(){
	int input;
	if(!=isempty()){
		top = top -1;
		return input;
	}
	else{
		printf("STack is empty , element cannot be popped out")
	}
}
