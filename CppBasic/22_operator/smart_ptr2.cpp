#include "car.h"
#include <memory>   // std::shared_ptr<>

int main()
{
    std::shared_ptr<Car> p (new Car);   // explicit
    p->Go();
    (*p).Go();
}