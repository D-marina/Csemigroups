#ifndef _AUX 
#define _AUX

#include <vector> 
#include <algorithm>
#include <iostream>
#include <cmath>

std::vector<double> normalize(std::vector<long> v);
long gcd(long a, long b);
long gcdL(std::vector<long> v);

std::vector<long> operator+(const std::vector<long>& v1, const std::vector<long>& v2);
std::vector<long> operator-(const std::vector<long>& v1, const std::vector<long>& v2);
std::vector<long> operator/(const std::vector<long>& v1, const long n);


#endif