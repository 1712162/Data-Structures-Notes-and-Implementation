#include "Node.h"

template<class T>
Node<T> :: Node() : next(nullptr){
}


template<class T>
Node<T> :: Node(const T & k): key(k), next(nullptr){
	
}

template<class T>
Node<T> :: Node(const T & k, Node<T> * n): key(k), next(n){
}

template<class T>
T Node<T> :: getKey() const{
	return key;
}

template<class T>
Node<T> * Node<T> :: getNext(){
	return next;
}

template<class T>
void Node<T> :: setKey(const T & k){
	key = k;
}

template<class T>
void Node<T> :: setNext(Node<T> * n){
	next = n;
}
