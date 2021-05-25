#include<iostream>
#include<fstream>
// using namespace std;
class Item{
  int quantity;
  std::string name;
  float price;
  public:
    Item(){
      quantity=0;
      name="";
      price=0;
    }
    Item(std::string name,float prc,int qt){
      this->name=name;
      price=prc;
      quantity=qt;
    }
    friend std::ifstream & operator>>(std::ifstream & ifs,Item &I);
    friend std::ofstream & operator<<(std::ofstream & ofs,Item &I);
    friend std::ostream & operator<<(std::ostream & out,Item &I);
    friend std::istream & operator>>(std::istream & in,Item &I);
};

std::ostream & operator<<(std::ostream & out,Item & I){
  out<<I.name<<"\n"<<I.price<<"\n"<<I.quantity<<std::endl;
  return out;
}
std::istream & operator>>(std::istream & in,Item & I){
  in>>I.name>>I.price>>I.quantity;
  return in;
}
std::ifstream & operator>>(std::ifstream & ifs,Item & I){
  ifs>>I.name>>I.price>>I.quantity;
  return ifs;
}
std::ofstream & operator<<(std::ofstream & ofs,Item & I){
  ofs<<I.name<<std::endl<<I.price<<std::endl<<I.quantity<<std::endl;
  return ofs;
}

int main(){

  int n,quantity;
  std::string name;
  float price;
  std::cout<<"Enter number of Items"<<std::endl;
  std::cin>>n;
  
  Item *list[n];
  for(int i=0;i<n;i++){
    std::cout<<"Enter name ,price and quantity of item no. "<<i+1<<std::endl;
    // std::cin>>name;
    // std::cin>>price;
    // std::cin>>quantity;
    list[i]=new Item();
    std::cin>>*list[i];
    // std::cout<<*list[i];
    
  }
  std::ofstream ofs("MyFile.txt",std::ios::app);
  for(int i=0;i<n;i++){
    ofs<<*list[i];
  }
  ofs.close();

  Item item;

  std::ifstream ifs("MyFile.txt");
  if (ifs.is_open())
        std::cout << ifs.rdbuf();
  // while (!ifs.fail() && !ifs.eof() ){
  //   static int i=0;
  //   ifs>>item;
  //   std::cout<<"Item: "<<i+1<<std::endl;
  //   std::cout<<item<<std::endl;
  // }
  ifs.close();
  // for (int i=0;i<n;i++){
  //   delete []list[i];
  // }
  

  return 0;
}k