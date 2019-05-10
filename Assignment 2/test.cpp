#include <cstdlib>
#include <iostream>
#include <string>
using std::string;
using namespace std;




int size(){
  int count=0;
  for (StringNode* i=head; i!=NULL; i=i->next){
    if(i!=NULL)
      count++;
  }
  return count;
}
