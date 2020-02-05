#pragma once
#ifndef _DMK_BENCHMARK_H
#define _DMK_BENCHMARK_H

#include <chrono>
#include "fastString.h"
#include "dataTypes.h"

namespace DMK {
	class Timer {
	public:
		Timer();
		Timer(FastString file, UI32 line);
		Timer(FastString file, UI32 line, FastString comments);
		~Timer();

		void refresh();

	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> startTimePoint;

		std::chrono::time_point<std::chrono::high_resolution_clock> time;
		std::chrono::time_point<std::chrono::high_resolution_clock> oldTime;
	};

	class FPS {
	public:
		void refresh();

	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> time;
		std::chrono::time_point<std::chrono::high_resolution_clock> oldTime;
	};
}

#endif // !_DMK_BENCHMARK_H
