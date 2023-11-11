#include<iostream>
using namespace std;
int main()
{
    float n1, n2,ans;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>n1>>n2;
        }
        switch(choice)
        {
            case 1:
                ans= n1+n2;
                cout<<"\nResult = "<<ans;
                break;
            case 2:
                ans = n1-n2;
                cout<<"\nResult = "<<ans;
                break;
            case 3:
                ans = n1*n2;
                cout<<"\nResult = "<<ans;
                break;
            case 4:
                ans = n1/n2;
                cout<<"\nResult = "<<ans;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}
