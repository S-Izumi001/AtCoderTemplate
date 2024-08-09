// デバッグ表示用
template<typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& obj) {
	for (auto & val : obj) {os << val << ' ';}
	os << std::endl;
	return os;
}
template<typename T> void p(const T &V) {
	for (auto &v : V) {
		std::cout << v << " ";
	}
	std::cout<< std::endl;
}

// ↖︎↑↗︎←→↙︎↓↘︎
std::vector<int> dh = {-1, -1, -1, 0, 0, 1, 1, 1};
std::vector<int> dw = {-1,  0,  1,-1, 1,-1, 0, 1};

// ↑←→↓
std::vector<int> dh = {-1, 0, 0, 1};
std::vector<int> dw = {0, -1, 1, 0};

// 素数
std::vector<Int> getPrimes(Int N) {
	Int lim = std::sqrt(N);
	std::vector<bool> notPrime(lim, false);
	notPrime[0] = true;
	notPrime[1] = true;
	for (int i = 2; i <= lim; i++) {
		if (notPrime[i]) continue;
		for (int j = i*2; j <= lim; j+=i) {
			notPrime[j] = true;
		}
	}
	std::vector<Int> result;
	for (int i = 2; i <= lim; i++) {
		if (not notPrime[i]) result.emplace_back(i);
	}

	return result;
}

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
