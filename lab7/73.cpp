 
#include <iostream>
using namespace std;
int main() {
	int n = 100;
	int *ptr1, *ptr2, *ptr3;
	ptr1 = &n;
	ptr2 = &n;
	ptr3 = ptr1;
	printf_s("%d \n", n);
	printf_s("%d \n", *ptr1);
	printf_s("%d \n", *ptr2);
	printf_s("%d \n", *ptr3);
	printf_s("%p \n", &n);
	printf_s("%p \n", &ptr1);
	printf_s("%p \n", &ptr2);
	printf_s("%p \n", &ptr3);
	cin.get();
}
 