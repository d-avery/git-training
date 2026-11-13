#include <iostream>
#include <vector>
//#include "binarySearch.hpp"
using namespace std;
int main() {
	cout<<"Add meg az elemek szamat:";
	int n;
	cin>>n;
	vector<double> nums(n);
	cout<<'\n'<<"Adj meg "<<n<<" darab valos szamot:";
	for(int i=0;i<n;i++)
	{
		double temp;
		cin>>temp;
		nums[i] = temp;
	}

	cout<<'\n'<<"Add meg a keresett erteket:";
	double target;
	cin>>target;

	double answer = upperBound(nums,target);
	cout<<'\n'<<target<<" upper boundja:" << answer;
	return 0;
}
