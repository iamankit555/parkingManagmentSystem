#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
using namespace std;
class park
{
private:
    string firstname,lastname,mobile,email,username,username1,password,password1,bustype,cartype,aeroplanetype,cycletype,motorcycletype;
    int busno=0,carno=0,aeroplaneno=0,cycleno=0,motorcycleno=0;
public:
    void registration();
    void login();
    void showmenu();
    void mainmenu();
    void adddata();
    void showdata();
    void deletedata();

};
void park:: registration()
{
    system("cls");
    cout<<"enter first name:     ";
    cin>>firstname;
    cout<<"\nenter last name:      ";
    cin>>lastname;
    cout<<"\nenter mobile number:  ";
    cin>>mobile;
    cout<<"\nenter Emai id:        ";
    cin>>email;
    cout<<"\nenter username:       ";
    cin>>username;
    cout<<"\nenter password:       ";
    cin>>password;
    cout<<"\n\n\t your data succefully saved \n\n";
    cout<<"\t\t Login Here "<<endl;
}
void park:: login()
{
    system("cls");
    cout<<"\t\t\t Login page\n\n"<<endl;
    cout<<"enter your username    ";
    cin>>username1;
    cout<<"enter your password    ";
    cin>>password1;
    system("cls");

}
void park:: showmenu()
{

    cout<<"\t\t\t  MENU"<<endl;
    cout<<"\n\t1.Bus"<<endl<<"\t2.Cycle"<<endl<<"\t3.Aeroplane"<<endl<<"\t4.Car"<<endl<<"\t5.Motorcycle"<<endl;
}

void park:: adddata()
{
    system("cls");
    cout<<"\n\t1.Bus"<<endl<<"\t2.Cycle"<<endl<<"\t3.Aeroplane"<<endl<<"\t4.Car"<<endl<<"\t5.Motorcycle"<<endl;
    int choice1;
    cin>>choice1;
    switch(choice1)
    {
    case 1:
        cout<<"Enter bus no   "<<endl;
        cin>>busno;
        cout<<"Enter bus type "<<endl;
        cin>>bustype;
        cout<<"\n\t\t Data added successfully"<<endl;
        cout<<"if you want to add more data press y or N for mainmenu"<<endl;
        char key;
        cin>>key;
        if(key=='Y'||key=='y')
            adddata();
        else if(key=='N'||key=='n')
        {
            system("cls");
           mainmenu();
        }
        system("cls");
        break;
    case 2:
        cout<<"Enter cycle no   "<<endl;
        cin>>cycleno;
        cout<<"Enter cycletype "<<endl;
        cin>>cycletype;
        cout<<"\n\t\t Data added successfully"<<endl;
        cout<<"if you want to add more data press y or N"<<endl;
        cin>>key;
        if(key=='Y'||key=='y')
            adddata();
        else if(key=='N'||key=='n')
        {
            system("cls");
             mainmenu();
        }
        system("cls");
        break;
    case 3:
        cout<<"Enter aeroplane no   "<<endl;
        cin>>aeroplaneno;
        cout<<"Enter aeroplanetype "<<endl;
        cin>>aeroplanetype;
        cout<<"\n\t\t Data added successfully"<<endl;
        cout<<"if you want to add more data press y or N"<<endl;
        cin>>key;
        if(key=='Y'||key=='y')
            adddata();
        else if(key=='N'||key=='n')
        {
            system("cls");
            mainmenu();
        }
        system("cls");
        break;
    case 4:
        cout<<"Enter carno   "<<endl;
        cin>>carno;
        cout<<"Enter cartype "<<endl;
        cin>>cartype;
        cout<<"\n\t\t Data added successfully"<<endl;
        cout<<"if you want to add more data press y or N"<<endl;
        cin>>key;
        if(key=='Y'||key=='y')
            adddata();
        else if(key=='N'||key=='n')
        {
            system("cls");
            mainmenu();
        }
        system("cls");
        break;
    case 5:
        cout<<"Enter motorcycle no   "<<endl;
        cin>>motorcycleno;
        cout<<"Enter motorcycletype "<<endl;
        cin>>motorcycletype;
        cout<<"\n\t\t Data added successfully"<<endl;
        cout<<"if you want to add more data press y or N"<<endl;
        cin>>key;
        if(key=='Y'||key=='y')
            adddata();
        else if(key=='N'||key=='n')
        {
            system("cls");
           mainmenu();
        }
        system("cls");
        break;
    default:
        cout<<"Invalid choice"<<endl;

    }
}
void park:: deletedata()
{

    char key;
    system("cls");
    busno=0;
    cycleno=0;
    aeroplaneno=0;
    carno=0;
    motorcycleno=0;
    cout<<"\n\n\t\t Record Deleted successfully"<<endl;
    cout<<"\n\t\t Press M key to Main Menu"<<endl;
    cin>>key;
    system("cls");
}
void park:: showdata()
{
    char key;
    system("cls");
    cout<<"bus no ="<<busno<<endl;
    cout<<"cycleno ="<<cycleno<<endl;
    cout<<"aeroplaneno = "<<aeroplaneno<<endl;
    cout<<"carno ="<<carno<<endl;
    cout<<"motorcycleno ="<<motorcycleno<<endl;
    cout<<"\n\t\t Press M key to Main Menu"<<endl;
    cin>>key;
    system("cls");
}
void park::mainmenu()
{
    cout<<"\n\t1.Adddata"<<endl<<"\t2.showdata"<<endl<<"\t3.Deletedata"<<endl<<"\t4.showmenu"<<endl<<"\t5.exit"<<endl;
    int choice2;
    cin>>choice2;
    switch(choice2)
    {
    case 1:
        adddata();
        mainmenu();
        break;
    case 2:
        showdata();
        mainmenu();
        break;
    case 3:
        deletedata();
        mainmenu();
        break;
    case 4:
        showmenu();
        adddata();
        mainmenu();
        break;
    case 5:
        exit(0);
    default:
        cout<<"Invalid choice"<<endl;
    }

}
int main()
{
      park p;
     int choice;
    cout<<"\n\t\t\t\t W E L C O M E     T O      P A R K I N G      A R E A \n";
    cout<<"\n\n\t\t 1.Register"<<endl<<"\t\t 2.Login"<<endl;
    cin>>choice;
        switch(choice)
    {
    case 1:
        p.registration();
        p.login();
        system("cls");
        p.mainmenu();
        break;
    case 2:
        p.login();
        p.mainmenu();
        break;
    }
    return 0;
}
