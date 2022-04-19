// CPP Program to implement Deque in STL
#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	deque<int> gquiz;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);
	cout << "The deque gquiz is : ";
	showdq(gquiz);


	return 0;
}
