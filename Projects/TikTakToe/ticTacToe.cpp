#include <iostream>
#include<string>


using namespace std;
string Player ="X";
string b,c,d;
string game;
int a;
int count=0;
string field[3][3]={"1","2","3","4","5","6","7","8","9"};
void board(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<field[i][j]<<"\t"<<"\t";
        }
        cout<<"\n"<<"\n";
    }
}


bool validation(){

    if(a==1){
       if(field[0][0]=="1")
        return true;
        else
            return false;
        }
    if(a==2){
       if(field[0][1]=="2")
        return true;
        else
            return false;
    }
    if(a==3){
       if(field[0][2]=="3")
          return true;
          else
            return false;
    }
    if(a==4){
       if(field[1][0]=="4")
        return true;
        else
            return false;

    }
    if(a==5){
       if(field[1][1]=="5")
        return true;
        else
            return false;

    }
    if(a==6){
       if(field[1][2]=="6")
          return true;
          else
            return false;

    }
    if(a==7){
       if(field[2][0]=="7")
        return true;
        else
            return false;

    }
    if(a==8){
       if(field[2][1]=="8")
        return true;
        else
            return false;

    }
    if(a==9){
       if(field[2][2]=="9")
          return true;
          else
            return false;

    }
    else
        return false;
}



void input(){

    if (Player=="X"){
        cout<<b<<" "<<"please choose the field : ";
        cin>>a;
    }
    else{
        cout<<c<<" "<<"please choose the field : ";
        cin>>a;
    }
    cout<<"\n"<<"\n";


    if(validation()==false){
        while (validation()==false){
        cout <<"this field is already filled choose another"<<"\n";
        cin>> a;
        validation();
        }
        switch(a){
    case(1):
        field[0][0]=Player;
        break;
    case(2):
        field[0][1]=Player;
        break;
    case(3):
        field[0][2]=Player;
        break;
    case(4):
        field[1][0]=Player;
        break;
    case(5):
        field[1][1]=Player;
        break;
    case(6):
        field[1][2]=Player;
        break;
    case(7):
        field[2][0]=Player;
        break;
    case(8):
        field[2][1]=Player;
        break;
    case(9):
        field[2][2]=Player;
        break;

    }
    }
    else{
    switch(a){
    case(1):
        field[0][0]=Player;
        break;
    case(2):
        field[0][1]=Player;
        break;
    case(3):
        field[0][2]=Player;
        break;
    case(4):
        field[1][0]=Player;
        break;
    case(5):
        field[1][1]=Player;
        break;
    case(6):
        field[1][2]=Player;
        break;
    case(7):
        field[2][0]=Player;
        break;
    case(8):
        field[2][1]=Player;
        break;
    case(9):
        field[2][2]=Player;
        break;

    }
}
}
void changeplayer(){
    if(Player=="X")
        Player="O";
    else
        Player="X";
}
void playerinfo(){

cout <<"name of player choosing X:"<<"\n";
cin>>b;
cout<< "name of player choosing O:"<<"\n";
cin>>c;
cout<<"name the player starting first:"<<"\n";
cin>>d;
if(d==c)
    Player="O";
else
    Player="X";
}

void winner(){
    if(field[0][0]==field[1][0]&&field[2][0]==field[1][0] || field[2][0]==field[1][1]&&field[2][0]==field[0][2] || field[0][0]==field[0][1]&&field[0][2]==field[0][1] || field[0][0]==field[1][1]&&field[2][2]==field[1][1] || field[0][1]==field[1][1]&&field[2][1]==field[1][1] || field[0][2]==field[1][2]&&field[2][2]==field[1][2] || field[1][0]==field[1][1]&&field[1][2]==field[1][1] || field[2][0]==field[2][1]&&field[2][2]==field[2][1]){
        if(Player=="X")
            cout<<"congratulations "<<b<<" you have won the game..";
        else if(Player=="O")
            cout<<"congratulations "<<c<<" you have won the game..";
            game="over";

    }
     if(count==9){
            cout<<"No one won the game...\n";
            game="over";
     }

}


int main()
{
    string d;
    playerinfo();
    board();
    for(int i=0;i<9;i++){
            count++;
        input();
        system("cls");
        board();

        winner();

        if(game=="over")
            break;

        changeplayer();
    }
    //cout<<"No result..as you both are best\n";
    cout<<"Thank you for playing \n. I am still working to update it.\n";
    cout<<"is there any problem in my program?(yes or no)";
    cin>>d;
    cin.get();
}