//file : interfaceCsemigroups.i : interface file for interfaceCsemigroupsCpp.h
//https://stackoverflow.com/questions/34393905/wrapping-multiple-classes-together-of-c-for-python-with-swig
%module CsemigroupsCpp

%{
#include "CsemigroupsCpp.h"
%}

%include "std_vector.i"; 
namespace std { 
    %template(vector_long) vector<long>; 
    %template(vector_vector_long) vector<std::vector<long> >;
    %template(VecDouble) vector<double>;
    %template(VecVecdouble) vector< vector<double> >;
} 

%include CsemigroupsCpp.h