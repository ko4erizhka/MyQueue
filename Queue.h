#pragma once

template <class Tvalue>
struct Node {
	Tvalue value;
	Node *next_node;
	};

template <class Tvalue>
struct Queue {
	
	Node *FirstNode;
	Node *LastNode;
	
};

template <class Tvalue>
void Push(Queue *queue, Tvalue push_value);
template <class Tvalue>
void Pop(Queue *queue);
template <class Tvalue>
Tvalue ReturnQueue(Queue *queue);
template <class Tvalue>
Tvalue Front(Queue *queue);
template <class Tvalue>
Tvalue Back(Queue *queue);