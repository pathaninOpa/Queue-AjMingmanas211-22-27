#ifndef node_h
#define  node_h
#include <iostream>

class NODE{
	 int order_number,qty;
   char menu[10][2]={"ramen", "somtum"};
	NODE *nextPtr;
public:
	NODE(int,int=1);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int q,int o){
	int qty=q;
  int order_number = o;
	nextPtr=NULL;

}
int NODE::get_value(){
	int price;
  if(order_number>3 || order_number<1)

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 cout<<"deleting " <<data<<endl;

}


#endif