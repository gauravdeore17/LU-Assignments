#include <iostream>
using namespace std;

int main(){

    double depreciation , purchase_price , salvage_value , year_of_service;

cout<<"Enter the value of the Itom Price :";
cin>>purchase_price;

cout<<"Enter the salvage Value :";
cin>>salvage_value;

cout<<"Enter the value of Year of the service :";
cin>>year_of_service;

depreciation = (purchase_price - salvage_value)/year_of_service;

cout<<"Your Output for the Depreciation:"<<depreciation;

    return 0;
}