#pragma once

#include <vector>
#include <cmath>
#include <string>
#include <utility>
#include <sstream>
#include <unordered_map>
#include <list>
#include <array>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <bitset>
#include <functional>
#include <fstream>

static auto start = std::chrono::high_resolution_clock::now();
static auto stop = std::chrono::high_resolution_clock::now();

static void log_start()
{
	std::cout << "Function Exectution Start." << std::endl;
	start = std::chrono::high_resolution_clock::now();
}

static void log_end()
{
	std::cout << "Function Execution End.";
	stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	std::cout << " Function Execution Time: " << duration.count() << " microseconds" << std::endl;
}