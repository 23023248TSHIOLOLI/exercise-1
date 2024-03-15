#include <iostream>

using namespace std;

int main(){
    double total_cost_merchandise,salary_employyes, yearly_rent,estimated_electricity_cost;
    cout<<"enter total cost merchandise";
    cin>>total_cost_merchandise;
    cout<<" enter salary of employees including salary";
    cin>> salary_employyes;
    cout<<"enter your yearly rent";
    cin>>yearly_rent;
    cout<<"enter your estimated electricity cost";
    cin>>estimated_electricity_cost;


    double net_profit,total_expenses,new_net_profit,mark_up;
    total_expenses = total_cost_merchandise + salary_employyes +yearly_rent+estimated_electricity_cost;
    net_profit = total_cost_merchandise*0.1;
    new_net_profit = net_profit/0.85;
    mark_up = (new_net_profit+total_expenses)/total_cost_merchandise;
    cout<<"Merchandise should be markup"<< mark_up<<endl;

    return 0;
}
