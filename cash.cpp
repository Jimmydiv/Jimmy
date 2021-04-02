#include <iostream>

using namespace std ; 

int main () {
// coins to change 
int CHANGE25= 25 ; 
int CHANGE10= 10 ;
int CHANGE5= 5 ;
int CHANGE1= 1 ;
int coins= 0 ; 
int money = 0;

// let user add input of change from 1 cent to 99 cent 
do {
    cout << "Enter change from 1 to 99 cents : ";
    cin >> money ; 
} while (money<1 || money>99); 


while (money >= CHANGE25 )
{
    money = money - CHANGE25 ; 
    coins++ ; 
}

while (money >= CHANGE10 )
{
    money = money - CHANGE10 ; 
    coins++ ; 
}

while (money >= CHANGE5 )
{
    money = money - CHANGE5 ; 
    coins++ ; 
}

while (money >= CHANGE1 )
{
    money = money - CHANGE1 ; 
    coins++ ; 
}


cout << "Your Coins = "  ;
cout << coins ; 







    return 0; 
}
