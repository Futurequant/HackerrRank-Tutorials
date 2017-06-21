// Stack Header File stack.h Interface file for stack
#ifndef STACK_H
#define STACK_H
namespace stackmorris

{
	struct StackFrame
	{
		char data;
		StackFrame *link;
	};

	typedef StackFrame* StackFramePtr;

	class Stack
	{
	public:
		Stack();
		//Initilises the object to an empty stack

		Stack(const Stack& a_stack);
		//Copy Constructor 

		~Stack();
		//Destroys the stack and returns all the memory to freestore

		void push(char the_symbol);
		//PostCondition: the_symbol has been added to stack

		char pop();
		//Precondition: The stack is not empty 
		//Returns the top symbol from the stack
		//Top symbol from the stack

		bool empty() const;
		//Returns true if the stack is empty. Returns false otherwise

	private: 
		StackFramePtr top;
	};
}//MorrisStack

#endif //STACK_H