#include <utility>
#include <iostream>
#include <string>
#include <unordered_map> 

int main() {
	std::unordered_map<std::string, int> v = { {"red", 1}, {"green", 2}};

	auto itr = v.begin();	
	auto [uk, uv] = itr;
	std::cout << uk << " " << uv << std::endl;
}

