// ex_main.cpp
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 100000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

bool is_prime(int num) {
	int count = 0;
	if (num == 1) {
		return false;
	}
	for (int a = 2; a <= num - 1; a++) {
		if (num%a == 0) {
			return false;
		}
		count++;
	}
	if (count == num) {
		return true;
	}
}


int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int num_add = a;
	while (num_add <= CPP2_PRIME_UPPER_LIMIT) {
		std::cout << num_add << std::endl;
		num_add += d;
	}
	return-1;
}




int main() {
	nth_prime(2, 3, 100);
	std::cout << is_prime(1) << std::endl;
	return 0;
}