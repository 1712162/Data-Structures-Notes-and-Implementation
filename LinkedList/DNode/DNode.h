template<class T>
class DNode {
private:
	T item;
	DNode<T> * prev;
	DNode<T> * next;
public:
	DNode();
	DNode(const T &);
	DNode(const T &, DNode<T> *, DNode<T> *);
	
	T getItem() const;
  DNode<T> * getPrev();
  DNode<T> * getNext();
  
  void setItem(const T &);
  void setPrev(DNode<T> *);
  void setNext(DNode<T> *);
};
