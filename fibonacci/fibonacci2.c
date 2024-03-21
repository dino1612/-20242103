#include <stdio.h>

int fibonacci_itr(int n); // Khai báo hàm trước khi sử dụng nó

int main() { // Thêm kiểu dữ liệu trả về cho hàm main()
	int fibonacci = fibonacci_itr(6);
	printf("Fibonacci 6 = %d\n", fibonacci); // Sửa "Fibonacci" thành "fibonacci" và loại bỏ khoảng trắng không cần thiết
	return 0; // Thêm lệnh return 0 để báo hiệu kết thúc chương trình
}

int fibonacci_itr(int n) {
	int result = 0;
	int n_2 = 0, n_1 = 1;

	if (n <= 1) return n;
	for (int i = 2; i <= n; i++) { // Sửa "int = 2" thành "int i = 2"
		result = n_1 + n_2;
		n_2 = n_1;
		n_1 = result;
	}
	return result;
}
