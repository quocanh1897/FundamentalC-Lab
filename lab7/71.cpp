 
int main() {
	int n;
	double d;
	int* ptr;
	ptr = &n;//Địa chỉ biến n gán cho ptr
	//*ptr = d;//	Địa chỉ biến d gán cho ptr
	*ptr = 0;	// Số 0 gán cho ptr
	*ptr = 1000;	// Số 1000 gán cho ptr
 
}