

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


const double STATE_SALES_TAX = .04;
const double COUNTY_SALES_TAX = .02;


int main()
{
	string month;
	string year;
	double totalAmount;
	double totalIncome;
	double productSales;
	double stateTaxAmount;
	double countyTaxAmount;

	// Get Info
	//cout << "What month is this for?";
	//cin >> month;
	//cout << "What year is this for?";
	//cin >> year;	 
	cout << "What was the total amount collected for this period?";
	cin >> totalAmount;

	//Calculate
	countyTaxAmount = totalAmount * COUNTY_SALES_TAX;
	stateTaxAmount = totalAmount * STATE_SALES_TAX;
	productSales = totalAmount / 1.06;
	//display results
	cout << "Month:" << month << endl;
	cout << "________________" << endl;
	cout << setw(20) << left << "Total Collected:" << setprecision(2) << fixed << setw(20) << "$" << right << totalAmount << endl;
	cout << setw(20) << left << "County Sales Tax:" << setprecision(2) << fixed << setw(20) << "$" << right << countyTaxAmount << endl;
	cout << setw(20) << left << "State Sales Tax:" << setprecision(2) << fixed << setw(20) << "$" << right << stateTaxAmount << endl;
	cout << setw(20) << left << "Total Sales:" << setprecision(2) << fixed << setw(20) << "$" << right << countyTaxAmount + stateTaxAmount << endl;


	
	

















}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
