// 素因数分解
std::vector<Int> primeFactorization(Int N) {
	Int limit = std::sqrt(N);
	std::vector<Int> result{};
	Int n = N;
	for (int i = 2; i <= limit; i++) {
		if ((n%i) == 0) {
			do {
				result.emplace_back(i); n /= i;
			} while ((n%i) == 0);
		}
	}
	if (n > limit) {
		result.emplace_back(n);
	}
	return result;
}

// デバッグ表示用
template<typename Container> void p(const Container &V) {
	for (auto &v : V) {
		std::cout << v << " ";
	}
	std::cout<< std::endl;
}
