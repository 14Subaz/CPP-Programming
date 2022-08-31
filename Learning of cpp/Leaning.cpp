/*#include<iostream> //input and output
using namespace std;

int main()
{
    cout<<"Hello World...!";
    return 0;
}

*/
// what is namespace?
/*
#include<iostream> //input and output
using namespace std;

int main()
{
    float a, b;
    cout<<"Enter the value of A, B: ";
    cin>>a>>b;
    cout<<"Value of A: "<<a+b;
    return 0;


}

#include<iostream>
using namespace std;

int main()
{
    string a;
    cout<<"Enter the para: ";
    getline(cin, a);
    cout<<a;

    return 0;
}
*/

#include<iostream>

using namespace std;
int main()
{

    //string a="Welcome to Subash Home";
    /*
    string a("Welcome to Subash Home");
    cout<<a<<endl;
    return 0;
    *//*
//String concatenation

string firstname="Tutor ";
string lastname="Joes ";

cout<<firstname+lastname<<endl;
return 0;*/

    //append method
    /*
    string firstname="Tutor ";
    string lastname="Joes ";
    string fullname=firstname.append(lastname);
    cout<<fullname<<endl;
    return 0;
    *//*
//String access
string firstname="Tutor ";
string lastname="Joes ";
string fullname=firstname.append(lastname);
cout<<fullname<<endl;
cout<<firstname[0]<<endl;
firstname[0]='C';
cout<<firstname<<endl;

return 0;
*//*
string str ;
cout<<"Enter the string: ";
cin>>str;
cout<<str<<endl;
fflush(stdin);
cout<<"Enter the string: ";
getline(cin, str);
cout<<str<<endl;
return 0;*/
    /*
    Uses of integer get:
        int a, b;
        cout<<"Enter the integer value:"<<endl;
        cin>>a>>b;
        cout<<"Value of c:"<<a+b<<endl;
        return 0;
        */
    /*

    Uses of String:
        string a;

        cout<<"Enter the character:"<<endl;
        cin>>a;
        cout<<"This is the value of char:"<<a<<endl;
    */

//Uses of getline
    /*
    string a;
    cout<<"Enter the character:"<<endl;
    getline(cin, a);
    cout<<"This is the value of char:"<<a<<endl;
    return 0;
    */

//C++ String:

    /*   String
        Input function
        Capacity function
        Iterator function
        Manipulating function

        */

//String concatenation: (added or joining the string)
    /*
        string firstName="Tutor";
        string lastName="Joes";
        string FullName;
        cout<<"FullName: "<<firstName+" "+lastName<<endl;
        return 0;
    */
//append
    /*
        string firstName="Sam";
        string lastName="Kumar";
        string FullName= firstName.append(lastName); //Joining Statement
        cout<<FullName<<endl;
    //String access:
        firstName[0]='R';

        cout<<firstName<<endl;
        return 0;
    */
//Uses of Getline with clear the garbage value: (fflush(stdin)):
    /*
        string str;
        cout<<"Enter the value of String:";
        cin>>str;
        cout<<str<<endl;
        fflush(stdin);
        cout<<"Enter the value of String:";
        getline(cin, str);
        cout<<str<<endl;
    */

//Push_back and Pop_back
    /*
    string str;
    cout<<"Enter the value of string:"<<endl;
    cin>>str;
    str.push_back('h');
    cout<<str<<endl;
    str.pop_back();
    cout<<str;
    */

//Capacity function: (to find out all size and length of str)
    /*
    string str("Subash");
    cout<<str<<endl;
    cout<<"Size of str      :"<<str.size()<<endl;
    cout<<"Length of str    :"<<str.length()<<endl;
    cout<<"Max Length of str:"<<str.max_size()<<endl;
    */
    //Iterator Functions
    //-------------------------------------------------
    string str = "Tutor Joes";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
        cout<<*it<<endl;
    cout<<"------------------------"<<endl;
    string::reverse_iterator it2;
    for(it2=str.rbegin();it2!=str.rend();it2++)
        cout<<*it2<<endl;

    return 0;
}
