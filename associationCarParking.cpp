#include <iostream>
class Car{
    public:
    Car(const std::string& model,const std::string& color,const int& year):m_model(model),m_color(color),m_year(year){}
    std::string getModel()const { return m_model;}
     std::string getColor() const {return m_color;}
     int getYear () const { return m_year;}

    private:
    std::string m_model;
    std::string m_color;
    int m_year ;
};
class Parking{
    public:
    Parking(int size): m_size(size){
        m_cars=new Car*[size];
    }
    ~Parking(){
        for(int i=0;i<m_parkedCars;++i){
            delete m_cars[i];
        }
        delete [] m_cars;
    }
    bool RegisteredCars(Car* c){
        bool bRes=false;
        if(m_parkedCars!=m_size){
            m_cars[m_parkedCars]=c;
            m_parkedCars++;
            bRes=true;
        }
        return bRes;
    }
    void removeCar(const std::string& model){
        bool found =false;
        for (int i=0;i<m_parkedCars;++i){
            if(m_cars[i]->getModel()==model){
                delete m_cars[i];
                 for (int j = i; j < m_parkedCars - 1; ++j) {
                    m_cars[j] = m_cars[j + 1];
                }
                m_cars[--m_parkedCars]=nullptr;
                found =true;
                break;

            }
            
        }
         if (!found) {
        std::cout << "Car with model " << model << " not found." << std::endl;
    }
    
    } 
    void printCars()const {
         
     for (int i = 0; i < m_parkedCars; ++i) {
         if (m_cars[i] != nullptr) {
            std::cout << "Car:" << m_cars[i]->getModel() <<" " << m_cars[i]->getColor()<<" "
                      << m_cars[i]->getYear() <<" "<< std::endl;
                      }
    }
    }

private:
Car** m_cars=nullptr;
int m_size=0;
int m_parkedCars=0;
};
int main(){
     Car* firstCar=new Car("Mercedes","Black",2000);
     Car* secondCar=new Car("BMW","Black",2005);
    Car* thirdCar=new Car("Opel","White",2000);

    Parking myParking(5);

    myParking.RegisteredCars(firstCar);
    myParking.RegisteredCars(secondCar);
    myParking.RegisteredCars(thirdCar);
    myParking.printCars();

    myParking.removeCar("BMW");
    std::cout<<"Parking after removing:"<<std::endl;
    myParking.printCars();
    delete firstCar;
    delete secondCar;
    delete thirdCar;

 firstCar=nullptr;
   secondCar=nullptr;
     thirdCar=nullptr;


    return 0;

}