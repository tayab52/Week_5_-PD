#include<iostream>

using namespace std;

string decideActivity(string temperature,string humidity);

main(){

string temperature,humidity;

cout<<"Enter temperature (warn or cold): ";
cin>>temperature;
cout<<"Enter humidity (dry or humid): ";
cin>>humidity;

string activity=decideActivity(temperature,humidity);
cout<< "Recommended activity: "<<activity;
}

string decideActivity(string temperature,string humidity){
  
  string Activity;
   if(temperature=="warm"){
      if(humidity=="dry"){
          Activity="Play tennis";
       }
       if(humidity=="humid"){
          Activity="swim";
       }
   }
   if(temperature=="cold"){
      if(humidity=="dry"){
          Activity="Play basketball";
       }
       if(humidity=="humid"){
          Activity="Watch tv";
       }
   }
   return Activity;

}
