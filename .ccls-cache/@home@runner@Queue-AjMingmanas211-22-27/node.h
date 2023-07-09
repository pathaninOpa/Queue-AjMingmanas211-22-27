#ifndef node_h
#define  node_h
#define numMenu 3
#include <iostream>
using namespace std;

class NODE{
	 int order_number,qty;
   char menu[numMenu][20]={"ramen", "somtum", "chicken zaab"};
   int pricelist[numMenu]={20,40,60};
	NODE *nextPtr;
public:
	NODE(int,int=1);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
  void print_menu();
};
typedef NODE* NodePtr;

NODE::NODE(int o,int q){
	qty=q;
  order_number = o;
	nextPtr=NULL;

}
int NODE::get_value(){
	int price;
  if(order_number<=3 || order_number>=1){
    price= pricelist[order_number-1]*qty;
    cout<<menu[order_number-1]<<endl;
    return price;
  }
  else{
    cout<<"Wrong Order number..\n";
    return 0;
  }
}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 //cout<<"deleting " <<menu[order_number-1]<<endl;
}
void NODE::print_menu(){
  cout<<menu[order_number-1]<<endl;
}

#endif