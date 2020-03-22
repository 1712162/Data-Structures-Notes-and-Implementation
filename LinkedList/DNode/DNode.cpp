#include "DNode.h"

template<class T>
DNode<T> :: DNode(): prev(nullptr), next(nullptr){
	
}

template<class T>
DNode<T> :: DNode(const T & i): item(i), prev(nullptr), next(nullptr){
	
}

template<class T>
DNode<T> :: DNode(const T & i, DNode<T> * p, DNode<T> * n): item(i), prev(p), next(n){
	
}

template<class T>
T DNode<T> :: getItem() const{
	return item;
}

template<class T>
DNode<T> * DNode<T> :: getPrev(){
	return prev;
}

template<class T>
DNode<T> * DNode<T> :: getNext(){
	return next;
}

template<class T>
void DNode<T> :: setItem(const T & i){
	item = i;
}

template<class T>
void DNode<T> :: setPrev(DNode<T> * p){
	prev = p;
}

template<class T>
void DNode<T> :: setNext(DNode<T> * n){
	next = n;
}
