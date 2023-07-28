#include "auxiliars.h" 

using namespace std;

std::vector<double> normalize(std::vector<long> v)
{
	double norm=0;
	unsigned n = v.size();
	vector<double> aux(n);
	for(unsigned ii = 0; ii < n; ii++)
	{
		norm += v[ii]*v[ii];
	}
	norm = sqrt(norm);
	
	for(unsigned ii = 0; ii < n; ii++)
	{
		aux[ii] = v[ii]/norm;
	}
	
	return aux;
}

long gcd(long a, long b)
{
	if(a == 0)
		return b;
	return gcd(b%a,a);
}

long gcdL(vector<long> v) 
{
	long n, result;
	n = v.size();
	result = v[0];
	for(unsigned i = 1; i < n; i++) 
        	result = gcd(v[i], result); 
	if(result<0)
		return -result;
	return result; 
}

vector<long> operator-(const vector<long>& v1, const vector<long>& v2)
{
    unsigned n;
    n = v1.size();
    vector<long> aux(n);
    for(unsigned ii=0;ii<n;ii++)
    {
        aux[ii] = v1[ii]-v2[ii];
    }
    return aux;
}

vector<long> operator+(const vector<long>& v1, const vector<long>& v2)
{
    unsigned n;
    n = v1.size();
    vector<long> aux(n);
    for(unsigned ii=0;ii<n;ii++)
    {
        aux[ii] = v1[ii]+v2[ii];
    }
    return aux;
}

std::vector<long> operator/(const std::vector<long>& v1, const long n)
{
    unsigned m;
    m = v1.size();
    vector<long> aux(m);
    for(unsigned ii=0;ii<m;ii++)
    {
        aux[ii] = v1[ii]/n;
    }
    return aux;
}