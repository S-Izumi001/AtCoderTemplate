Int POW(Int base, int x) {
	Int result = 1;
	for (int i = 0; i < x; i++) {
		result *= base;
	}
	return result;
}

atcoder::modint::set_mod(1e9+7);
using mint = atcoder::modint998244353;
atcoder::modint POW(atcoder::modint base, int x) {
	mint r = 1; while (x) { if (x & 1) r *= base; base *= base; x >>= 1; } return r;
}

atcoder::modint nCx(int N, int x) {
    // nCx
	atcoder::modint res = 1;
	for (int i = 0; i < x; i++) { res *= N - i; }
	for (int i = 1; i < x + 1; i++) { res /= i; }
    return res;
}

atcoder::modint P(int N) {
	atcoder::modint res = 1;
	for (int i = 0; i < N; i++) { res *= N - i; }
    return res;
}

Int gcd(Int x, Int y) {
	if (x > y) std::swap(x, y);
	if (y % x == 0) return x;
	return gcd(y%x, x);
}

// デバッグ表示用
template<typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& obj) {
	for (auto & val : obj) {os << val << ' ';}
	return os;
}

template<typename T, typename U> std::ostream& operator<<(std::ostream& os, const std::vector<std::pair<T,U>>& obj) {
	for (auto & [t,u] : obj) {os << t << ',' << u << ' ';}
	return os;
}


template<typename T> void p(const T &V) {
	for (auto &v : V) { std::cerr << v << " "; }
	std::cerr<< std::endl;
}

// ↑←→↓
std::vector<int> dh = {-1, 0, 0, 1};
std::vector<int> dw = {0, -1, 1, 0};

// ↑←→↓↖︎↗︎↙︎↘︎
std::vector<int> dh = {-1, 0, 0, 1, -1, -1,  1, 1};
std::vector<int> dw = { 0,-1, 1, 0, -1,  1, -1, 1};

template<typename T> 
std::vector<T> rotate(const std::vector<T> &obj) {
	std::vector<T> result = obj;
	int N = (int)obj.size();
	for (int h = 0; h < N; h++) {
	for (int w = 0; w < N; w++) {
		result[h][w] = obj[N-1-w][h];
	}
	}
	return result;
}

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

// ダイクストラ法関連
struct Edge {
	Int cost;
	Int to;
};
using Cost = Int;
using Node = Int;
using Pair = std::pair<Cost, Node>;
const Int Inf = 1e18;

{
	std::vector<Int> dist(N, Inf);
	std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> q;

	q.emplace(0, 0);
	dist[0] = 0;
	while (not q.empty()) {
		auto [cost, from] = q.top(); q.pop();
		if (dist[from] != cost) continue;

		for (auto &e : graph[from]) {
			int ncost = e.cost + cost;
			if (ncost >= dist[e.to]) continue;
			dist[e.to] = ncost;
			q.emplace(ncost, e.to);
		}
	}
}
