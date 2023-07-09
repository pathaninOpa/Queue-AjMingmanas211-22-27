#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc,char *argv[]) {
Queue q;
int price,cash,change;
  for(int i = 1; i<argc; i++){
    if (argv[i][0] == 'x'){
      price = q.dequeue();
      do {
        cout<<"Cash: ";
        cin >> cash;
      }
      while (cash >= price);
      cout<< "Thank you\n";
      if (cash > price){
        cout << "The change is "<<cash - price <<endl;
      }
    }
    else{
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      cout << "Order received"<<endl;
      i++;
    }
  }

  cout<<"End of program"<<endl;

  }

