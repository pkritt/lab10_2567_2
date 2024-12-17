#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
    string num;
    double sum=0;
    double summ=0;
    int i=0;
	source.open("score.txt");
	while (getline(source,num))
	{
	    sum=sum + stod(num);
	    summ=summ+(stod(num)*stod(num));
	    i++;
	    
	}
	
    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/i<<endl;
    
    
    cout << "Standard deviation = "<<sqrt((summ/i)-((sum/i)*(sum/i)));
}
