#pragma once

template <typename Type>
Type Min(Type a, Type b) {
	if (a < b) {
		return static_cast<Type>(a);
	}
	
	return static_cast<Type>(b);
	
}

template <>
char Min(char a, char b) {
	printf("数字以外は代入できません");

	return ' ';
}