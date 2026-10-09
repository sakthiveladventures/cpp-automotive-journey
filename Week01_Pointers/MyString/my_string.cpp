#include <iostream>
#include <cstring> //for strlen, strcpy
using namespace std;

class MyString {

private:
    char* data;
    int len;

public:
    MyString(const char* input) {
        cout << "Ctor char*" << endl;
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

    MyString& operator=(const MyString& myString) {
	cout << "Copy Assign" << endl;
        if (this == &myString) {
            return *this;
	}

	delete[] data;
	len =  myString.len;
	data = new char[len+1];
	strcpy(data, myString.data);
	return *this;
    }

    MyString(const MyString& mystring) {
        cout << "Copy Ctor" << endl;
	len = mystring.len;
	data = new char[len + 1];
	strcpy(data, mystring.data);
    }

    ~MyString() {
	cout << "Dtor: " << (data? data : "null") << " addr:" << (void*)data << endl;
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
    MyString s1 = "80 km/h";
    MyString s2 = s1;
    cout << "Before: " << s1.getString() << " vs " << s2.getString() << endl;
    MyString s3 = "90 km/h";
    s2 = s3;
    cout << "After s2 changed: " << s1.getString() << " vs " << s2.getString() << endl;
    return 0;
}
