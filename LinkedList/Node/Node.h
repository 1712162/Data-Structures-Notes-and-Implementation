template <class T>
class Node {
private:
	T key;
	Node<T> * next;
public:
	Node();
	Node(const T &);
	Node(const T &,Node<T> *);
	
	T getKey() const;
	Node<T> * getNext();
	
	void setKey(const T &);
	void setNext(Node<T> *);
};
