public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(--big >= 0) return true;
                else return false;
            case 2:
                if(--medium >= 0) return true;
                else return false;
            case 3:
                if(--small >= 0) return true;
                else return false;
        }
        return false;
    }
    
private:
    int big;
    int medium;
    int small;  
};
