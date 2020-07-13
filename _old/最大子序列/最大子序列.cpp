// 最大子序列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
//#define N 10000
using namespace std;

//int m[N]= { 0 };
//int A[N] = { 0 };



int main()
{
	int T = 0, n = 0;
	int max = 0;

	cin >> T;
	while (T--)
	{
		cin >> n;
		vector<int> M(n, 1);
		//M用来记录从当前位置开始，完美子串的长度，初始值为1表示每个字符自己都是完美子串，长度为1
		vector<int> A(n);

		for (auto it = A.begin(); it != A.end(); ++it)
			//C++ primer中建议使用 ++it 而不是 it++，以减少内存开支
			cin >> *it;
		//因为n未知，所以使用动态扩充方式，以最大化利用空间

		int k = 0;			//当前完美子串起点，从k到i为完美子串，随循环变化。

		for (int i = 0; i < n; i++)
		{
			bool flag = false;
			int sum = 0;

			for (int j = k; j <= i; j++)
				sum += A[j];

			if (i + 1 != n && sum <= A[i + 1])
				//这里判断一下是否到了最后一个数字，以防A[i+1]越界
				flag = true;
			else
			{
				flag = false;
				k = i;
			}

			if (flag == true)
			{
				//t为临时量，用来遍历当前子串，用来更新M中每一个数字A[t]对应的从自身开始的最大子串长度
				for (int t = k; t <= i; t++)
					M[t]++;
			}
		}

		/*for (int i = 0; i < n; i++)
			if(M[i]>max)
				max = M[i];*/

				//使用迭代器重新实现寻找最大值max
		for (auto it = M.begin(); it != M.end(); ++it)
			if (*it > max)
				max = *it;
	}
	cout << max;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
