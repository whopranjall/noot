include<iostream.h>
include<conio.h>

void main()
{
 int a,b;
 cin>>a>>b;
 cout<<"enter your choice \n 1.addition \n 2. multiplication"
 char ch;
 swtch(ch)
 {
  case 1:
  {
   cout<<a+b;
   break;
  }
  case 2:
  {
   cout<<a*b;
   break;
  }
  default:
  cout<<"boooo";
 }
}
