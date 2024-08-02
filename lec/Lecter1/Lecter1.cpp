#include<iostream>
#include <iomanip>
using namespace std;

int main(void) {

	float lenth, width, peri;

	cout << "Please Enter Wdith And Lenth :";
	cin >> width >> lenth;

	peri = (width + lenth) * 2;

	cout << setiosflags(ios::fixed) << setprecision(5) << peri << endl;


	return 0;
}
