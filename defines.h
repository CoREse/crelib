#pragma once
#ifndef CRELIB_DEFINE_H
#define CRELIB_DEFINE_H

#ifndef myalloc
#define myalloc(n,T) (T*)malloc(n*sizeof(T))
#endif

namespace cre
{
	typedef unsigned int uint;
	typedef unsigned long long uint64;
	typedef long long int64;
}
#endif
