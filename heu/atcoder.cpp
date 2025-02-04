#include "atcoder/all"
#include <bits/stdc++.h>

using Int = int64_t;
template<typename T> std::vector<T> getArray(int N, std::istream &is) { std::vector<T> r(N, T{}); for (auto &v : r) { is >> v; } return r; }
template<typename T> void chmax(T &max, const T &newVal) { max = std::max(max, newVal); }
template<typename T> void chmin(T &min, const T &newVal) { min = std::min(min, newVal); }
template<typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& obj) { for (auto & val : obj) {os << val << ' ';} os << std::endl; return os; }
#define s(xxx) std::cerr << #xxx << ":" << xxx << std::endl;

static std::random_device seed_gen;
static std::mt19937 engine(seed_gen());
constexpr double randMax = 100.0;
static std::uniform_real_distribution<> dist(0.0, randMax);

#ifndef _TEST_

int main()
{
	return 0;
}

#else
#include <gtest/gtest.h>


#endif
