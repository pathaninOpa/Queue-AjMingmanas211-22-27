#include <iostream>
using namespace std;
#include "queue.h"
#define numMenu 3

int main(int argc,char *argv[]) {
Queue q;

  int price,cash,change,qc=0,itmc=0;
  char menu[numMenu][20]={"ramen", "somtum", "chicken zaab"};
  
  for(int i = 1; i<argc; i++){
    if (argv[i][0] == 'x'){
      price = q.dequeue();
      cout<<"You have to pay "<<price<<" baht."<<endl;
      do {
        cout<<"Cash: ";
        cin >> cash;
      }
      while (cash < price);
      cout<< "Thank you _/\\_\n";
      if (cash > price){
        cout << "The change is "<<cash - price<<" baht."<<endl<<endl;
      }
      else {cout<<endl;}
      qc++; itmc--;
    }
    else{
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      //cout<<menu[atoi(argv[i])-1]<<endl;
      cout<< "Customer no. "<<qc+1<<endl;
      cout << "Order received"<<endl;
      i++; itmc++;
    }
  }
  cout<<"===============\n";
  (itmc!=0) ? cout<<"There are "<<itmc<<" ppl left in the queue.\n": cout<<"No one was left in the queue.\n";
  (itmc!=0) ? cout<<"Order left in Queue: \n": cout<<"";
  return 0;
}

