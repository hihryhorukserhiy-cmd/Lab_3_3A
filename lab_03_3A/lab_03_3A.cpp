#include <iostream>
#include <Windows.h>
#include "Vector3Dpublic.h"
#include "Vector3Dprivate.h"

using namespace std;

#pragma pack(push, 1)
class Vector3DPacked {
	double x;
	double y;
	double z;
};
#pragma pack(pop)



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "--- Тестування відкритого нащадка (Vector3Dpublic) ---\n";
	Vector3Dpublic pub1(1.0, 2.0, 2.0);
	Vector3Dpublic pub2(3.0, 4.0, 0.0);

	// Перевірка базового виводу (функція успадкована)
	cout << "pub1: " << pub1 << ", Довжина: " << pub1.Length() << "\n";

	// Тестування операторів
	Vector3Dpublic pubSum = pub1 + pub2;
	cout << "pub1 + pub2 = " << pubSum << "\n";
	cout << "pub1 + 2.0 = " << pub1 * 2.0 << "\n";
	cout << "++pub1 = " << ++pub1 << "\n\n";

	cout << "--- Тестування закритого нащадка (Vector3Dprivate) ---\n";
	Vector3Dprivate priv1(1.0, 1.0, 1.0);
	Vector3Dprivate priv2(priv1);

	// Перевірка власного виводу 
	cout << "priv2: " << priv2 << "\n";
	cout << "priv1 * priv2 (скалярний добуток) = " << priv1 * priv2 << "\n\n";
	
	cout << "--- Масив об'єктів ---\n";
	int n = 3;
	Vector3Dpublic* arr = new Vector3Dpublic[n]
	{
		Vector3Dpublic(1.0, 1.0, 1.0),
		Vector3Dpublic(2.0, 3.0, 6.0),
		Vector3Dpublic(0.0, 4.0, 3.0)
	};

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << "(довжина = " << arr[i].Length() << ")\n";
	}
	delete[] arr;
	cout << "\n";

	cout << "--- Розмірии класів в пам'яті ---\n";
	cout << "Розмір Vector3D:                  " << sizeof(Vector3D) << " байт\n";
	cout << "Розмір Vector3Dpublic:            " << sizeof(Vector3Dpublic) << " байт\n";
	cout << "Розмір Vector3Dprivate:           " << sizeof(Vector3Dprivate) << " байт\n";
	cout << "Розмір Vector3DPacked (pack 1):   " << sizeof(Vector3DPacked) << " байт\n";
	cout << "-----------------------------------\n";


	return 0;
}