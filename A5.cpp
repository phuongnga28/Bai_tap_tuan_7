#include <iostream>
using namespace std;
char* weird_string() {
	char c[] = "123456";
	return c;
}
int main()
{
	char* c = new char[10];
	c = weird_string();
	cout << c;
	return 0;
	//out put khong mong muon do truy cap khong hop le
}
