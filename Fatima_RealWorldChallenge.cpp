#include<iostream>
using namespace std;
int main(){

string welcome;
cout<<"Welcome to the Pizza Party Calculator!"<<welcome<<endl;
cout<<"Here we calculate the total spending required to host a Pizza Party."<<welcome<<endl;
cout<<"Let's start with some questions first!"<<welcome<<endl;

int number_of_people;
cout<<"How many people are attending?"<<endl;
cin>>number_of_people;

int number_of_pizza;
cout<<"How many pizzas?"<<endl;
cin>>number_of_pizza;

float price_of_each_pizza;
cout<<"What is the price of each pizza?"<<endl;
cin>>price_of_each_pizza;

int number_of_drinks;
cout<<"How many drinks?"<<endl;
cin>>number_of_drinks;

float price_of_each_drink;
cout<<"What is the price of each drink?"<<endl;
cin>>price_of_each_drink;

float party_budget;
cout<<"What is your budget for the party?"<<endl;
cin>>party_budget;

float total_pizza_cost=price_of_each_pizza*number_of_pizza;
float total_drink_cost=price_of_each_drink*number_of_drinks;
float final_party_cost=total_pizza_cost+total_drink_cost;
float cost_per_person=final_party_cost/number_of_people;
float saved=party_budget-final_party_cost;

string result;
cout<<"Here is the result!"<<result<<endl;

cout<<"Number of people: "<<number_of_people<<endl;
cout<<"Number of pizzas: "<<number_of_pizza<<endl;
cout<<"Price of each pizza: "<<price_of_each_pizza<<endl;
cout<<"Number of drinks: "<<number_of_drinks<<endl;
cout<<"Price of each drink: "<<price_of_each_drink<<endl;
cout<<"Total Pizza Cost: "<<total_pizza_cost<<endl;
cout<<"Total Drinks Cost: "<<total_drink_cost<<endl;
cout<<"Final Party Cost: "<<final_party_cost<<endl;
cout<<"Cost Per Person: "<<cost_per_person<<endl;
cout<<"Saved: "<<saved<<endl;

string have_fun;
cout<<"Now have fun at your partyyy!"<<have_fun<<endl;

return 0;
}