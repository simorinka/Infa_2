#include<iostream>

using namespace std;

int reverse(int number) {
	int count = 0;
	while (number != 0) {
		count = count * 10 + number % 10;
		number /= 10;
	}
	return count;
}

int main() {

}