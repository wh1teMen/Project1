#include<iostream>
#include<vector>
#include <exception>
//using namespace std;
//Обпаботка исключений
int f00(int a) {
	if (a == 0) {
		throw std::exception("divided by zero.coz a<0");
		//throw std::range_error("");
	}
	int result{123/a};
	return result;
}
int f01(int a, int b) {
	if (a < b) {
		const char *str="lower argument";
		throw str;
	}
	int result{a-b};
	return result;
}
void Bar()noexcept {
	
}




int main() {
	system("chcp 1251>nul");
	
	try {
		f00(0); 
		f01(1,4); 
	}
	/*catch (std::range_error& ex) {
		std::cerr << ex.what();
	}*/
	catch (std::exception &ex) {
		std::cerr << ex.what();
		
	}
	
	catch (const char* ex) {
		std::cerr << ex << "exeption";
	}

	catch (...) {std::cerr <<"indefined exeption";}









	system("pause>nul");
	return 0;
}