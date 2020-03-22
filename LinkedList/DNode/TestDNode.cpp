#include "DNode.cpp"
#include<iostream>
int main(){
	DNode<int> * temp = new DNode<int>(5); 
	DNode<int> node (1,temp,nullptr);
	node.setItem(2);
	std::cout<<node.getItem()<<" "<<node.getPrev()->getItem();
	return 0;
}
