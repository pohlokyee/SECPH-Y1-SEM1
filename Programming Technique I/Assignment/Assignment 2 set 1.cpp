//POH LOK YEE A23CS0262
//WOO CHENG SHUAN A23CS0283

#include <iostream> 
#include <iomanip> 
using namespace std; 
 
double BMRcalculation(int age, int height, int weight, char gender, double BMR) 
{ 
 if((gender=='M')||(gender=='m')){ 
  BMR = 10 * weight + 6.25 * height - 5 * age + 5; 
 } 
 else{ 
  BMR = 10 * weight + 6.25 * height - 5 * age - 161; 
 } 
   
 return BMR; 
} 
 
int main() 
{ 
 char ans;  
  
 do{ 
  int age, height, weight; 
  char gender; 
  
  cout<<"Basal Metabolic Rate (BMR) Calculator"<<endl<<endl; 
  
  do{ 
   cout<<"Age [15-80]: "; 
   cin>>age; 
  }while((age<15)||(age>80)); 
  
  do{ 
   cout<<"Gender [F @ M]: "; 
   cin>>gender; 
  }while((gender!='F')&&(gender!='f')&&(gender!='M')&&(gender!='m')); 
  
  cout<<"Height (cm): "; 
  cin>>height; 
  
  cout<<"Weight (kg): "; 
  cin>>weight; 
  
  double BMR = BMRcalculation(age,height,weight,gender,BMR); 
  cout<<endl<<fixed<<setprecision(2)<<"BMR = "<<BMR<<" Calories/ day (using Mifflin-St Jeor Equation)"<<endl; 
  
  cout<<endl<<"Daily calorie needs based on activity level"<<endl<<endl; 
  
  cout<<"Activity Level\t\t\t\t\t\t Calorie"<<endl; 
  cout<<"Sedentary: little or no exercise\t\t\t  "<<fixed<<setprecision(0)<<BMR*1.2<<endl; 
  cout<<"Exercise 1-3 times/week\t\t\t\t\t  "<<BMR*1.375<<endl; 
  cout<<"Exercise 4-5 times/week\t\t\t\t\t  "<<BMR*1.465<<endl; 
  cout<<"Daily exercise or intense exercise 3-4 times/week\t  "<<BMR*1.55<<endl; 
  cout<<"Intense exercise 6-7 times/week\t\t\t\t  "<<BMR*1.725<<endl; 
  cout<<"Very intense exercise daily, or physical job\t\t  "<<BMR*1.9<<endl<<endl; 
   
  cout<<"Exercise: 15-30 minutes of elevated heart rate activity."<<endl; 
  cout<<"Intense exercise: 45-120 minutes of elevated heart rate activity."<<endl; 
  cout<<"Very intense exercise: 2+ hours of elevated heart rate activity."<<endl<<endl; 
  
  cout<<"Do you want to enter other data? [Y @ N]: "; 
  cin>>ans; 
 }while((ans=='Y')||(ans=='y')); 
  
 cout<<endl<<"Thank you :)"; 
  
 return 0; 
}
