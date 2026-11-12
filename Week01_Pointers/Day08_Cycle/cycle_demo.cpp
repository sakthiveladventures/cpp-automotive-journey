#include <iostream>
#include <memory>
using namespace std;

struct B;
struct A { shared_ptr<B> b; ~A(){ cout << "A dead\n"; } };
struct B { weak_ptr<A> a; ~B(){ cout << "B dead\n"; } }; // definition - CHANGED here

int main(){
  auto a = make_shared<A>();
  auto b = make_shared<B>();
  a->b = b;
  b->a = a;
  cout << "end main\n";
}
