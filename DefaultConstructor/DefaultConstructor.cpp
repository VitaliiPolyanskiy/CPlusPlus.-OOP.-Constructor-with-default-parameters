#include <iostream>
using namespace std;

class Date
{

private: // ���� ������
	int day;
	int month;
	int year;
public:
	//Date()
	//{ 
	//	// ����������� ������ �� ���������
	//	day = 31;
	//	month = 12;
	//	year = 2015;
	//}

	Date(int dd = 31, int mm = 12, int yy = 2015)
	{
		// ����������� ������ �� ���������
		day = dd;	
		month = mm;	
		year = yy;	
	}

	void Show()
	{
		cout << day << "." << month << "." <<  year<< endl;
	}

	// ��������� ������ ������ Date
};

int main()
{
	Date d1; /* ����� ������������ � ����������� �� ��������� Date(int dd = 31, int mm = 12, int yy = 2015)*/
	d1.Show();
	
	Date d2(19, 11, 2015);
	d2.Show();
	
	Date d3(2, 10);
	d3.Show();

	Date d4(1);
	d4.Show();

	return 0;
}
