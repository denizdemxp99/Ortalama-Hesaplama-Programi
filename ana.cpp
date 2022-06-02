#include <iostream>
using namespace std;
int main()
{
    int not1,not2;
    
    cout << ("1.Donem Notunu Giriniz:");
    cin>>not1;

    cout << ("2.Donem Notunu Giriniz:");
    cin >> not2;
    int full = not1 + not2;
    int total = full / 2;
    if (total > 50)
    {
		cout << "sinıfi gectin ";
	}
	else{
		cout << "kaldin ";
	}
    return 0;
}

// Düzenleme By Prisma B : https://github.com/prismaB
