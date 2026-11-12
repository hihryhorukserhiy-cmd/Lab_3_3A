#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_03_3A/Vector3D.h"
#include "../lab_03_3A/Vector3D.cpp"
#include "../lab_03_3A/Vector3Dpublic.h"
#include "../lab_03_3A/Vector3Dpublic.cpp"
#include "../lab_03_3A/Vector3Dprivate.h"
#include "../lab_03_3A/Vector3Dprivate.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D v(1.0, 2.0, 3.0);
			Assert::AreEqual(1.0, v.GetX());
			Assert::AreEqual(2.0, v.GetY());
			Assert::AreEqual(3.0, v.GetZ());
		}
	};
}
