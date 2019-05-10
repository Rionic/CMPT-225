#include <iostream>
#include "heap.h"
using namespace std;

void heapTest();

int main(){
	heapTest();
}
void heapTest(){
	Heap H;
	      H.insert(91,7);
	      H.insert(92,6);
	      H.insert(93,8);
	      H.insert(94,5);
	      H.insert(95,9);
	      H.insert(90,1);

	      //H.extractMin();
	      for (int i=0; i<6; i++){
	      	cout << H[i].priority << endl;
	      }
  }