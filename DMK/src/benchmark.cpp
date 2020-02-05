#include "benchmark.h"
#include "console.h"

namespace DMK {
	Timer::Timer() {
		DMK_CONSOLE_PRINTLN("Timer initiated!");

		startTimePoint = std::chrono::high_resolution_clock::now();
	}

	Timer::Timer(FastString file, UI32 line) {
		DMK_CONSOLE_PRINTLN("Timer initiated @ " + file.str() + ":" + std::to_string(line));

		startTimePoint = std::chrono::high_resolution_clock::now();
	}

	Timer::Timer(FastString file, UI32 line, FastString comments) {
		DMK_CONSOLE_PRINTLN("Timer initiated @ "
			+ file.str()
			+ ":"
			+ std::to_string(line)
			+ " --> "
			+ comments.str());

		startTimePoint = std::chrono::high_resolution_clock::now();
	}

	void Timer::refresh() {
		time = std::chrono::high_resolution_clock::now();

		auto start = std::chrono::time_point_cast<std::chrono::microseconds>
			(time).time_since_epoch().count();
		auto old = std::chrono::time_point_cast<std::chrono::microseconds>
			(oldTime).time_since_epoch().count();

		auto duration = start - old;
		auto milli = duration * 0.001;

		DMK_CONSOLE_PRINTLN("Timer ended. Results: "
			+ std::to_string(duration)
			+ " us ("
			+ std::to_string(milli)
			+ " ms)");

		oldTime = time;
	}

	Timer::~Timer() {
		auto endTimePoint = std::chrono::high_resolution_clock::now();

		auto start = std::chrono::time_point_cast<std::chrono::microseconds>
			(startTimePoint).time_since_epoch().count();
		auto stop = std::chrono::time_point_cast<std::chrono::microseconds>
			(endTimePoint).time_since_epoch().count();

		auto duration = stop - start;
		double microSeconds = duration * .001;

		DMK_CONSOLE_PRINTLN("Timer ended. Results: "
			+ std::to_string(duration)
			+ " us ("
			+ std::to_string(microSeconds)
			+ " ms)");
	}


	void FPS::refresh() {
		time = std::chrono::high_resolution_clock::now();

		auto start = std::chrono::time_point_cast<std::chrono::microseconds>
			(time).time_since_epoch().count();
		auto old = std::chrono::time_point_cast<std::chrono::microseconds>
			(oldTime).time_since_epoch().count();

		DMK_CONSOLE_PRINTLN("FPS: " + std::to_string((1000 / ((start - old) * .001))));

		oldTime = time;
	}
}