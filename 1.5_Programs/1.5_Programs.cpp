// Write a program that outputs the inflation rates for two successive years and whether the inflation trend is increasing or decreasing.
// Ask the user to input the current price of an item and its price from one year and two years ago. 
// To calculate the inflation rate for a year, subtract the price of the item for that year from the price of the item one year ago and
// then divide the result by the price a year ago. Your program must contain the following functions: 
//    A function which gets the input(returning all three prices).
//    A function to calculate the results(takes the three prices as input and returns the two inflation rates).
//    A function to output the results.
// Use appropriate parameters to pass the information into and out of the three functions.Do not use any global variables.

#include <iostream>
#include <iomanip>


using namespace std;

float inputGet(float& price1, float& price2,float& price3);
float inflateRateGet(float& price1, float& price2,float& price3,float &rate1,float &rate2);
void print(float& rate1, float& rate2);


int main()
{
    float price1;
    float price2;
    float price3;
    float rate1;
    float rate2;

    inputGet(price1, price2, price3);
    inflateRateGet(price1, price2, price3,rate1,rate2);
    print(rate1, rate2);
}

float inputGet(float& price1, float& price2, float& price3)
{
    cout << "how much does the item cost now?" << endl;
    cin >> price1;
    cout << "how much did it cost 1 year ago?" << endl;
    cin >> price2;
    cout << "how much did it cost 2 years ago?" << endl;
    cin >> price3;

    return price1;
}

float inflateRateGet(float& price1, float& price2, float& price3,float &rate1, float &rate2)
{
    rate1 = (price1 - price2) / price1;
    rate2 = (price2 - price3) / price2;
    return rate1;
}

void print(float& rate1, float& rate2)
{
    cout << setprecision(4) << fixed << "the inflation rate for this year is " << rate1 << "%" << endl;
    cout << setprecision(4) << fixed << "the inflation rate for last year is " << rate2 << "%" << endl;

    if (rate1 > rate2)
    {
        cout << "the inflation rate is increasing." << endl;
    }
    else if (rate1 < rate2)
    {
        cout << "the inflation rate is decreasing." << endl;
    }
    else
    {
        cout << "the inflation rate is stable" << endl;
    }
}