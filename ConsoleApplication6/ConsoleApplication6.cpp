#include <iostream>
using namespace std;

class MyString
{
	string array;
	int size;

public:
	MyString() {
		string array = "";
		int size = 0;
	}
	MyString(const char* str) {
		size = strlen(str);
		array = string(str);
	}

	MyString& operator+=(const MyString& other) {
		array += other.array;
		size = array.length();
		return *this;

	}


	MyString& operator=(const MyString& other) {
		if (this != &other)
		{
			array = other.array;
			size = array.length();
		}
		return *this;

	}
	char& operator[](int index) {
		return array[index];
	}

	friend ostream& operator<<(ostream& os, MyString& other) {
		os << other.array;
		return os;
	}
	int Length()const {
		return size;
	}

};

int main() {
	MyString str1 = "Salam";
	MyString str2 = " Necesen";
	str1 += str2;
	cout << str1 << endl;

	cout << "Length :" << str1.Length();
	return 0;
}
