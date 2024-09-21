//#include <iostream>
//using namespace std;
//
//int require[4] = { 0,0,0,0 };
//int current[4] = { 0,0,0,0 };
//
//void Add(char a)
//{
//	switch (a)
//	{
//	case 'A':
//	{
//		current[0]++;
//	}
//	break;
//	case 'C':
//	{
//		current[1]++;
//	}
//	break;
//	case 'G':
//	{
//		current[2]++;
//	}
//	break;
//	case 'T':
//	{
//		current[3]++;
//	}
//	break;
//
//	default:
//		break;
//	}
//}
//
//void Remove(char a)
//{
//	switch (a)
//	{
//	case 'A':
//	{
//		current[0]--;
//	}
//	break;
//	case 'C':
//	{
//		current[1]--;
//	}
//	break;
//	case 'G':
//	{
//		current[2]--;
//	}
//	break;
//	case 'T':
//	{
//		current[3]--;
//	}
//	break;
//
//	default:
//		break;
//	}
//}
//
//bool Check()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (require[i] > current[i])
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int dnaRange = 0;
//	int range = 0;
//	int result = 0;
//
//	cin >> dnaRange >> range;
//
//	string dna;
//
//	cin >> dna;
//
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> require[i];
//	}
//
//	for (int i = 0; i < range; i++)
//	{
//		Add(dna[i]);
//	}
//
//	if (Check())
//	{
//		result++;
//	}
//
//	for (int i = range; i < dna.size(); i++)
//	{
//		int first = i - range;
//
//		Remove(dna[first]);
//
//		Add(dna[i]);
//
//		if (Check())
//		{
//			result++;
//		}
//	}
//	cout << result;
//}