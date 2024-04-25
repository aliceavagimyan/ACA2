#include <iostream>
class Car{
    public:
    Car(const std::string& brand,const int& year): m_brand(brand),m_year(year){}
    void getInfo(){
        std::cout<<"Brand: "<<m_brand<<std::endl<<"Year:"<<m_year<<std::endl;
    }
    private:
    std::string m_brand;
    int m_year;
};
class BMW: public Car{
    public:
    BMW(const std::string& brand,const int& year,const std::string& model): Car(brand,year),m_model(model){}
     void getInfo(){
        Car::getInfo();
        std::cout<<"Model "<<m_model<<std::endl;
    }
      private:
      std::string m_model;
};
class Mercedes: public Car{
    public:
    Mercedes(const std::string& brand,const int& year,const std::string& model): Car(brand,year),m_model(model){}
     void getInfo(){
        Car::getInfo();
        std::cout<<"Model "<<m_model<<std::endl;
    }
      private:
      std::string m_model;
};
class Opel: public Car{
    public:
    Opel(const std::string& brand,const int& year,const std::string& model): Car(brand,year),m_model(model){}
     void getInfo(){
        Car::getInfo();
        std::cout<<"Model "<<m_model<<std::endl;
    }
      private:
      std::string m_model;
};
class MyBMW:public BMW{
    public:
    MyBMW(const std::string& brand,const int& year,const std::string& model,const int& run) :BMW(brand,year,model),m_run(run){}
    void getInfo(){
        BMW::getInfo();
        std::cout<<"run: "<<m_run<<std::endl;
    }
    private:
    int m_run;

};
class MyMercedes:public Mercedes{
      public:
    MyMercedes(const std::string& brand,const int& year,const std::string& model,const int& wheelDiametr) :
                                                              Mercedes(brand,year,model),m_wheelDiametr(wheelDiametr){}
    void getInfo(){
        Mercedes::getInfo();
        std::cout<<"Wheel diametr"<<m_wheelDiametr<<std::endl;
    }
    private:
    int m_wheelDiametr;
};
class MyOpel:public Opel{
      public:
    MyOpel(const std::string& brand,const int& year,const std::string& model,const std::string& interiorColor) :
                      Opel(brand,year,model),m_interiorColor(interiorColor){}
    void getInfo(){
        Opel::getInfo();
        std::cout<<"Inetrior Color"<<m_interiorColor<<std::endl;
    }
    private:
    std::string m_interiorColor;
};
int main(){
    MyBMW car1("BMW",2020,"x5",35000);
    car1.getInfo();
    std::cout<<" ------"<<std::endl;
    MyMercedes car2("Mercedes",2015,"S-class",20);
    car2.getInfo();
    MyOpel car3("Opel",1998,"vectra","black");
    std::cout<<" ------"<<std::endl;
    car3.getInfo();
    return 0;
}
