#include <iostream>
#include"MyArray.hpp"
#include<string>
using namespace std;

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}

void test01() {
	MyArray <int>arr1(5);

	for (int i = 0; i < 5; i++) {
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为" << endl;

	printIntArray(arr1);

	cout << "arr1的容量为" << arr1.getCapacity() << endl;
	cout << "arr1的大小为" << arr1.getSize() << endl;;

	MyArray <int>arr2(arr1);

	cout << "arr2的打印输出为" << endl;

	printIntArray(arr2);

	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后" << endl;
	cout << "arr2的容量为" << arr2.getCapacity() << endl;
	cout << "arr2的大小为" << arr2.getSize() << endl;;

	//MyArray <int>arr3(100);
	//arr1[3];
	//arr3 = arr1;
}

//测试自定义数据类型
class Person
{
public:	
	Person()  = default;
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};

void printPersonArray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout <<"姓名：" << arr[i].m_Name << " 年龄： "<<arr[i].m_Age << endl;
	}
}

void test02() {
	MyArray <Person> arr1(10);
	Person p1{ "张三",18 };
	Person p2{ "李四",25 };
	Person p3{ "王五",21 };
	Person p4{ "赵六",33 };
	Person p5{ "孙七",16 };

	//将数据插入到数组中
	arr1.Push_Back(p1);
	arr1.Push_Back(p2);
	arr1.Push_Back(p3);
	arr1.Push_Back(p4);
	arr1.Push_Back(p5);

	//打印数组
	printPersonArray(arr1);

	//输出容量
	cout << "arr1的容量为" << arr1.getCapacity() << endl;

	//输出大小
	cout << "arr1的大小为" << arr1.getSize() << endl;;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}
