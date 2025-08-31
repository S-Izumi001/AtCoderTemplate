#include "atcoder/all"
#include <bits/stdc++.h>
using Int = int64_t;
#define yes "Yes"
#define no  "No"
template<typename T> std::vector<T> getArray(int N, std::istream &is) { std::vector<T> r(N, T{}); for (auto &v : r) { is >> v; } return r; }
template<typename T> void chmax(T &max, const T &newVal) { max = std::max(max, newVal); }
template<typename T> void chmin(T &min, const T &newVal) { min = std::min(min, newVal); }
template<typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& obj) { for (auto & val : obj) {os << val << ' ';} os << std::endl; return os; }
#define p(xxx) std::cerr << #xxx << ":" << xxx << std::endl;
#define handleInput(stream) \


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
