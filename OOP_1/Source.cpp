#include <iostream>
// �������
// ��� - �����������, ������������, ������������
// ������
// ����������� �����������
// ���������� ������������� � ������������
// ���������� ������������
// ���������� ���������� = ! [] . ->
// �������� ����� default, delete the constructor
// public ������������

class Vehicle {

public:
	// ����������� (�����������������)
	Vehicle(int newMaxSpeed, const std::string& newColor, const std::string& newType) : maxSpeed(newMaxSpeed),color(newColor),type(newType) {
		//std::cout << "Constructor Vehicle()" << std::endl;
		/*maxSpeed = newMaxSpeed;
		color = newColor;
		type = newType;*/
		//s = new char[50];
	}

	// ���������� ������������
	// ����������� � ����� ����������
	Vehicle(int newMaxSpeed) : maxSpeed(newMaxSpeed), color("brown"), type("bicycle") {
		/*maxSpeed = newMaxSpeed;
		color = "yellow";
		type = "bus";*/
	}
	Vehicle() = delete;	// �������� ������� ������������ (�� ���������)

	// ����������� ����������� (�������� ������ �� ������)
	Vehicle(Vehicle& obj) {
		maxSpeed = obj.getMaxSpeed();
		color = obj.getColor();
		type = obj.getType();
	}

	// ���������� 
	~Vehicle() {
		//std::cout << "Destructor Vehicle()" << std::endl;
		//delete[] s;
	}

	const std::string& getColor() {
		return color;
	}

	void setColor(const std::string& newColor) {
		color = newColor;
	}

	const std::string& getType() {
		return type;
	}

	void setType(const std::string& newType) {
		type = newType;
	}

	// ������ (���������� ���� ������)
	int getMaxSpeed() {	
		return maxSpeed;
	}
	// ������ (������������� ����� �������� ��� ���� ������)
	void setMaxSpeed(int newSpeed) {
		maxSpeed = newSpeed;
	}

	// ���������� ��������� == (���������������)
	bool operator==(Vehicle& other) {
		if (maxSpeed == other.maxSpeed && color == other.color && type == other.type) {
			return true;
		}
		return false;
	}

	bool operator!() {
		if (maxSpeed < 0) {
			return true;
		}
		return false;
	}

private:	
	int maxSpeed;
	std::string color;
	std::string type;
	//char* s;
};


int main() {
	//std::cout << "Start of main()" << std::endl;
	/*Vehicle car(20, "Black", "van");
	car.setMaxSpeed(50);
	std::cout << "Max speed is: " << car.getMaxSpeed() << std::endl;

	std::string carColor = car.getColor();
	std::cout << "carColor: " << carColor << " car.getColor() " << car.getColor() << std::endl;
	carColor = "Green";
	std::cout << "carColor: " << carColor << " car.getColor() " << car.getColor() << std::endl;

	const std::string& carType = car.getType();

	std::cout << carType << " " << car.getType() << std::endl;*/

	Vehicle originalCar(15, "white", "bus");
	Vehicle newCar(originalCar);
	Vehicle foreignCar(15, "white", "abc");

	/*std::cout << originalCar.getMaxSpeed() << " " << originalCar.getColor() << " " << originalCar.getType() << std::endl;
	std::cout << "=====================\n";
	std::cout << newCar.getMaxSpeed() << " " << newCar.getColor() << " " << newCar.getType() << std::endl;*/

	std::cout << (originalCar == newCar) << std::endl;
	std::cout << "=========\n";
	std::cout << (originalCar == foreignCar) << std::endl;

	//std::cout << "End of main()" << std::endl;


}