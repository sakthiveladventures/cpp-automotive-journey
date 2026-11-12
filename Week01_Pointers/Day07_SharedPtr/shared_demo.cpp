#include <iostream>
#include <memory>
using namespace std;

struct Sensor {
  Sensor(){ cout << "Sensor created\n"; }
  ~Sensor(){ cout << "Sensor destroyed\n"; }
};

int main() {
  auto p1 = make_shared<Sensor>();
  cout << "count: " << p1.use_count() << endl;
  {
    auto p2 = p1;
    cout << "count inside: " << p1.use_count() << endl;
  }
  cout << "count after block: " << p1.use_count() << endl;
  weak_ptr<Sensor> wp = p1;
  cout << "weak count: " << wp.use_count() << " expired? " << wp.expired() << endl;
  p1.reset();
  cout << "after reset expired? " << wp.expired() << endl;
  return 0;
}
