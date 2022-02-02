class ParkingSystem {
public:
    array<int, 3> free_slots;
	
    ParkingSystem(int big, int medium, int small): free_slots{big, medium, small} {}
    
	bool addCar(int carType) {
        return free_slots[carType-1]?free_slots[carType-1]--:false;
    }
};