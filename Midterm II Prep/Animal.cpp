#include <iostream>
class Animal
{
  private:
    int speed;
    int jump_height;
  public:
    void Jump()
    {
      cout<<"I jumped!"<<endl;
    }
    void Walk()
    {
      cout<<"Walking..."<<endl;
    }
    Animal(int _speed, int _jump_height)
    {
      speed = _speed;
      jump_height = _jump_height;
    }
};

class Dog : Animal
{

};
