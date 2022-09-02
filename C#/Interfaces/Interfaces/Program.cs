using Interfaces;

Car car = new();

IMoveable transport = car;
ITestable test = car;

transport.Move();
test.Move();
