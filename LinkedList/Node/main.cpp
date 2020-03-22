#include "Node.cpp"
#include<iostream>
int main(){
	int k;
	std::cin>>k;
	Node<int> node(k);
	std::cout<<node.getKey();
	return 0;
}
