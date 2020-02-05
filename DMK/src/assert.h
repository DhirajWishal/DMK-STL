#pragma once
#ifndef _DMK_ASSERT_H
#define _DMK_ASSERT_H

#include "console.h"

#define DMK_ASSERT(x)	if(!(x)) {																	\
						DMK_CONSOLE_PRINTLN("Assertion Error! @ " + __FILE__ + ":" + __LINE__);	\
								__debugbreak();													\
					}



#define DMK_BREAKPOINT	__debugbreak()

#endif // !_DMK_ASSERT_H
