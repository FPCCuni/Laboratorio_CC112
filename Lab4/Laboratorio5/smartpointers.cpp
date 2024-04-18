//new delete
// es necesario delete para liberar memoria

//los smart pointers liberaran la memoria de forma automática

#include <iostream>
#include <memory>
using namespace std;

class Entity{
	public:
		Entity(){ //constructor 
			std::cout << "Creater Entity!" << std::endl;
		}
		~Entity(){ //Destructor
			std::cout << "Destroyed Entity!" << std:: endl;
		}
		void Print(){} 
};

int main(){
	{
		std::unique_ptr<Entity>(new Entity());
		
		entity->Print();
		
	}
	

	return 0;
}

