// File: interface.i to hold all interface files together
%module Csemigroup

%include "std_vector.i"; 
namespace std { 
    %template(vector_long) vector<long>; 
    %template(vector_vector_long) vector<std::vector<long> >;
    %template(VecDouble) vector<double>;
    %template(VecVecdouble) vector< vector<double> >;
} 

%include interfaceAuxiliars.i
%include interfaceCsemigroups.i