#pragma once
#ifndef _DMK_DATA_TYPES_H
#define _DMK_DATA_TYPES_H

#ifdef DMK_PLATFORM_WINDOWS
#include <cstdint>

#else

#endif // DMK_PLATFORM_WINDOWS

namespace DMK {
	typedef unsigned char UI8;			// unsigned 8 bit integer
	typedef unsigned short UI16;		// unsigned 16 bit integer
	typedef unsigned int UI32;			// unsigned 32 bit integer
	typedef unsigned long long UI64;	// unsigned 64 bit integer

	typedef signed char I8;		// unsigned 8 bit integer
	typedef short I16;			// unsigned 16 bit integer
	typedef int I32;			// unsigned 32 bit integer
	typedef long long I64;		// unsigned 64 bit integer

	typedef float F32;			// float
	typedef double D64;			// double
	typedef long double LD64;	// long double

	typedef void* VPTR;			// void pointer
	typedef char* CPTR;			// char pointer
	typedef const char* CCPTR;	// const char pointer

	typedef char CHR;			// char (ASCII)
	typedef wchar_t WCHR;		// wide char (UTF-8)
}

#define DMK_UINT_8			::DMK::UI8
#define DMK_UINT_16			::DMK::UI16
#define DMK_UINT32			::DMK::UI32
#define DMK_UINT_64			::DMK::UI64

#define DMK_INT_8			::DMK::I8
#define DMK_INT_16			::DMK::I16
#define DMK_INT_32			::DMK::I32
#define DMK_INT_64			::DMK::I64
#define DMK_INT				DMK_INT_32

#define DMK_FLOAT_32		::DMK::F32
#define DMK_DOUBLE_64		::DMK::D64
#define DMK_FLOAT			DMK_FLOAT_32
#define DMK_DOUBLE			DMK_DOUBLE_64

#define DMK_VOID_PTR		::DMK::VPTR
#define DMK_CHAR_PTR		::DMK::CPTR
#define DMK_CONST_CHAR_PTR	::DMK::CCPTR

#endif // !_DMK_DATA_TYPES_H
