#include <iostream>
#include <cstring> //for strlen, strcpy
#include <memory> //for unique_ptr
using namespace std;

class MyString {

private:
    unique_ptr<char[]> data;
    int len;

public:
    MyString(const char* input) {
        cout << "Ctor char*" << endl;
	if (input == nullptr) {
	    len=0;
	    data=make_unique<char[]>(len+1);
            //data[0]='\0';
	    return;
	}
        len = strlen(input);
	data = make_unique<char[]>(len+1);
	strcpy(data.get(), input);
    }

    MyString& operator=(const MyString& myString) {
	cout << "Copy Assign" << endl;
        if (this == &myString) {
            return *this;
	}

	len =  myString.len;
	data = make_unique<char[]>(len+1);
	strcpy(data.get(), myString.data.get());
	return *this;
    }

    MyString(const MyString& mystring) {
        cout << "Copy Ctor" << endl;
	len = mystring.len;
	data = make_unique<char[]>(len+1);
	strcpy(data.get(), mystring.data.get());
    }

    MyString& operator=(MyString&& myString) {
	cout << "Move Assign" << endl;
        if (this == &myString) {
	    return *this;
	}

	len = myString.len;
	data = move(myString.data);
	myString.len = 0;
	return *this;
    }

    MyString(MyString&& mystring) {
	cout << "Move Ctor" << endl;
	len = mystring.len;
        data = move(mystring.data);
	mystring.len = 0;
    }

    const char* c_str() const {
        return data ? data.get() : ""; // unique_ptr -> raw char* for reading only
    }

    const int getLength() {
	return len;
    }

};

int main() {
    MyString mystring = "Helo world";
    MyString mystring2(mystring);
    cout << "mystring char = " << mystring.c_str() << endl;
    cout << "mystring2 char = " << mystring2.c_str() << endl;
    MyString s1 = "80 km/h";
    MyString s2 = s1;
    cout << "Before: " << s1.c_str() << " vs " << s2.c_str() << endl;
    MyString s3 = "90 km/h";
    s2 = s3;
    cout << "After s2 changed: " << s1.c_str() << " vs " << s2.c_str() << endl;
    MyString s4("VHAL");
    MyString s5 = std::move(s4);
    std::cout << "s4 len: " << s4.c_str() << " s5: " << s5.c_str() << "\n";
    // s1 len should be 0, s2 = VHAL
    return 0;
}
