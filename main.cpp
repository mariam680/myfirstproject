#include <iostream>

using namespace std;

int main()
{
   int your_grade;

   cout<<"enter your grade to see the gpa"<<endl;

   cin>>your_grade;

   if(your_grade>=90)
    cout<<"+A"<<endl;
   else if(your_grade>=85&&your_grade<90)
    cout<<"A"<<endl;
   else if(your_grade>=80&&your_grade<85)
    cout<<"+B"<<endl;
    else if(your_grade>=75&&your_grade<80)
    cout<<"B"<<endl;
    else if(your_grade>=70&&your_grade<85)
    cout<<"+C"<<endl;
    else if(your_grade>=65&&your_grade<70)
    cout<<"C"<<endl;
    else if(your_grade>=60&&your_grade<65)
    cout<<"+D"<<endl;
    else if(your_grade>=50&&your_grade<60)
    cout<<"D"<<endl;
    else
        cout<<"F"<<endl;
    return 0;
}
