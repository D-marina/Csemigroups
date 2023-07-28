#setup.py file:
from setuptools import setup, Extension


setup(name='Csemigroup',
    version='0.1',
    ext_modules=[Extension("_Csemigroup", sources=['interface.i','auxiliars.cxx','CsemigroupsCpp.cxx',],
                    swig_opts=['-Wall','-c++'],
                    )],
    headers=['auxiliars.h','CsemigroupsCpp.h']
)