#include <bits/stdc++.h>
using namespace std;
#define pi 3.141592654;
int main(){
    cout<<" ________________________"<<endl;
    cout<<"|    +   |   -   |   *   |"<<endl;
    cout<<"|________|_______|_______|"<<endl;
    cout<<"|    /   |  sqrt |  pow  |"<<endl;
    cout<<"|________|_______|_______|"<<endl;
    cout<<"|log10   | sin   |  cos  |"<<endl;
    cout<<"|________|_______|_______|"<<endl;
    cout<<"|   tan  |  sec  | cosec |"<<endl;
    cout<<"|________|_______|_______|"<<endl;
    cout<<"|   cot  |  sinh | cosh  |"<<endl;
    cout<<"|________|_______|_______|"<<endl;
    cout<<"|  tanh  |  quadeqn      |"<<endl;
    cout<<"|________|_______________|"<<endl;
    char c;
    do{
	
	    cout<<"Enter a keyword mentioned above"<<endl;
	    string str ;
	    cin>>str;
	    string s="";
	    for(int i=0;i<str.size();i++){
	        s += tolower(str[i]);
	    }
	      if(s=="+")
	       {
	            cout<<"The operation you chose is addition"<<endl;
	            cout<<"Enter two numbers for addition (a+b)"<<endl;
	            cout<<"Enter a"<<endl;
	            double a;
	            cin>>a;
	            cout<<"Enter b"<<endl;
	            double b;
	            cin>>b;
	            double r =a+b;
	            cout<<"The sum is "<<" "<<r<<endl;
	
	      }
	      else if (s=="-")
	      {
	            cout<<"The operation you chose is subtraction"<<endl;
	            cout<<"Enter two numbers for subtraction (a-b)"<<endl;
	            cout<<"Enter a"<<endl;
	            double a;
	            cin>>a;
	            cout<<"Enter b"<<endl;
	            double b;
	            cin>>b;
	            double r =a-b;
	            cout<<"The difference is "<<" "<<r<<endl;
	  }
	     else if (s=="*")
	      {
	            cout<<"The operation you chose is multiplication"<<endl;
	            cout<<"Enter two numbers for subtraction (a*b)"<<endl;
	            cout<<"Enter a"<<endl;
	            double a;
	            cin>>a;
	            cout<<"Enter b"<<endl;
	            double b;
	            cin>>b;
	            double r =a*b;
	            cout<<"The product is "<<" "<<r<<endl;
	      }
	      else if (s=="/")
	      {
	            cout<<"The operation you chose is division"<<endl;
	            cout<<"Enter two numbers for division (a/b)"<<endl;
	            cout<<"Enter a"<<endl;
	            double a;
	            cin>>a;
	            cout<<"Enter b"<<endl;
	            double b;
	            cin>>b;
	            double r =a/b;
	            cout<<"The quotient is "<<" "<<r<<endl;
	      }
	    
	     else if(s=="sqrt")
	    {
	           cout<<"The operation you chose is square root"<<endl;
	           cout<<"Enter a number"<<endl;
	           double a ;
	           cin>>a;
	           double r = sqrt(a);
	           cout<<"Square root of "<<a<<" is "<<r<<endl;
	    }
	      
	     else if(s=="pow")
	    {
	           cout<<"The operation you chose is power"<<endl;
	           cout<<"Enter base"<<endl;
	           double a ;
	           cin>>a;
	           cout<<"Enter exponent"<<endl;
	           double b;
	           cin>>b;
	           double r = pow(a,b);
	           cout<<a<< "to the power of "<<b<<" is "<<r<<endl;
	    }
	    else if(s=="log10")
	    {
	           cout<<"The operation you chose is log of base 10"<<endl;
	           cout<<"Enter a number"<<endl;
	           double a ;
	           cin>>a;
	           double r = log10(a);
	           cout<<"Log of base 10 of "<<a <<" is "<<r<<endl;
		
	    }
	   else if(s=="sin")
	    {
	           cout<<"The operation you chose is sine"<<endl;
	           cout<<"Enter a number in degrees"<<endl;
	           double a ;
	           cin>>a;
	           double b = (a/180)*pi;
	           cout<<"sine of "<<a<<" is "<<sin(b)<<endl;
		
	    }
	    else if(s=="cos")
	    {
	           cout<<"The operation you chose is cosine"<<endl;
	           cout<<"Enter a number in degrees"<<endl;
	           double a ;
	           cin>>a;
	           double b = (a/180)*pi;
	           cout<<"cosine of "<<a<<" is "<<cos(b)<<endl;
		
	    }
	    else if(s=="tan")
	    {
	           cout<<"The operation you chose is tan"<<endl;
	           cout<<"Enter a number in degrees"<<endl;
	           double a ;
	           cin>>a;
	           double b = (a/180)*pi;
	           cout<<"tan of "<<a<<" is "<<tan(b)<<endl;
		
	    }
	    else if(s=="sec")
	    {
	           cout<<"The operation you chose is sec"<<endl;
	           cout<<"Enter a number in degrees"<<endl;
	           double a ;
	           cin>>a;
	           double b = (a/180)*pi;
	           double r1= cos(b);
	           double r2=1/r1;
	           cout<<"sec"<<a<<" is "<<r2<<endl;
		
	    }
	    else if(s=="cosec")
	    {
	           cout<<"The operation you chose is cosec"<<endl;
	           cout<<"Enter a number in degrees"<<endl;
	           double a ;
	           cin>>a;
	           double b = (a/180)*pi;
	           double r1= sin(b);
	           double r2=1/r1;
	           cout<<"cosec"<<a<<" is "<<r2<<endl;
		
		
	    }
	    else if(s=="cot")
	    {
	           cout<<"The operation you chose is cot"<<endl;
	           cout<<"Enter a number in degrees"<<endl;
	           double a ;
	           cin>>a;
	           double b = (a/180)*pi;
	           double r1= tan(b);
	           double r2=1/r1;
	           cout<<"cot"<<a<<" is "<<r2<<endl;
		
		
	    }
	    else if(s=="sinh")
	    {
	           cout<<"The operation you chose is sinh"<<endl;
	           cout<<"Enter a number "<<endl;
	           double a ;
	           cin>>a;
	           cout<<"sinh"<<a<<" is "<<sinh(a)<<endl;
		
		
	    }
	    else if(s=="cosh")
	    {
	           cout<<"The operation you chose is cosh"<<endl;
	           cout<<"Enter a number "<<endl;
	           double a ;
	           cin>>a;
	           cout<<"cosh"<<a<<" is "<<cosh(a)<<endl;
		
		
	    }
		else if(s=="tanh")
	    {
	           cout<<"The operation you chose is tanh"<<endl;
	           cout<<"Enter a number "<<endl;
	           double a ;
	           cin>>a;
	           cout<<"tanh"<<a<<" is "<<tanh(a)<<endl;
		
		
	    }
	    else if(s=="quadeqn")
	    {
	           cout<<"The operation you chose is roots for a quadratic polynomial ax^2 + bx +c "<<endl;
	           cout<<"Enter a"<<endl;
	           double a ;
	           cin>>a;
	           cout<<"Enter b"<<endl;
	           double b ;
	           cin>>b;
	           cout<<"Enter c"<<endl;
	           double c;
	           cin>>c;
	           double D = (pow(b,2)- (4*a*c));
	           
	           double x1,x2;
	           if(D>=0){
			   
	           	x1 = (-b + sqrt(D))/(2*a);
	           	x2 = (-b - sqrt(D))/(2*a);
	           	cout<<"Roots are "<<x1<<" "<<x2;
	           	
			   }
			   else if( D<0)
			    {
			    	cout<<" Roots are imaginary"<<endl;
			    	
				}
	    }
	    else 
	    cout<<"Please enter a valid keyword"<<endl;
	    cout<<"Would you like to do another operation Y/N ?"<<endl;
	    cin>>c;
    }while(c=='y'|| c=='Y');

}
	    
	    
	    
	   
	
	
