#include <iostream>
class Engine {
    public:
    Engine(const std::string& engine): m_engine(engine){}
    std::string getEngine() const{
        return m_engine;
    }
     private:
     std::string m_engine;
};
class Gearbox{
public:
Gearbox(const std::string& gearbox): m_gearbox(gearbox){}
std::string getGearbox() const{
        return m_gearbox;
    }
private:
std::string m_gearbox;
};
class Wheel{
    public:
    Wheel (const int& diametr):m_diametr(diametr){}
    int getDiametr(){
        return m_diametr;
    }
    private:
    int m_diametr;
};
class Car{
    public:
    Car(const std::string& model,const int& year,const std::string& color,const int&run,const Engine& engine,const Gearbox& gearbox,const Wheel& diametr):
     m_model(model),m_year(year),m_color(color),m_run(run) , m_engine(engine),m_gearbox(gearbox),m_diametr(diametr){}

   void printInfo(){
     std::cout<<"model :"<<m_model<<std::endl;
     std::cout<<"year :"<<m_year<<std::endl;
     std::cout<<"color: "<<m_color<<std::endl;
     std::cout<<"run :"<<m_run<<std::endl;
     std::cout<<"Engine :" <<m_engine.getEngine()<<std::endl;
     std::cout<<"Gearbox :"<<m_gearbox.getGearbox()<<std::endl;
     std::cout<<"Diametr of Wheels: "<<m_diametr.getDiametr()<<std::endl;
   }

    private:
    std::string m_model;
    int m_year;
    std::string m_color;
    int m_run;
    Engine m_engine;
    Gearbox m_gearbox;
    Wheel m_diametr;
};
int main(){
    Engine myEngine("Gas");
    Gearbox myGearbox("authomatic");
    Wheel myWheels(20);

    Car myCar("Mercedes",2000,"white",35000,myEngine,myGearbox,myWheels);
    std::cout<<"Car:"<<std::endl;
    myCar.printInfo();

    return 0;
}