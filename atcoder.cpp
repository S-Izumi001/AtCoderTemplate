#include <iostream>
#include <sstream>
#include "atcoder/all"

using Int = int64_t;
using mint = atcoder::modint998244353;
#define yes "Yes"
#define no  "No"
template<typename T> std::vector<T> getArray(int N, std::istream &is) { std::vector<T> r(N, T{}); for (auto &v : r) { is >> v; } return r; }
template<typename T> void chmax(T &max, const T &newVal) { max = std::max(max, newVal); }
template<typename T> void chmin(T &min, const T &newVal) { min = std::min(min, newVal); }
template<typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) { for (auto & val : vec) {os << val << '\n';} return os; }

#define handleInput(stream) \

#define solv \

/* answer */


#ifdef _LOCAL_
#include <gtest/gtest.h>

TEST(testcase, 1) { std::stringstream ss{ R"(
)"};
	handleInput(ss);
	EXPECT_EQ(

	, solv); }

#else

int main()
{
	handleInput(std::cin);
	std::cout << solv << std::endl;
	return 0;
}

#endif
