#include <iostream>

using namespace std;



string once(int);
string special(int);
string tens(int);
string hundreds(int);
string hundred(int);
string thousand(int);
string million(int);
string billion(int);
string trillion(int);
string numberInEnglish( long int);






int main() {

    long int number;
    cout<<"Enter any number between 0 to 999 trillion only"<<endl;
    
    cin>>number;
    if(number >999999999999999){
        cout<<"number you entered is probably higher than expected"<<endl;
        
    }
    else{
        if(number ==0) cout<<number<<" = zero";
        else{
            cout<<number<<" ="<<                  numberInEnglish(number)<<endl;
        }
    }
    
    return 0;
}







string numberInEnglish(long int x){
    int hundredChunk =x%1000;
    int thousandChunk =(x/1000)%1000;
    int millionChunk =(x/1000000)%1000;
    int billionChunk =(x/1000000000)%1000;
    int trillionChunk =x/1000000000000;
    
    string english = trillion(trillionChunk)+billion(billionChunk)+million(millionChunk)+thousand(thousandChunk)+hundred(hundredChunk);
    
    return english;
}


string hundred(int x){
    int oncePlace = x%10;
    int tensPlace = (x%100)/10;
    int hundredPlace = x/100;
    
    if(tensPlace==1){
        return(hundreds(hundredPlace)+special(x%100));
    }
    else{
        return(hundreds(hundredPlace)+tens(tensPlace)+once(oncePlace));
    }
}



string once(int x){
    switch(x){
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
        default:
            return " ";
            
    }
}




string special(int x){
    switch(x){
        case 10:
            return "ten ";
            break;
        case 11:
            return "eleven ";
            break;
        case 12:
            return "twelve ";
            break;
        case 13:
            return "thirteen ";
            break;
        case 15:
            return "fifteen ";
            break;
        default:
            return (" "+once(x%10)+"teen ");
            
    }
}




string tens(int x){
    switch(x){
        case 2:
            return "twenty ";
            break;
        case 3:
            return "thirty ";
            break;
          case 4:
            return "forty";
            break;
        case 5:
            return "fifty ";
            break;
        case 0:
            return " ";
            break;
        case 8:
            return "eighty ";
            break;
        default:
            return once(x)+"ty ";
            
    }
    
}




string hundreds(int x){
    //cout<<x;
    if(x==0){
        return "";
    }
    else{
        
        return(once(x)+" hundred ");
    }
}


string thousand(int x){
    if(x==0){
        return "";
    }
    else{
        return(hundred(x)+" thousand ");
    }
}

string million(int x){
    if(x==0){
        return "";
    }
    else{
        return(hundred(x)+" million ");
    }
}



string billion(int x){
    if(x==0){
        return "";
    }
    else{
        return(hundred(x)+" billion ");
    }
}


string trillion(int x){
    if(x==0){
        return "";
    }
    else{
        return(hundred(x)+" trillion ");
    }
}




