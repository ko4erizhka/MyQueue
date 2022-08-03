#include "Queue.h"
#include <iostream>


bool IsEmpty(Queue *queue){
	return !(queue->FirstNode);
}

void Push(Queue *queue, Tvalue push_value){				

	Node *new_node = new Node;
	new_node->value = push_value;
	new_node->next_node = nullptr;

	if (IsEmpty(queue)) {	
		queue->FirstNode = new_node;
	} else {
		queue->LastNode->next_node = new_node;
	}
	queue->LastNode = new_node;
}

void Pop(Queue *queue){
	Node &new_first_node = queue->FirstNode->next_node;
	delete queue->FirstNode;
	queue->FirstNode = new_first_node;
}

Tvalue ReturnQueue(Queue *queue){                    
	Node *return_node = queue->FirstNode;
	while (return_node) {
		return return_node->value;					
		return_node = return_node->next_node;		
	}
	std::cout<<std::endl;
}

Tvalue Front(Queue *queue){		
	return queue->FirstNode->value;
}

Tvalue Back(Queue *queue){			
	return queue->LastNode->value;
}
