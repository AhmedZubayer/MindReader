/*              THIS PROGRAM WILL READ YOUR MIND!!!

Download the executable file: bit.do/mind-reader

Have fun!

#COMPUTERS_ARE_GOING_TO_RULE_THE_UNIVERSE

Best wishes to you from Zubayer from BANGLADESH!
Checkout: https://github.com/AhmedZubayer
*/

#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;

int func1();

int main()
{
    func1();
}

func1()
{
    cout<<"\n\n\t\tThink of a number in your mind but don't tell me. Then press enter.\n\n";
    getch();
    cout<<"\t\tMultiply it by 2. Then press enter.\n\n";
    getch();
    int random;
    srand(time(0));
    random = rand()%100 + 1;
    cout<<"\t\tAdd "<< random <<" and press enter.\n\n";
    getch();
    cout<<"\t\tDivide what you get by 2 and then press enter.\n\n";
    getch();
    cout<<"\t\tSubtract the number that you chose at the beginning from it and press enter.\n\n";
    getch();
    cout<<"\t\tYour now have --> "<< (float) random / 2 <<" <--\n\n\t\tWasn't it amazing?!!\n\n";
    cout<<"\t\tA: WOW! :O How did you read my mind??!!! \n\t\tB: I got a different answer. :| \n\t\tC: I WANT TO TRY IT AGAIN!!!! :D\n\t\tD: Close the program\n\n\t\tI am choosing: ";
    char response;
    cin>>response;
    switch (response)
        {
        case 'A':
            cout<<"\n\n\n\t\tRemember once you said that computers are stupid?? HA HA! Now I have proved that we, COMPUTER-KIND [Like your man-kind], are more intelligent \n\t\tthan you.... We can read others' mind, but you guys CAN'T!! WE ARE GOING TO RULE THE UNIVERSE SOON! Now PEACE.....!";
            cout<<"\n\n\t\tA: I want to try again \n\t\tB: Close the program\n\n\t\tI am choosing: ";
            char response2;
            cin>> response2;
            switch (response2)
                {
                case 'A':
                  system("CLS");
                  func1();
                  break;
                case 'a':
                  system("CLS");
                  func1();
                  break;
                default:
                    cout<<"\n\n\n";
                    return 0;
                    break;
                }
            break;

        case 'a':
            cout<<"\n\n\n\t\tRemember once you said that computers are stupid?? HA HA! Now I have proved that we, COMPUTER-KIND [Like your man-kind], are more intelligent \n\t\tthan you.... We can read others' mind, but you guys CAN'T!! WE ARE GOING TO RULE THE UNIVERSE SOON! Now PEACE.....!";
            cout<<"\n\n\t\tA: I want to try again \n\t\tB: Close the program\n\n\t\tI am choosing: ";
            char response3;
            cin>> response3;
            switch (response3)
                {
                case 'A':
                  system("CLS");
                  func1();
                  break;
                case 'a':
                  system("CLS");
                  func1();
                  break;
                default:
                    cout<<"\n\n\n";
                    return 0;
                    break;
                }
            break;

        case 'B':
            cout<<"\n\n\t\tYou have made mistake in your calculation.... I AM 1000% SURE!!! You can't even do basic arithmetic operations!! LOL!! XD";
            cout<<"\n\n\t\tA: Sorry! My mistake :'( Let me try again....\n\t\tB: I apologize for that and want to close the program\n\n\t\tI want to: ";
            char response4;
            cin>> response4;
            switch (response4)
                {
                case 'A':
                  system("CLS");
                  func1();
                  break;
                case 'a':
                  system("CLS");
                  func1();
                  break;
                default:
                    cout<<"\n\n\n";
                    return 0;
                    break;
                }
            break;

        case 'b':
            cout<<"\n\n\t\tYou have made mistake in your calculation.... I AM 1000% SURE!!! You can't even do basic arithmetic operations!! LOL!! XD";
            cout<<"\n\n\t\tA: Sorry! My mistake :'( Let me try again....\n\t\tB: I apologize for that and want to close the program\n\n\t\tI want to: ";
            char response5;
            cin>> response5;
            switch (response5)
                {
                case 'A':
                  system("CLS");
                  func1();
                  break;
                case 'a':
                  system("CLS");
                  func1();
                  break;
                default:
                    cout<<"\n\n\n";
                    return 0;
                    break;
                }
            break;


        case 'C':
            system("CLS");
                  func1();
            break;

        case 'c':
            system("CLS");
                  func1();
            break;

        default:
            cout<<"\n\n\n";
            return 0;

        }


}































