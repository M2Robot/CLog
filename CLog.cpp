/* Login , Registration program.

*/

#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main()
{
/* checking for <stdlib.h> it will be error if doesnt find it. */
	if (system(NULL)){

        int choice;

cout << "  ______  __        ______    _______ "<<endl;
cout << " /      ||  |      /  __  \\  /  _____|"<<endl;
cout << "|  ,----'|  |     |  |  |  ||  |  __  "<<endl;
cout << "|  |     |  |     |  |  |  ||  | |_ | "<<endl;
cout << "|  `----.|  `----.|  `--'  ||  |__| | "<<endl;
cout << " \\______||_______| \\______/  \\______| "<<endl;
cout << ""<<endl;

cout << "} --------{+}  Coded by MrRobot  {+}-------- {"<<endl;
cout<<" "<<endl;
/* Main menu*/
        cout<<"[01]  LOGIN"<<endl;
        cout<<"[02]  REGISTER"<<endl;
        cout<<"[03]  FORGOT"<<endl;
        cout<<"[04]  CLEAR"<<endl;
        cout<<"[99]  EXIT"<<endl;
        cout<<"\nEnter your choice ~# ";
        cin>>choice;
        cout<<endl;
        if(choice == 1 || choice == 01)
            {
        int count;

        string y[4] = {"user","pass","u","p"}; // <string.h>
        cout<<"please input the following details below : "<<endl;
        cout<<"\n[ USERNAME ] : ";
        cin>>y[0];
        cout<<"\n[ PASSWORD ] : ";
        cin>>y[1];

        ifstream input("AccountINFO.txt"); // <fstream>
        while(input>>y[2]>>y[3])
        {
                if(y[2]==y[0] && y[3]==y[1])

                {
                        count=1;
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHeyy "<<y[0]<<"\nLOGIN SUCESS\nThanks for logging in\n";
                cout<<"Press any key to continue . . .";
                cin.get(); // getting user and pass
                cin.get();
                main();
        }
        else
        {
                cout<<"\nLOGIN FAILED , Please check your [ username ] and [ password ] "<<endl;
                system("PAUSE");
                main();
        }
    }
        else if(choice == 2 || choice == 02){

        string x[4] = {"reguser","regpass","ru","rp"};
        cout<<"Enter the [ username ] : ";
        cin>>x[0];
        cout<<"Enter the [ password ] : ";
        cin>>x[1];

        ofstream reg("AccountINFO.txt",ios::app); // <istream> for login multiple acc

        reg<<x[0]<<' '<<x[1]<<endl;
        cout<<"\nRegistration Sucessful\n";
        main();

        }
        else if(choice == 3 || choice == 03){

        int ch;
        cout<<"Forgotten ur account?\n";
        cout<<"\n[01] Find ur account by [ username ]"<<endl;
        cout<<"[02] Find ur account by [ password ]"<<endl;
        cout<<"[00] Back"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string z[3] = {"searchuser","su","sp"};
                        cout<<"\nEnter your remembered [ username ] :";
                        cin>>z[0];

                        ifstream searchu("AccountINFO.txt");
                        while(searchu>>z[1]>>z[2])
                        {
                                if(z[1]==z[0])
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\Your account is found ~ Your [ password ] is : "<<z[2];
                                cout<<"\nPress any key to continue . . .";
                                cin.get();
                                cin.get();
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your [ userID ] is not found in Account INFO\n";
                                cout<<"\nMake sure you already registered ur acc. \n";
                                cout<<"\nPress any key to continue . . .";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string a[3] = {"searchpass","su2","sp2"};
                        cout<<"\nEnter the remembered [ password ] :";
                        cin>>a[0];

                        ifstream searchp("AccountINFO.txt");
                        while(searchp>>a[1]>>a[2])
                        {
                                if(a[2]==a[0])
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found ~ ur [ userID ] is : "<<a[1];
                                cout<<"\nPress any key to continue . . .";
                                cin.get();
                                cin.get();
                                main();
                        }
                        else
                        {
                                cout<<"nSorry, Your [ Password ]is not found in Account INFO\n";
                                cout<<"\nMake sure you already registered ur acc. \n";
                                cout<<"\nPress any key to continue . . .";
                                cin.get();
                                cin.get();
                                main();
                        }

                        break;
                }

                case 00:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"\nSorry, You entered wrong choice. try again"<<endl;
                        main();
        }

        }
        else if(choice == 4 || choice == 04){
            main();

        }
        else if(choice == 99 || choice == 9){
        cout<<"Thanks for using the program\n Author : @MrRobot\n\n";
        return 0;

        }
        else{
        cout<<"Chosen number invalid! ,  try again ..\n"<<endl;
        main();

        }
	}
        else{
        cout << "Command doesn't exists , make sure you used [ #include<stdlib.h> ]";
        return 0;
        }

}
/* End */
