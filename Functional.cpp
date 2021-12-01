#include <string>
#include <iostream>
#include <functional>

int add(int a, int b) {
	return a + b;
}

std::function<bool(int)> button_event = [](int p_repeat) {
	return p_repeat > 0 ? true : false;
};

void on_button_event(std::function<bool(int)> p_event) {
	p_event(0);
}

int main()
{
	const std::string immutable_data = "hello!";
	// immutable_data = "oh no!"; // Throws Error
	const int a = 3; const int b = 5;
	std::cout << add(a, b) << std::endl;

	on_button_event(button_event);

	std::cin.get();

	return 0;
}