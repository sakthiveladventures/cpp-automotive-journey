#include <iostream>
#include <cstring> //for strlen, strcpy
using namespace std;

class MyString {

private:
    char* data;
    int len;

public:
    MyString(const char* input) {
	if (input == nullptr) {
	    len=0;
	    data=new char[1];
            data[0]='\0';
	    return;
	}
        len = strlen(input);
	data = new char[len + 1];
	strcpy(data, input);
    }

    MyString(const MyString& mystring) {
	len = mystring.len;
	data = new char[len + 1];
	strcpy(data, mystring.data);
    }

    ~MyString() {
	delete[] data;
    }

    const char* getString() const {
	return data;
     }

};

int main() {
    MyString mystring = "Helo world";
    MyString mystring2(mystring);
    cout << "mystring char = " << mystring.getString() << endl;
    cout << "mystring2 char = " << mystring2.getString() << endl;
    return 0;
}
