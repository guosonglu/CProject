#include <iostream>

int main() {
	//std:���ƿռ䣬�൱���ļ����ļ�����
	//:: �����������
	//std::endl ����
	std::cout << "Hello World!"<<std::endl;
	int v1;
	v1 = 12;
	std::cout << v1 << std::endl;
	//����һ��������ӡ
	std::cout << "������һ����:";
	std::cin >> v1;
	std::cout << v1 << std::endl;
	//��������֮��
	std::cout << "��������������" << std::endl;
	int v2, v3;
	std::cin >>v2>>v3;
	std::cout << v2 << "��" << v3 << "����" << v2 + v3 << std::endl;
	return 0;  //��������0����������������ֵ
}