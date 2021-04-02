#include<iostream>
#include<conio.h>
#include<math.h>    //for power function
#include<iomanip>  //for setw function
void card();
using namespace std;
int main()
{
 cout<<"\n\n\t\t\t\t\t\t\tWELCOME !!!\n\n";
 cout<<"\t\t\t\t\t\   Let Think Any Number Between 1 To 63 \n\n\t\t\t\t\t\t Press Any Key When Ready";
 getch();
cout<<"\n\n";
 card();
return 0;
}
void card()
{

    int num=0,a,counter=0,guessed_no=0,ch=0;
    for(int i=0;i<=5;i++){  // to switch card
        num=pow(2,i);  //for number to appear in specific order
        a=num;
        counter=0;
      cout<<"\n\n\t\t\t\t\t ---------------------------------------\n";
    cout<<"\t\t\t\t\t| ";
    for(int j=1;a<=63;j++){   //for total no. in each card

        for(int k=1;k<=num;k++){
        cout<<setw(2)<<a<<" | ";
    a++;
    counter++;
     if(counter==8){  //to change line
        cout<<"\n";
        cout<<"\t\t\t\t\t ---------------------------------------\n\t\t\t\t\t| ";
        counter=0;
     }
    }
    a+=num;

    }

    cout<<"\n\t\t\t\t\tpress 1 if your no. in the card otherwise 0: ";
    cin>>ch;

    if(ch==1){
        guessed_no+=num;  //calculating the number
    }
    }
cout<<"\n\n\t\t\t\t\t\t--------------------------------";
cout<<"\n\t\t\t\t\t\t| the number your think is: "<<guessed_no<<" |\n";
cout<<"\t\t\t\t\t\t--------------------------------\n\n";
}
