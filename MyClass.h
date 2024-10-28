#pragma once

template <typename Type1, typename Type2>

class MyClass
{
public:

	MyClass(Type1 a, Type2 b) : a_(a), b_(b){}

	Type1 Min();

private:

	Type1 a_;
	Type2 b_;
};

template<typename Type1, typename Type2>
inline Type1 MyClass<Type1, Type2>::Min()
{
	if (a_ < b_) {
		return static_cast<Type1>(a_);
	}

	return static_cast<Type1>(b_);
}
