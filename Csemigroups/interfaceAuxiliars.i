//file : Auxiliars.i : interface file for auxiliars.h
%module auxiliars

%{
#include "auxiliars.h"
%}

%include "std_vector.i"; 
namespace std { 
    %template(vector_long) vector<long>; 
    %template(vector_vector_long) vector<std::vector<long> >;
    %template(VecDouble) vector<double>;
    %template(VecVecdouble) vector< vector<double> >;
} 

%include auxiliars.h