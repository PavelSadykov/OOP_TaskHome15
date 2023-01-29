//
//  main.cpp
//  ООП ДЗ 15 Наследование шаблонных классов
//
//  Created by Павел on 25.01.2023.
//

#include <iostream>
#include <string>

class ElectroFuel {
public:
    ElectroFuel(){}
    const  std::string &getInfo(){
        return _info;
    }
private:
      const  std::string _info = "electrofuel";
    
};

template<class  T>
class Vehicle{
public:
    Vehicle(){
        std::cout<<"Vehicle()"<<std::endl;
    }
    void PrintFuelInfo() {
        std::cout<< _fuel.getInfo()<<std::endl;
        
    }
private:
  T _fuel;
    
};



class ElectricBicycle : public  Vehicle<ElectroFuel>{
public:
    ElectricBicycle(const std::string &bikeinfo): _bikeinfo(bikeinfo){
        std::cout<<"Параметризованный конструктор ElectricBicycle()"<<std::endl;
    }
    void printBicycleInfo(){
        std::cout<<_bikeinfo<<std::endl;
    }
private:
    std::string _bikeinfo;
   
};


int main(int argc, const char * argv[]) {
    Vehicle<ElectroFuel> v;
    ElectricBicycle  A("BMW");
    A.printBicycleInfo();
    v.PrintFuelInfo();
    A.PrintFuelInfo();
    return 0;
    
}
