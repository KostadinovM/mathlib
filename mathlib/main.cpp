#include <iostream>
#include "vector.h"
#include "matrix.h"
using namespace math;

int main()
{
	const float x = 2.0f;
	const float y = 4.0f;
	const float z = 5.0f;
	const float w = 1.0f;

	
	const std::initializer_list<float> list;

	vec2 vector2d(x, y);
	vec3 vector3d(x, y, z);
	vec4 vector4d(x, y, z, w);
	vector<5, float> vector5d(1);
	//vector<6, float> vector6d{ 1,2,3,4,5 };

	std::cout << "Vec2d: x: " << vector2d.x << "/ y:" << vector2d.y << std::endl;
	std::cout << "Vec3d: x: " << vector3d.x << "/ y:" << vector3d.y << "/z:" << vector3d.z << std::endl;
	std::cout << "Vec4d: x: " << vector4d.x << "/ y:" << vector4d.y << "/z:" << vector4d.z << "/w:" << vector4d.w << std::endl;
	std::cout << "Vec5d: x:" << vector5d[3] << std::endl;

	vec2 vec(1, 4);
	vec2 resvec = vec + vector2d;
	std::cout << "add: x: " << resvec.x << "/ y:" << resvec.y << std::endl;
	
	mat2 mat2d(x);
	mat3 mat3d(y);
	mat4 mat4d(z);
	matrix<5,5,float> mat(x);

	while (1);
}