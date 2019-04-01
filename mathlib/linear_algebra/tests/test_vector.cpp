#include "../vector.h"

bool ConstructVector()
{
	math::vector<3, float> vec01();
	math::vector<3, float> vec02(1.0f);
	math::vector<3, float> vec03({ 1.0f, 2.0f, 3.0f });
	math::vector<3, float> vec04({ 1.0f, 2.0f });
	math::vector<3, float> vec05(1.0f, 2.0f, 3.0f);
	math::vector<2, float> vec06(4.0f, 5.0f);
	math::vector<3, float> vec07(vec06, 0.0f);
	math::vector<3, float> vec08(vec07.xy, 0.0f);
	math::vector<4, float> vec09(1.0f, 0.0f, 1.0f, 1.0f);

	return true;

}