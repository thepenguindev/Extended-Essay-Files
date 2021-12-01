#include <iostream>
#include <string>
#include <sstream>
#include <array>

// Object Oriented Programming Examples

class Student
{
public:
	Student(std::string p_FirstName, std::string p_LastName, std::array<std::string, 6> p_Classes)
		: FirstName(p_FirstName), LastName(p_LastName), Classes(p_Classes) { }
	~Student() = default;
public:
	std::string GetName() {
		std::stringstream ss;
		ss << FirstName << " " << LastName;
		return ss.str();
	}

	std::array<std::string, 6> GetClasses() {
		return Classes;
	}
private:
	std::string FirstName;
	std::string LastName;
	std::array<std::string, 6> Classes;
};

class JohnDoe : public Student
{
public:
	JohnDoe()
		: Student("John", "Doe", { "Physics", "Math", "English", "History", "Programming", "Band" }) { }
	~JohnDoe() = default;
private:
	Student BestFriend = Student("Cody", "Heinz", { "Physics", "English", "Math", "History", "Programming", "Robotics" });
};

//int main()
//{
//	Student johnDoe = JohnDoe();
//	std::string fullName = johnDoe.GetName();
//	std::array<std::string, 6> classes = johnDoe.GetClasses();
//}