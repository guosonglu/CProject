#include <stdio.h>
/// <summary>
/// 
/// </summary>
void main() {
	float weight; //体重
	float value;  //相等重量的白金价值
	printf("请输入你的体重：");
	scanf_s("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("这么重的白金价值%.2f", value);
}