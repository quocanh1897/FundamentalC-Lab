#include <iostream>
using namespace std;
int main() {
	int *ptr;
	ptr = 0;
	printf_s("%p \n", &ptr); 
	printf_s("%d \n", *ptr);//loi vi o nho mang gia tri null
	cin.get();
}
 